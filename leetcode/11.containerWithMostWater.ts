const maxArea = (heights: number[]): number => {
    let left = 0
    let right = heights.length - 1
    let maxArea = 0

    while (left < right) {
        const width = right - left
        const height = Math.min(heights[left], heights[right])
        const area = width * height

        maxArea = Math.max(maxArea, area)

        if (heights[left] < heights[right]) {
            left++
        } else {
            right--
        }
    }

    return maxArea
}
