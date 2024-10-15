function map(arr: number[], fn: (n: number, i: number) => number): number[] {

		const returnedArray: number[] = []
		let index: number = 0

		arr.forEach((num: number) => {
				returnedArray.push(fn(num, index))
				index++
		})

		return returnedArray
}
