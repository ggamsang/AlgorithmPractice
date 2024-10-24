async function sleep(millis: number): Promise<void> {
    // return new Promise((resolve) => {
    // setTimeout(() => {
    //     resolve(null)
    // }, millis)
    // })
    return new Promise(resolve => setTimeout(resolve, millis))
}
/*
   const sleep = (millis:number) => new Promise(resolve => resolve, millis) 
 */
/** 
 * let t = Date.now()
 * sleep(100).then(() => console.log(Date.now() - t)) // 100
 */
