function getAlphabetBins(input: string): number[] {
  return input
    .toLowerCase()
    .split("")
    .reduce((acc: number[], char: string) => {
      if (char >= "a" && char <= "z") {
        const index = char.charCodeAt(0) - "a".charCodeAt(0);
        acc[index]++;
      }
      return acc;
    }, new Array(26).fill(0));
}

function compare(arr1: number[], arr2: number[]): boolean {
  if (arr1.length !== arr2.length) {
    return false;
  }

  for (let i = 0; i < arr1.length; i++) {
    if (arr1[i] !== arr2[i]) {
      return false;
    }
  }

  return true;
  //return arr1.every((value, index) => value === arr2[index]);
}

function isAnagram(s: string, t: string): boolean {
  const binS = getAlphabetBins(s);
  const binT = getAlphabetBins(t);
  return compare(binS, binT);
}
