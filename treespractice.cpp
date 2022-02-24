#include<iostream>
using namespace std;
class node{ 
public:
	int data;
	node* left;
	node* right;

  node( int data){
  this->data=data;
  this->left=NULL;
  this->right=NULL;
 } 
};

 node* builttree(node* &root){
   int data;
   cin>>data;
   if(data==-1){ 
   return  NULL;
    }
   
   root=new node(data);

  node* left=builttree(root->left);
  node* right=builttree(root->right);
  return root;
 }
 void preorder(node* &root){
 	if(root == NULL){ 
 		return; 
  } 
  cout<<root->data<<" ";
  preorder(root->left);
  preorder(root->right);
 
}
int sumat_levelK(node*  &root,int k,int &sum){ 
	 if(k==0){ 
		 sum+=root->data;
		 return 0;
	 }
	 
	  if(root==NULL){ 
 		 return 0; 
  }

	  
    sumat_levelK(root->left,k--,sum);
    sumat_levelK(root->right,k--,sum);
    return sum;
}

void replace_sum(node* &root,int &sum){ 
   if(root==NULL){ 
    return;
    }
   if(root->left==NULL & root->right==NULL){ 
   	return;
   }
    int left=replace_sum(root->left,sum);
    int  right=replace_sum(root->right,sum);
    sum=left+right;
    root->data +=sum;


}

int main(){ 
  node*root=NULL; 
  builttree(root);
  int sum=0;
  replace_sum(root,sum);
 // preorder(root);
  
  return 0;

}