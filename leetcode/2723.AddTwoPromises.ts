type P = Promise<number>

async function addTwoPromises(promise1: P, promise2: P): P {
    // arr.reduce((accumulator, currentValue) => accumulator + currentValue, 0);
    return Promise.all([promise1, promise2]).then(ary => ary.reduce((a, c) => a + c, 0))
};

/**
 * addTwoPromises(Promise.resolve(2), Promise.resolve(2))
 *   .then(console.log); // 4
 */
