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
    if(root != NULL) return; 

        cout<<root->data<<" "; 
        PreOrder(root->left);
        PreOrder(root->right);
    }

 void PostOrder(struct Node* root){
    if(root == NULL) return ;
         
        PostOrder(root->left);
        PostOrder(root->right);
        cout<<root->data<<" ";

        //it way may be work

      // PostOrder(root->left) = void PostOrder(struct Node* root->left){
      //if(root->left == NULL) return; , it is not null
      //PostOrder(root->left->left) = void PostOrder(struct Node*root->left->left)
      //if(root->left->left == NULL) return; , yes it is}
      //cout<<root->left->left->data<<" "; root->left->left->data = 4

       //PostOrder(root->left->right) = void PostOrder(struct Node* root->left->right){
      //if(root->left->right == NULL) return; , yes it is
     //cout<<root->left->right->data<<" " root->left->right->data = 5

     //cout<<root->left->data<<" " , root->left->data = 2


           //              1  => root
           //           /     \
           //        _______    _______
           //       |  2    |  |  3    |
// left subTree =>  | / \   |  | / \   | => right subTree
               //   |4   5  |  |6   7  |


 }

 void InOrder(struct Node* root){
    if(root == NULL) return;

        InOrder(root->left);
        cout<<root->data<<" ";
        InOrder(root->right);

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