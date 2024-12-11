type PairType = [number, number]
function maxOperations(numsGiven: number[], k: number): number {
	let cnt: number = 0
	const nums: number[] = numsGiven.filter((num: number) => num < k).sort((a: number, b: number) => a - b)
	let left: number = 0, right = nums.length - 1

  const pairs: PairType[] = []
	while (left < right) {
		const num = nums[left] + nums[right]
		if (k === num) {
      pairs.push([nums[left],nums[right]])
			cnt++
			right--
			left++
		} else if (k < num) {
			right--
		} else { //k > num
			left++
		}
	}
  console.log(pairs)
	return cnt
}
console.log(maxOperations([3, 1, 3, 4, 3], 6))
