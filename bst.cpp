#include <iostream>

using namespace std;

class node{
public:
	int data;
	node* left;
	node* right;

	node(int data){
		this->data = data;
		this->left = NULL;
		this->right = NULL;
	}
};

node* buildBST(node* root,int data){
	if(root==NULL){
		node* n = new node(data);
		root = n;
		return root;
	}

	if(data > root->data){
		root->right = buildBST(root->right,data);
	}else{
		root->left = buildBST(root->left,data);
	}

	return root;
}

node* insert(){
	node* root = NULL;

	int data;
	cin>>data;

	while(data!=-1){

		root = buildBST(root,data);

		cin>>data;
	}

	return root;
}

void preOrder(node*root){
	if(root==NULL){
		return;
	}

	cout<<root->data<<" ";
	preOrder(root->left);
	preOrder(root->right);
}

void inOrder(node*root){
	if(root==NULL){
		return;
	}

	inOrder(root->left);
	cout<<root->data<<" ";
	inOrder(root->right);
}

bool istreebst(node* root){  
	int minimu=int_min;
	int maximum=int_max;
if(root==NULL){  
return 
}
if(root->data> left->data){   
  istreebst(root->left);
 
}
int kathelinsum(node* root){ 
 if(root==NULL){ 
 	return;
 }
 int temp=root;
  int left=kathelinsum(root->left);
  int right=kathelinsum(root->right);
  temp=left+right;
  return temp;



 }














bool search(node* root,int item){
 if(root==NULL){ 
  return false;
 }
 if(root->data==item){ 
 	return true;
 }
   if(item>root->data){ 
  return search(node->right,item);//in this the return used returns value to main
   } else
  return search(node->left,item);


	
}

int main(){

	node* root = insert();

	preOrder(root);
	cout<<endl;

	inOrder(root);
	cout<<endl;

	return 0;
}