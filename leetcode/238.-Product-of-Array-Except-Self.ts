const productExceptSelf = (nums: number[]): number[] => {
    const products: number[] = new Array(nums.length).fill(1)

    for (let i = 1; i < nums.length; i++) {
        products[i] = nums[i - 1] * products[i - 1]
    }

    let right: number = 1
    for (let i = nums.length - 1; i >= 0; i--) {
        products[i] *= right
        right *= nums[i]
    }

    return products
}
