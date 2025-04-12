function solution(s) {
    let stack = []
    for(const char of s) {
        const i = stack.length - 1
        if(stack[i] === char) {
            stack.pop()
        } else {
            stack.push(char)
        }
        if(i > (s.length/2))
            return 0
    }
    return stack.length === 0 ? 1 : 0
}

/*
 s	result
baabaa	1
cdcd	0
 */
