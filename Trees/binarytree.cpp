#include<bits/stdc++.h>
using namespace std;
class BinaryTree{
    public:
        int value;
        BinaryTree* left;
        BinaryTree* right;
        BinaryTree(int i){
            value = i;
            left = NULL;
            right = NULL;

        }
};
void insertToBinaryTree(int i,BinaryTree* node){
    
       if(node->value<=i){
           if(node->right==NULL)
           {
               node->right = new BinaryTree(i);
           }
           else
           {
            insertToBinaryTree(i,node->right);
           }
       }
       else {
           if(node->left==NULL)
           {
               node->left = new BinaryTree(i);
           }
           else
           {
            insertToBinaryTree(i,node->left);
           }
       }
   
}

void prefixOrder(BinaryTree* node){
    if(node!=NULL){
        cout<<node->value<<"\n";
        prefixOrder(node->left);
        prefixOrder(node->right); 
    }
    else{
    return;
    }
}

void postfixOrder(BinaryTree* root){
    if(root->value!=0&&root!=NULL){
        prefixOrder(root->left);
        prefixOrder(root->right);
        cout<<root->value<<"\n";
    }
    else
    {
        return;
    }
}

void inOrder(BinaryTree* root){
    if(root->value!=0&&root!=NULL){
        prefixOrder(root->left);
        cout<<root->value<<"\n";
        prefixOrder(root->right);
    }
    else
    {
        return;
    }
}
int main(){
    BinaryTree* root = new BinaryTree(10);
    for(int k=0;;k++){
        cout<<"Enter number to add in binary tree and put -1 for exiting"<<"\n";
        int i;
        cin>>i;
        if(i!=-1)
            insertToBinaryTree(i,root);
        else 
        {
            break;
        }
    } 
    prefixOrder(root);
}
