// 104. Maximum Depth of Binary Tree

// Given the root of a binary tree, return its maximum depth.
// A binary tree's maximum depth is the number of nodes along the longest path from the root node down to the farthest leaf node.
import { TreeNode } from "./types";
//  l n n r n n r l n n r n n 
const maxDepth = (root: TreeNode | null): number => {
    let max = 0, count = 0

    const counting = (head: TreeNode | null): void => {
        if (head === null) return

        count++

        if (head.left)
            counting(head.left)

        if (head.right)
            counting(head.right)

        if (max < count)
            max = count
        
        count--
    }
    counting(root)
    return max
}
/*-------------*\
 |  3          |
 | |  \        |
 | 9     20    |
 | | \    | \  |
 | .  .  15  7 |
\*-------------*/
// Example 1:
// Input: root = [3,9,20,null,null,15,7]
// Output: 3
// Example 2:
// Input: root = [1,null,2]
// Output: 2
const tree1 =
    new TreeNode(3,
        new TreeNode(9, null, null),
        new TreeNode(20,
            new TreeNode(15),
            new TreeNode(7)))

console.log("max: ", maxDepth(tree1))