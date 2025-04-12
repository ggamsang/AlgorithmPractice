function solution(A, B) {
    const row = A.length
    const col = B[0].length
    const n = A[0].length
/*
   (3)x2 x 2x(2) = 3x2
*/
    const C = A.map(() => Array(B[0].length).fill(0));
    console.log(C, row, col, n)
    for(let i = 0; i < row; i++) {
        
        for(let k = 0; k < col; k++) {
            let sum = 0
            for(let j =0; j<n; j++)
                sum += A[i][j]*B[j][k]
            C[i][k] = sum
        }
        
    }
    console.log(C)
    return C;
}
