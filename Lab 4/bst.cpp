#include <iostream>
using namespace std;

struct Node{
    int data;
    Node *left,*right;
    Node (int val){
        data=val;
        left=NULL;
        right=NULL;
    }
};
Node* insertBST(Node *root,int val){
if(root==NULL){
    return new Node(val);
}
    if(val < root->data){
        root->left=insertBST(root->left,val);
      }
      else
      {
        root->right=insertBST(root->right,val);
      }
      return root;
}

void inorder(Node *root){
    if(root==NULL){
        return;
    }
    inorder(root->left);
    cout<<root->data<<"";
    inorder(root->right);
}
bool Search(Node* root, int data){
    if(root==NULL){
    return false;
    }
    else if(root->data==data){
        return true;
    }
    else if(data<=root->data){
        return Search(root->left,data);
    }
    else{
        return Search(root->right,data);
    }
}

int main(){
    Node *root=NULL;
    root=insertBST(root,5);
    insertBST(root,1);
    insertBST(root,3);
    insertBST(root,4);
    insertBST(root,2);
    insertBST(root,7);

    inorder(root);
    int number;
    cout<<"enter number to be searched\n";
    cin>>number;
    if(Search(root,number)==true){
    cout<<Found\n";
    }
    else
    {
        cout<<"Not Found\n";
    }
    cout<<endl;
    return 0;
}