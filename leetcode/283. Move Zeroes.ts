


const movezeroes = (nums: number[]): void => {

  for (let l = 0; l < nums.length; l++) {
    let r = l + 1

    while(r < nums.length && nums[r] !== 0) {
      r++
    }

    if(nums[l] === 0) {
      nums[l] = nums[r]
      nums[l] = 0
    }

  }

}
/* someone's solution
 function moveZeroes(nums: number[]): void {
    let left: number = 0;
    for (let right = 0; right < nums.length; right++) {
        if (nums[right] !== 0) {
            [nums[left], nums[right]] = [nums[right], nums[left]];
            left++;
        }
    }
*/
