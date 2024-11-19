function kidsWithCandies(candies: number[], extraCandies: number):boolean[] {
  const theGreatestCandy = candies.reduce((acc,curr):number => curr >= acc ? curr : acc)

  const answer = candies.map(numThisChildCandyHas => extraCandies + numThisChildCandyHas >= theGreatestCandy)

  return answer
}
