type Fn = (accum: number, curr: number) => number

function reduce(nums: number[], fn: Fn, init: number): number {
	let accum: number = init
	
	nums.forEach((curr: number) => {
		accum = fn(accum, curr)
	})

	return accum
}



/*
--- for of loop
function reduceArray(nums, fn, init) {
  let val = init;
  for (const num of nums) {
    val = fn(val, num);
  }
  return val;
}
---- recursion
function reduceArray(nums, fn, init) {
  if (nums.length === 0) {
    return init;
  } else {
    const head = nums[0];
    const tail = nums.slice(1);
    const val = fn(init, head);
    return reduceArray(tail, fn, val);
  }
}
*/
