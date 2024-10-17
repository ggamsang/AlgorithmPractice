type JSONValue = null | boolean | number | string | JSONValue[] | { [key: string]: JSONValue }
type OnceFn = (...args: JSONValue[]) => JSONValue | undefined

function once(fn: Function): OnceFn {
  let called: boolean = false

  return function (...args) {

    if(!called) {
      
      const value: JSONValue = fn(...args)
      
      called = true

      return { value }   
    
    } else {
    
      return undefined
    
    }
  }
}

const fn = (a: number, b: number ,c: number): any => (a + b + c)
//  calls = [[1,2,3],[2,3,6]]
// Output: [{"calls":1,"value":6}]
// Explanation:
const onceFn = once(fn);
console.log(onceFn(1, 2, 3)); // 6
console.log(onceFn(2, 3, 6)); // undefined, fn was not called

/* -----
Example 1:
Input: fn = (a,b,c) => (a + b + c), calls = [[1,2,3],[2,3,6]]
Output: [{"calls":1,"value":6}]
Explanation:
const onceFn = once(fn);
onceFn(1, 2, 3); // 6
onceFn(2, 3, 6); // undefined, fn was not called
------
Example 2:
Input: fn = (a,b,c) => (a * b * c), calls = [[5,7,4],[2,3,6],[4,6,8]]
Output: [{"calls":1,"value":140}]
Explanation:
const onceFn = once(fn);
onceFn(5, 7, 4); // 140
onceFn(2, 3, 6); // undefined, fn was not called
onceFn(4, 6, 8); // undefined, fn was not called
----- */

/* ------- 
 fn = (a,b,c) => (a + b + c)
 calls = [[1, 2, 3], [2, 3, 6]]
 Expected [{ "calls":1, "value":6 }]
 */
