function countSetBits(n: number): number {
    let count = 0
    while (n) {
        count += n & 1
        n >>= 1
    }
    return count
}

function countBits(n: number): number[] {
    const counts: number[] = []
    for (let i = 0; i <= n; i++) {
        counts.push(countSetBits(i))
    }
    return counts
}
