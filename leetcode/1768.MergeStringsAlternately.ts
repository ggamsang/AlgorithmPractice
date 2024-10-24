const max = (a:number, b:number):number => a > b ? a : b
var mergeAlternately = function(word1: any[], word2: any[]){
    const merged:any[] = []
    const lengthWord1:number = word1.length
    const lengthWord2:number = word2.length
    const maxLengthTwoWords:number = max(lengthWord1, lengthWord2)
    for(let i = 0; i < maxLengthTwoWords; i++) {
        if(i < lengthWord1) {
            merged.push(word1[i])
        }
        if(i < lengthWord2) {
            merged.push(word2[i])
        }
    }
    return merged.join('')
};
