#include<bits/stdc++.h> 
#include<queue> 
using namespace std;  

 int  buildTreeFromLevelOrder(node* root){ 
    queue<node*> q; 
    cout<<" enter data for  root : "<<endl; 

     int data; 
     cin>>data;  
     root = new node(data); 
     q.push(root);  
      
      while(!q.empty()){ 
        node* temp = q.front();
      
      
      cout<<" Enter left node for : "<<temp->data << endl;  
      int leftData; 
      cin>>leftData; 
       
       if(leftData != -1){ 
        temp->left = new node(leftData); 
        q.push(temp->left);
       }
        
         cout<<" Enter right node for : "<<temp->data << endl;  
      int rightData; 
      cin>>rightData; 
       
       if(rightData != -1){ 
        temp->right = new node(rightData); 
        q.push(temp->right);
       }

      }
 } 
int main(){   

    //input 1 3 5 7 11  17 -1 -1 -1 -1 -1 -1 -1
     
     buildTreeFromLevelOrder(root);
     

}