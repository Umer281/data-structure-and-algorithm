#include <iostream>

using namespace std;
#include <queue>


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

node* buildTree(node* root){
	int data;
	cin>>data;

	if(data==-1){
		return NULL;
	}

	if(root==NULL){
		root = new node(data);
	}

	root->left = buildTree(root->left);
	root->right = buildTree(root->right);

	return root;
}
 void print(node* root){ 
   if(root==NULL){ 
    return ;

   }
    cout<<root->data;
    print(root->left);
    print(root->right);

}

//void preOrder(node*root){
	//if(root==NULL){
		//return;
	//}

	//cout<<root->data<<" ";
	//preOrder(root->left);
	//preOrder(root->right);
//}


 int countnodes(node* root){ 
 	if(root== NULL){ 
    return 0;
}

   int countleft=countnodes(root->left);
   int countright=countnodes(root->right);
   int totalcount=countleft+countright+1;
   return totalcount;

}
int height(node* root){ 
if(root==NULL){    
  return 0;
}
   int leftheight=height(root->left);
   int rightheight=heigth(root->right);
   int totalheight=max(leftheight,rightheight)+1;
  
   return totalheight;

}
void printkthlevel(node* root,int k){ 
if(root==NULL){ 
return;
}
  if(k==1){ 
  	cout<<root->data;
  	return;
  }

  node* left=printkthlevel(root->left,k-1);
   node* right=printkthlevel(root->right,k-1);
  return;




}



void postOrder(node* root){
	if(root==NULL){
		return;
	}

	postOrder(root->left);
	postOrder(root->right);
	cout<<root->data<<" ";
}


void bfs(node* root){ 
queue<node*> q;
//int visited[];
q.push(root);
 
 while(!q.empty()){ 
      node* f=q.front();
      cout<<f->data;
      cout<<",";
      q.pop();
      if(root->left){ 
         q.push(f->left);
      }
      if(root->right){ 
      q.push(f->right);
      }


 }
  return;
}














 
int main(){

	node* root = NULL;
	root = buildTree(root);
	//postOrder(root);
   // cout<<countnodes(root);
    printkthlevel(root,3);
     bfs(root);
	//preOrder(root);
	//cout<<endl;

	

	return 0;
}

// Input Tree
// 4 2 1 -1 -1 3 -1 -1 6 5 -1 -1 7 -1 -1
