function longestSubarray(nums: number[]): number {

    // just think about 0s
    if (nums.filter((num: number) => num === 0).length === 0) {
        return nums.length - 1
    }

    function fn(arr: number[]): number[] {
        const result: number[] = []
        let count = 0

        for (let i = 0; i < arr.length; i++) {
            if (arr[i] === 1) {
                count++
            } else {
                result.push(count)
                count = 0
            }
        }
        result.push(count)
        return result
    }

    const collasped = fn(nums)
    let max: number = 0
    for (let i = 0; i < collasped.length - 1; i++) {
        if (max < (collasped[i] + collasped[i + 1])) {
            max = (collasped[i] + collasped[i + 1])
        }
    }
    return max
}


/*
// O(n) time
// O(1) space
function longestSubarray(nums: number[]): number {
    let maxLength = 0;
    let count = 0;
    let onesBefore = 0;
    for(const num of nums) {
        if(num) {
            count++;
            maxLength = Math.max(maxLength, count + onesBefore);
        } else {
            onesBefore = count;
            count = 0;
        }
    }
    return Math.min(maxLength, nums.length - 1);
};
*/
