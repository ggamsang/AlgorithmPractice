type Fn = (n: number, i: number) => any

function filter(arr: number[], fn: Fn): number[] {
	
	const newArr: number[] = []
	
	let index: number = 0
	arr.forEach((num: number) => {
		let isMatched: boolean = fn(num, i)
		
		if(isMatched)
			newArr.push(num)
		
		index++
	})
	
	return newArr
}

/*
others solution
----------------
type FilterFn<T> = (element: T, index?: number, array?: T[]) => boolean;

function filter<T>(arr: T[], fn: FilterFn<T>): T[] {
    const filteredArr: T[] = [];
    for (let i = 0; i < arr.length; i++) {
        if (fn(arr[i], i, arr)) {
            filteredArr.push(arr[i]);
        }
    }
    return filteredArr;
}
--------------
function filter(arr, fn) {
 let currentIndex = 0;
 for (let i = 0; i < arr.length; i++) {
   if (fn(arr[i], i)) {
     arr[currentIndex] = arr[i];
     currentIndex++;
   }
 }
 arr.length = currentIndex;
 return arr;
}
------------

*/
