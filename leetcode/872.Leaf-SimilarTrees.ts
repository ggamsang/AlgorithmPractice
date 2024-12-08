// 872. Leaf-Similar Trees

// Definition for a binary tree node.
import { TreeNode } from "./types"

const getLeavesFromTree = (head: TreeNode | null): number[] => {
    if (head === null)
        return []
    if (head.left === null && head.right === null)
        return [head.val]
    else
        return [...getLeavesFromTree(head.left), ...getLeavesFromTree(head.right)]
}

const leafSimilar = (root1: TreeNode | null, root2: TreeNode | null): boolean => {
    const leaves1: number[] = getLeavesFromTree(root1)
    const leaves2: number[] = getLeavesFromTree(root2)

    return leaves1.toString() === leaves2.toString()
    // console.log(leaves1, leaves2)
    // if (leaves1.length !== leaves2.length)
    //     return false
    // for (let i = 0; i < leaves1.length; i++)
    //     if (leaves1[i] !== leaves2[i])
    //         return false
}


const root1 = new TreeNode(3, new TreeNode(5, new TreeNode(6), new TreeNode(2, new TreeNode(7), new TreeNode(4))), new TreeNode(1, new TreeNode(9), new TreeNode(8)))
const root2 = new TreeNode(3, new TreeNode(5, new TreeNode(6), new TreeNode(7)), new TreeNode(1, new TreeNode(4), new TreeNode(2, new TreeNode(9), new TreeNode(8))))

console.log(leafSimilar(root1, root2))