#include<queue>  
#include<bits/stdc++.h> 
using namespace std;  
 
 class node {  
    public: 
    int data; 
    node* left; 
    node* right; 
    node(int d){ 
        this->data = d; 
        this->left = NULL; 
        this->right = NULL; 
    }
    
 }; 
  
  node* buildTree(node* root){ 
     
     cout<<" enter the data : "<<endl;  
     int data; 
     cin>>data; 
     root = new node(data); 
      
      if(data== -1){ 
        return NULL;
      } 
      cout<<"enter data for inserting in left "<<data<<endl; 
      root->left = buildTree(root->left); 
       cout<<"enter data for inserting in right "<<data<<endl;  
       root->right = buildTree(root->right);  
       return root;

  }  
  //level order traversal  
 /* void levelOrderTraversal(node* root){ 
    queue<node*> q; 
    q.push(root);  
    q.push(NULL) ;
     
     while(!q.empty()){ 
        node* temp = q.front();  
       
        q.pop();  
         if(temp == NULL){//purana leval complete ho gaya hai 
          cout<<endl; 
         
         if(!q.empty()){ //queue still has same child nodes 
         q.push(NULL);

         }
         } 
         else 
         {  
            cout<<temp->data <<" ";
          if(temp->left){ 
            q.push(temp->left);
         }  
          
          if(temp->right){ 
            q.push(temp->right);
         }  
         }
         
         
     }

      } 
       */
      // build tree from level order traversal
   /* void buildTreeFromLevelOrder(node* root){ 
    queue<node*> q; 
    cout<<" enter data for  root : "<<endl; 

     int data; 
     cin>>data;  
     root = new node(data); 
     q.push(root);  
      
      while(!q.empty()){ 
        node* temp = q.front();
      q.pop();
      
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
 } */ 
  
  // preorder traversal 
  void  preOrder(node* root){ 
    if(root ==NULL){ 
        return ;
    } 
    cout<<root->data<<" "; 
    preOrder(root->left);  
    preOrder(root->right); 


  }
int main(){   
    
// 1 3 5 7 11 17 -1 -1 -1 -1 -1 -1 -1 
node* root = NULL; 
 buildTree(root);
 //buildTreeFromLevelOrder(root); 
 cout<<"preoder traversal is : "<<endl; 
 preOrder(root); 
 //levelOrderTraversal(root);
    
     
}