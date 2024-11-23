function reverseVowels(s: string): string {
    const str: string[] = [...s]
    const reversed: string[] = []
    const vowels: string = 'aeiouAEIOU'
    const stack: string[]= []

    str.forEach(char => {
        if(vowels.includes(char)){
            stack.push(char)
        }

    })

    str.forEach(char => {

        if(vowels.includes(char)){

          const popped = stack.pop()

          if(popped !== undefined) {

            reversed.push(popped)

          }

        } else {

            reversed.push(char)

        }
    })

    return reversed.join("")
}
