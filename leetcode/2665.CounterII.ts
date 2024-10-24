type Counter = {
	increment: () => number,
	decrement: () => number,
	reset: () => number,
}

function createCounter(init: number): Counter {
	let num = init
	return {
		increment: (): number => ++num,
		decrement: (): number => --num,
		reset: (): number => {
			num = init
			return num
		}
	}
}
