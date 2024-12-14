function tribonacci(n: number): number {
    const T: number[] = new Array(38).fill(0)
    T[0] = 0, T[1] = 1, T[2] = 1
    for (let i = 3; i < T.length; i++) {
        T[i] = T[i - 1] + T[i - 2] + T[i - 3]
    }
    return T[n]
}
console.log(tribonacci(37))
console.log(tribonacci(3))
console.log(tribonacci(7))
