function largestAltitude(gain: number[]): number {

    let highest: number = 0
    let prev: number = 0

    for (let i = 0; i < gain.length; i++) {
        prev = gain[i] + prev

        if(highest < prev) {
            highest = prev 
        }

    }

    return highest
}
