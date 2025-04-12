/*
    s	        answer
    "()()"	    true
    "(())()"    true
    ")()("	    false
    "(()("	    false
    
good solution
function solution(s){
    let cum = 0
    for (let paren of s) {
        cum += paren === '('? 1: -1
        if(cum < 0) {
            return false
        }
    }
    return cum === 0;
}
*/
function solution(s) {
    let open = false
    let depth = 0
    for(let i = 0; i < s.length; i++) {
        const bracket = s[i]
        
        if(bracket === '(') {
            depth++
            open = true
            if(i === s.length-1) return false
        } else {
            depth--
            open = false
            if(i===0) return false
        }
        if(depth < 0) return false
    }
        
    return open === false && depth === 0
}
