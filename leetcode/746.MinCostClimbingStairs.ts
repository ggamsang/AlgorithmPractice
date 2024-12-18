function minCostClimbingStairs(cost: number[]): number {

  const n = cost.length
  const dp: number[] = new Array(n + 1).fill(0)

  for (let i = 2; i <= n; i++) {
    dp[i] = Math.min(dp[i - 1] + cost[i - 1], dp[i - 2] + cost[i - 2])
  }

  return dp[n]
  
}


// console.log(minCostClimbingStairs([10, 15, 20]), " answer is ", 15)
console.log(minCostClimbingStairs([1, 100, 1, 1, 1, 100, 1, 1, 100, 1]), " answer is ", 6)
// console.log(minCostClimbingStairs([1000, 100, 1, 1, 1, 100, 1, 1, 100, 1]), " answer is ", 6)




