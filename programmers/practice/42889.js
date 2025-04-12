function solution(N, stages) {
/*
N	stages	result
5	[2, 1, 2, 6, 2, 4, 3, 3]	[3,4,2,1,5]
4	[4,4,4,4,4]	[4,1,2,3]


[2, 1, 2, 6, 2, 4, 3, 3]
   1 2 2 2 3 3 4 6
   1 2 2 2 3 3 4 6
*/
    const answer = []
    stages = stages.sort((a, b) => a-b)
    for(let i = 1; i <= N; i++) {
        const all = stages.filter(stage => i < stage)
        const cur = [stages.filter(stage => stage === i)].reduce((a,b) => a + b) || 0
        // console.log(i, ":", cur.length,"/", cur.length + all.length)
        answer.push([i, cur.length / (cur.length + all.length)])
    }
    return answer.sort((A,B)=>B[1]-A[1]).map(item=>item[0])
}

