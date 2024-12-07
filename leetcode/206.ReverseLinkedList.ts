
class ListNode {
    val: number
    next: ListNode | null
    constructor(val?: number, next?: ListNode | null) {
        this.val = (val === undefined ? 0 : val)
        this.next = (next === undefined ? null : next)
    }
}
// Given the head of a singly linked list, reverse the list, and return the reversed list.
// Input: head = [1,2,3,4,5]
// Output: [5,4,3,2,1]
function reverseList(head: ListNode | null): ListNode | null {
    const valuestack: number[] = []
    let curHead = head
    while (curHead) {
        valuestack.push(curHead.val)
        curHead = curHead.next
    }
    curHead = head
    valuestack.reverse()
    while (curHead) {
        const value = valuestack.shift()
        curHead.val = value ?? 0
        curHead = curHead.next
    }
    return head
}

const val5: ListNode = new ListNode(5, null)
const val4: ListNode = new ListNode(4, val5)
const val3: ListNode = new ListNode(3, val4)
const val2: ListNode = new ListNode(2, val3)
const val1: ListNode = new ListNode(1, val2)

let head = reverseList(val1)
while (head) {
    console.log(head.val)
    head = head.next
}



function reverseListAnothers(head: ListNode | null): ListNode | null {
    let prev: ListNode | null = null

    while(head) {
        prev = new ListNode(head.val, prev)
        head = head.next
    }

    return prev
}