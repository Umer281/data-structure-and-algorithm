#include <iostream>
#include<map>
using namespace std;
class node{ 
public:
	int data;
	node* left;
	node* right;

void node(int data){ 
    this->data=data;
    this->left=Null;
    this->right=Null;

}
};
node* buildnode(node* root){ 
   int data;
   cin>>data;
    if(data==-1){ 
    	return Null;
        }
        node* root=new node(data);
        root->left=buildnode(node* root);
        root->right=build(node* root);
        return root;
        
  }
  











int main(){ 
node* root = new node(1);
root->left = new node(2);
root->right =new node(3);
root->left->left= new node(4);
root->left->right = new node(5);
root->right->left = new node(6);
root->right->right = new node(7);
verticalPrint(root,)

node* root =Null;
buildnode(root);



return 0;



}
