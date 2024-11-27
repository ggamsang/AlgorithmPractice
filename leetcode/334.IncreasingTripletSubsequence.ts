type Numbers = number[]
const increasingTriplet = (nums: Numbers): boolean => {

    let n1:number = Number.MAX_SAFE_INTEGER,
        n2:number = Number.MAX_SAFE_INTEGER
            
    for(const n of nums){

        if(n > n2)
            return true

        if(n <= n1)
            n1 = n

        else if (n <= n2)
            n2 = n
    }

    return false
}

console.log('started')
console.log(increasingTriplet([1,2,3,4])?"True":"False")
console.log(increasingTriplet([4,3,2,1])?"True":"False")
console.log('terminated')
