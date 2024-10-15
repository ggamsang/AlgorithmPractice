const createCounter = (n: number): () => number => {
	let cnt = n
	return () => cnt++
}
