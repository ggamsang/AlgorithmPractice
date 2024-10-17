type F = (x: number) => number

function compose(functions: F[]): F {
  return function(x: number) {
    return functions.reverse().reduce((accum, curr) => curr(accum), x)
  }
}

/**
 *  const fn = compose([x => x + 1, x => 2 * x])
 *  fn(4) // 9
 */

/*

Code In TypeScript
type Func = (arg: any) => any;

function compose(functions: Func[]): Func {
  if (functions.length === 0) {
    return (x: any) => x;
  }

  return functions.reduceRight((prevFn, nextFn) => {
    return (x: any) => {
      return nextFn(prevFn(x));
    };
  });
}

const fn = compose([x => x + 1, x => 2 * x]);
console.log(fn(4)); // 9
O(1) space complexity
var compose = function(functions) {
  if (functions.length === 0) {
    return function(x) { return x; };
  }
  
  return function(x) {
    let result = x;
    for (let i = functions.length - 1; i >= 0; i--) {
      result = functions[i](result);
    }
    return result;
  }
};

const fn = compose([x => x + 1, x => 2 * x]);
console.log(fn(4)); // 9
*/
