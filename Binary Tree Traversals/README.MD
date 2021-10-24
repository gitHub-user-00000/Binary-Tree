# Traversals in a binary tree.

## we have 3 types of traversals 

### tree 


                          1  => root
                       /     \
                   _______    _______
                  |  2    |  |  3    |
 left subTree =>  | / \   |  | / \   | => right subTree
                  |4   5  |  |6   7  |


## 1 : PreOrder

### Root -> Left SubTree ->Right SubTree


                          1  => root
                       /     \
                   _______    _______
                  |  2    |  |  3    |
 left subTree =>  | / \   |  | / \   | => right subTree
                  |4   5  |  |6   7  |


### first for all write root 1 .  // 1

### secondly go with Left SubTree  , i consider Left SubTree as a tree.

                   _______  
                  |  2    |
 left subTree =>  | / \   |
                  |4   5  |

so Left SubTree(tree)'s root 2 //1 2 
so Left SubTree(tree)'s lest is 4 // 1 2 4 
so Left SubTree(tree)'s right is 5 //1 2 4 5

 now restart with 1 but 1 is already write 

### thirdly go with Right SubTree , i consider Right SubTree as a tree. 

                     _______
                    |  3    |
                    | / \   | => right subTree
                    |6   7  |

so Right SubTree(tree)'s root 3 //1 2 4 5 3 (1 is already write) 
so Right SubTree(tree)'s lest is 6 // 1 2 4 5 3 6
so Right SubTree(tree)'s right is 7 //1 2 4 5 3 6 7

    



## 2 : PostOrder

### Left SubTree-> Right SubTree ->Root

                          1  => root
                       /     \
                   _______    _______
                  |  2    |  |  3    |
 left subTree =>  | / \   |  | / \   | => right subTree
                  |4   5  |  |6   7  |

### firstly go with Left SubTree  , i consider Left SubTree as a tree.

                   _______  
                  |  2    |
 left subTree =>  | / \   |
                  |4   5  |

so Left SubTree(tree)'s left 4 // 4 
so Left SubTree(tree)'s right is 5 // 4 5 
so Left SubTree(tree)'s root is 5 // 4 5 2

### secondly go with Right SubTree , i consider Right SubTree as a tree. 

                     _______
                    |  3    |
                    | / \   | => right subTree
                    |6   7  |

so Right SubTree(tree)'s left 6 // 4 5 2 6
so Right SubTree(tree)'s right is 7// 4 5 2 6 7
so Right SubTree(tree)'s root is 3 // 4 5 2 6 7 3

### thirdly for all write root 1. // 4 5 2 6 7 3 1


## 3 : InOrder

### Left SubTree-> Root -> Right SubTree 


                          1  => root
                       /     \
                   _______    _______
                  |  2    |  |  3    |
 left subTree =>  | / \   |  | / \   | => right subTree
                  |4   5  |  |6   7  |


### firstly go with Left SubTree  , i consider Left SubTree as a tree.

                   _______  
                  |  2    |
 left subTree =>  | / \   |
                  |4  5   |

so Left SubTree(tree)'s Left SubTree 4 // 4
so Left SubTree(tree)'s Root is 2 // 4 2
so Left SubTree(tree)'s Right SubTree  is 5 // 4 2 5


### secondly root if tree is root is 1 // 4 2 5 1 


### thirdly go with Right SubTree , i consider Right SubTree as a tree. 

                     _______
                    |  3    |
                    | / \   | => right subTree
                    |6   7  |

so Right SubTree(tree)'s Left SubTree 6 //4 2 5 1 6 
so Right SubTree(tree)'s root 3 // 4 2 5 1 6 3
so Right SubTree(tree)'s right is 7 //4 2 5 1 6 3  7