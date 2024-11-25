function reveseWords(s: string): string {

  return s.trim().split(" ").filter(word => word !== '').reverse().join(' ')

}
