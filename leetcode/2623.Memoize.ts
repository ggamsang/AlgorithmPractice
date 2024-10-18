type Fn = (...params: number[]) => number

function memoize(fn: Fn): Fn {
  let callCount: number = 0
  const memoize: Map<string, number> = new Map()

  return function (...args) {
    const key = JSON.stringify(args)
    let value: number | undefined = memoize.get(key) 

    if (value === undefined) { /* prefer to use NULL*/
      value = fn(...args)
      memoize.set(key, value)
      callCount++
    }

    return value
  }
}
