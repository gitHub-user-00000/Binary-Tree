#include <iostream>
using namespace std;

struct Node
{
    int data;
    struct Node* left; //left child
    struct Node* right; //right child

    Node(int value){
        data = value;
        left = NULL;
        right = NULL;
    }
};


int main(){

    struct Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);

    /* ex:
          1  => root
         / \
        2   3
    */

   root->left->left = new Node(4);
   root->left->right = new Node(5);

   /* ex:
           1
         / \
        2   3
       / \
      4   5

   */

    return 0;
}