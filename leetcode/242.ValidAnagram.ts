function getAlphabetBins(input: string): number[] {
  const alphabets= "abcdefghijklmnopqrstuvwxyz"
  const bin:number[]= new Array(alphabets.length).fill(0)
  
  for (let i = 0; i < input.length; i++) {
    bin[alphabets.indexOf(input[i])]++
  }
  
  return bin
}

function compare(arr1: number[], arr2: number[]): boolean {
  if (arr1.length !== arr2.length) {
    return false
  }

  for (let i = 0; i < arr1.length; i++) {
    if (arr1[i] !== arr2[i]) {
      return false
    }
  }

  return true
}

function isAnagram(s: string, t: string): boolean {
  const binS = getAlphabetBins(s)
  const binT = getAlphabetBins(t)

  return compare(binS, binT)
}
