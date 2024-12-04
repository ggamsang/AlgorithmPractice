function findMaxAverage(nums: number[], k: number): number {

    let sum: number = nums.slice(0, k).reduce((a: number, c: number) => a + c)
    let max: number = sum // Number.MIN_SAFE_INTEGER

    for (let left = 0, right = k; right < nums.length; right++, left++) {
        sum -= nums[left]
        sum += nums[right]

        if (sum > max) {
            max = sum
        }
    }

    return Number((max / k).toFixed(5))

}
