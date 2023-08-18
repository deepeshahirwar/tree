#include<iostream> 
using namespace std;  
void preOrder(node* root){ 
    if(root!= NULL){ 
        cout<<root->data<<endl; 
preOrder(root->left); 
preOrder(root->right); 

    }
}
int main(){  
     
     int data; 
     cin>>data; 
     preOrder(root); 

     
     return 0;
}