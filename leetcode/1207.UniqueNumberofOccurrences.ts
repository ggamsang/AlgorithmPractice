// 1207. Unique Number of Occurrences
// Given an array of integers arr, return true if the number of occurrences of each value in the array is unique or false otherwise.
function uniqueOccurrences(arr: number[]): boolean {
    const counts: number[] = [...new Set(arr)]
        .map(num => (arr.filter(n => n === num)?.length))

    return new Set(counts).size === counts.length
    // !counts.some((value, index) => counts.indexOf(value) !== index)
}

console.log("case 1st: ", uniqueOccurrences([1, 2, 2, 1, 1, 3]) === true ? "✅" : "❌")
console.log("case 2nd: ", uniqueOccurrences([1, 2]) === false ? "✅" : "❌")
console.log("case 3rd: ", uniqueOccurrences([-3, 0, 1, -3, 1, 1, 1, -3, 10, 0]) === true ? "✅" : "❌")

/*
    const cache = new Map();

    for (let i = 0; i < arr.length; i++)
        cache.set(arr[i], (cache.get(arr[i]) || 0) + 1);

    const ans = Array.from(cache.values());
    return new Set(ans).size === ans.length;
*/