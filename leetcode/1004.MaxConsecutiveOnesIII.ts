function findMaxLongOnes(nums: number[]): number {
    let max: number = 0
    let cnt: number = 0
    for (let i = 0; i < nums.length; i++) {
        if (nums[i] === 0) {
            cnt = 0
        } else {
            cnt++
        }
        max = Math.max(max, cnt)
    }
    return max
}

function longestOnes(nums: number[], k: number): number {
    let start: number = 0
    let max: number = 0
    let zeroCount: number = 0

    for (let end = 0; end < nums.length; end++) {
        if (nums[end] === 0) {
            zeroCount++
        }

        while (zeroCount > k) {
            if (nums[start] === 0) {
                zeroCount--
            }
            start++
        }

        max = Math.max(max, end - start + 1)
    }

    return max
}

console.log('Example 1:')
console.log(longestOnes([1, 1, 1, 0, 0, 0, 1, 1, 1, 1, 0], 2), "Output should be: 6")
console.log('Example 2:')
console.log(longestOnes([0, 0, 1, 1, 0, 0, 1, 1, 1, 0, 1, 1, 0, 0, 0, 1, 1, 1, 1], 3), "Output should be: 10")
