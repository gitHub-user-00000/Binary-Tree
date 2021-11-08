#include <iostream>
using namespace std;

struct Node
{
     int data ;
     struct Node* left ; //store adress of left child
     struct Node* right; //store adress of right child

     //constructor
    Node(int value){
        data = value; // store node value in data
        left = NULL; // create node's left child null
        right = NULL; // create node's right child null
    }
};

  void PreOrder(struct Node* root){
    if(root != NULL){ 

        cout<<root->data<<" "; 
        PreOrder(root->left);
        PreOrder(root->right);

    }
 }

 void PostOrder(struct Node* root){
    if(root != NULL){ 
 
        PostOrder(root->left);
        PostOrder(root->right);
        cout<<root->data<<" ";
    }
 }

 void InOrder(struct Node* root){
    if(root != NULL){ 
 
        InOrder(root->left);
        cout<<root->data<<" ";
        InOrder(root->right);

    }
 }



int main(){

    // Root -> Left SubTree ->Right SubTree
    // new use for allocate the function in memory
    struct Node* root = new Node(1); // Node => Node(int value) value = 1 , so it node data is 1
    root->left = new Node(2); //Node => Node(int value) value = 2 , so it node data is 2
    root->right = new Node(3);

    //i create all root's subtrees data.

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

   root->right->left = new Node(6);
   root->right->right = new Node(7);

   /* ex:
          1
         / \
       2     3
      / \   / \
     4   5 6   7

   */

 //PreOrder(root);
 PostOrder(root);
 //InOrder(root);

     return 0;
}