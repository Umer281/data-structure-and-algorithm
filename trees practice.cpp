#include <iostream>
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
node* root =Null;
buildnode(root);



return 0;



}
