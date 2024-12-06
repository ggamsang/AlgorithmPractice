
function pivotIndex(nums: number[]): number {

    let rightsum: number = nums.reduce((acc, num) => acc + num, 0)
    let leftsum: number = 0

    for (let i = 0; i < nums.length; i++) {
        // console.log("1.", i, leftsum, rightsum, nums)

        rightsum -= nums[i]
        // console.log("2.", i, leftsum, rightsum, nums)
        if (rightsum === leftsum) {
            return i
        }

        leftsum += nums[i]
        // console.log("3.", i, leftsum, rightsum, nums)

    }

    return -1
}
/*
0 0 28  1, 7, 3, 6, 5, 6
0 0 27
0 1 27

1 1     1, 7, 3, 6, 5, 6

*/

console.log("result: ", pivotIndex([1, 7, 3, 6, 5, 6]), " expected: ", 3)
console.log("result: ", pivotIndex([1, 2, 3]), " expected: ", -1)
console.log("result: ", pivotIndex([2, 1, -1]), " expected: ", 0)