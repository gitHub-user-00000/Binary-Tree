# what is binary tree

## what is Node specification.
in a binary tree at max kisi bhi nodes[1's have 2 and 3 child, 2's have 4 and 5 child , 3's have 6 and 7 child , 4;s have 8 and 9 , 7's have 10 child.] ke two hi ya one , zero children ho sakte hai

## what is root Node :
 ex:
          1  => root Node
        /   \
      2       3 => 1 Nodes childere.
     /  \    /  \
    4    5   6    7 => 2 Nodes childere.
     /  \         \
    8    9          10 => 3 Nodes childere.


## properties of Binary Tree

### Maximum nodes at level L = 2^L (L = level)

   so zero level par root hoti hai , so L = 0 => 2^0 = 1 is maximus node of root. so 1 is starting point.
   first level par L = 1  => 2^1 = 2 nodes , so level one par maximium number of nodes is 2.
   second level par L = 2 => 2^2 = 4 nodes , so level two par maximum number of nodes is 4.

   isme node 0 aur 1 bhi ho sakti hai but i talking about maximum .

   ### Maximum nodes in a tree of hieght H is 2^H - 1

   using this formula i calcaulate nodes using hieght.
   ex :

          1  => (1 root node) => 1 hieght
        /   \
      2       3 => (2 nodes) => 2 hieght
     /  \    /  \
    4    5   6    7 => (4 nodes) => 3 hieght

    maximum number node is 1 +2 + 4 = 7.

    Maximum nodes in a tree of hieght H = 2^H - 1 = 2^3 - 1 
                                                  = 8 -1 
                                                  = 7







