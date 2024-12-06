function findDifference(nums1: number[], nums2: number[]): number[][] {
    
    return [
        [...new Set(nums1)].filter((num: number) => ![...new Set(nums2)].includes(num)),
        [...new Set(nums2)].filter((num: number) => ![...new Set(nums1)].includes(num))
    ]
}


/*
Input: nums1 = [1,2,3], nums2 = [2,4,6], 
Output: [[1,3],[4,6]]
Input: nums1 = [1,2,3,3], nums2 = [1,1,2,2]
Output: [[3],[]]
*/
console.log(findDifference([1, 2, 3], [2, 4, 6]), [[1, 3], [4, 6]])