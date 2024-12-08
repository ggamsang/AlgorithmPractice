// 700. Search in a Binary Search Tree

//   Definition for a binary tree node.
import { TreeNode } from "./types"

// You are given the root of a binary search tree (BST) and an integer val.
// Find the node in the BST that the node's value equals val and return the subtree rooted with that node. If such a node does not exist, return null.
function searchBST(root: TreeNode | null, val: number): TreeNode | null {

    if (root === null)
        return null

    if (root.val === val)
        return root

    return val < root.val
        ? searchBST(root.left, val)
        : searchBST(root.right, val)

}

// Example 1:
// Input: root = [4,2,7,1,3], val = 2
// Output: [2,1,3]
const root = new TreeNode(4)
root.left = new TreeNode(2, new TreeNode(1), new TreeNode(3))
root.right = new TreeNode(7)

console.log(searchBST(root, 2))