#include<iostream>
#include<bits/stdc++.h>
#include<cstring>
using namespace std;

template<typename T>
class Node{
public: 
  string key;
  T value;
  Node<T> *next;

 void Node(string key,T val){ 
   this->key=key;
   value=val;
   this->next=NULL;
 }

};
 
 template<typename T>
class Hashtable{ 
public:

Node<T>** table;
int current_size;
int table_size;


  Hashtable(int tablesize){ 
  table=new Node<T> *[tablesize];
  current_size=0;  //this new Node is actaully a datatype of each bucket in that particular array
  for(int i=0;i<table_size;i++){ 
   table[i]=NULL;
  }
 
   
   // ~Node(){ // this is a destructer it recursively deletes the nodes
       
   //     if(next!=NULL){ 
   //     delete next;
   //     }

   // }
  


int hashfunction(string key){ 
  int index=0;
  int p=1;
  for(int i=0;i<key.length();i++){  
   index=index+(key[i]*p)%table_size;
   index=index%table_size;
   p=(p*27)%table_size;

  }
  return index;
 
 }

 void insert(string key,T value){ 


  int idx=hashfunction(key);
  Node<T> *n=new Node<T>(key,value);
  n->next=table[idx];
  table[idx]=n;
  current_size++;
  //int l.f=current_size/table_size;
  //if(l.f>0.7){   
    // rehasing();

  //}

  }
  void print(){ 

     for(int i=0;i<table_size;i++){ 
        Node<T> *temp=table[i];
        while(temp!=NULL)
            cout<<temp->key;
            temp=temp->next; 
     }  
     cout<<endl;

}




};

 // void rehasing(){ 
 //  node* oldtable=table;
  //int oldtable_size=table_size;
 //   table_size=2*table_size;
 //  table=new Node<T> *[table_size];
 //   for(int i=0;i<table_size;i++){ 
 //   table[i]=NULL;

 //   }
 //   for(int i=0;i>oldtable_size;i++){ 
 //      Node<T> *temp=oldtable[i];
 //      while(temp!=NULL){ 
 //      insert(temp->key,temp->val);
 //      temp=temp->next;
 //      }



 //   }


 // }
 
 // T* Search(string key){ 
  
 //  for(int i=0;i<table_size;i++){ 
 //    node* temp=table[i];
 //    while(temp!=NULL){ 
 //   if(temp->key==key)
 //       return &temp->key;
 //   temp=temp->next;

 //    }




 //  }
 //   return NULL;
  
 // }



















int main(){ 
 
 Hashtable<int> pricemenu(7);
 pricemenu.insert("Burger",20);
 pricemenu.insert("pepsi",30);
 pricemenu.insert("pizza",40);

 return 0;




}