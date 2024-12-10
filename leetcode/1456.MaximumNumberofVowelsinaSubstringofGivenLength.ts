function maxVowels(s: string, k: number): number {
    const vowels: string = "aeiou"

    const n: number[] = s.split('').map(ch => vowels.includes(ch) ? 1 : 0)


    let prevIndex: number = -1
    let count: number = n.slice(0, k).reduce((a, b) => a + b)
    let maxCount: number = count
    for (let i = k; i < n.length; i++) {
        prevIndex = i - k < 0 ? 0 : i - k
        count -= n[prevIndex]
        count += n[i]
        if (maxCount < count)
            maxCount = count
    }

    return maxCount
}

console.log(maxVowels("aebesifesix,fiesntievnrs",3))
