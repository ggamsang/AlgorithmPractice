function isSubsequence(s: string, t: string): boolean {
    // if (s.length === 0) return true
    if(s === t) return true
    if(s.length > t.length) return false

    for (let i = 0, cur = 0; i < t.length; i++) {
        if(t[i] === s[cur]) {
            cur++
        }
        if(cur === s.length){
            return true
        }
    }
    return false
}
