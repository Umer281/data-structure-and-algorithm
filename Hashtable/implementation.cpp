#include <iostream>
#include <bits/stdc++.h>
using namespace std;

 template<typename T>
class Node{
	// private:
	// 	string key;
	// getKey(string key){
	// 	return key;
	// }
	// setKey(string k){
	// 	key =k;
	// }
 public:
 	string key;
 	int val;
 	Node* next;
   //constructer
 	Node(string k,int v){
        this->key = k;
        this->val = v;
        next =NULL;
 	}
 	//destructer call 
 	~Node(){
        if(next!=NULL){
 		delete next;
 	}
 	} 
};


template<typename T>
class hashtable{
 public:
    int table_size;
    Node<T>** table;
    int current_size;
 //constructer
 hashtable(int ts){
       table_size = ts;
       table = new Node<T>* [table_size];
       current_size =0;
       for(int i=0;i<table_size;i++){
       	 table[i]=NULL;
       }
 }
  

 int hashfunction(string key){
 	int finalval=0;
 	int base =1;
      for(int i=0;i<key.length();i++){
          finalval +=(key[i]*base)%table_size;
          finalval%table_size;
          base *=27%table_size;
      }
      cout<<finalval%table_size<<endl;
      return finalval;
      

}

 void insert(string key,int val){
 	cout<<key<<val<<endl;
     int idx= hashfunction(key);
     Node<T>* n =new Node<T>(key,val);
     n->next = table[idx];
     table[idx]= n;
     current_size++;

     //rehash 
     float load_factor=current_size/(1.0*table_size);
     if(load_factor>=0.7){
     	rehash();
     }
 }

 void rehash(){
 	int oldtable_size = table_size;
 	Node<T>** oldtable = table;
 	table_size = 2*table_size;
 	table = new Node<T>* [table_size];
    for(int i=0;i<table_size;i++){
    	table[i] = NULL;
    }
    current_size = 0;

 	for(int i=0;i<oldtable_size;i++){
 		Node<T>* temp=oldtable[i];
 		while(temp!=NULL){
 			insert(temp->key,temp->val);
 			temp=temp->next;
 		}
 		if(oldtable[i]!=NULL){
      	delete oldtable[i];
      }
 	}
 	delete[] oldtable;
 }

 void print(){
      for(int i=0;i<table_size;i++){
      	cout<<"BUCKET->";
      	Node<T>* temp =table[i];
      	while(temp !=NULL){
      		cout<<temp->key<<temp->val;
      		temp = temp->next;
      	}
      	cout<<endl;
      }
      
 }
 //T* RETURNS pointer to the value if key is present otherwise returns null pointer
 T* search(string key){

    int idx =  hashfunction(key);
    Node<T>* temp = table[idx];
    while(temp!=NULL){
    	if(temp->key == key){
    		cout<<temp->val;
    		return &temp->val;
    	}
    	temp = temp->next;
    }
    return NULL;
 }

 };

int main(){
    hashtable<int> price_menu(7);
    price_menu.insert("Noodles",40);
    price_menu.insert("burgerpizza",100);
    price_menu.insert("coke",30);
    price_menu.insert("pepsi",20);
    price_menu.insert("burger",40);

    price_menu.insert("CHIPS",30);
   
    price_menu.print();
   
    int* val = price_menu.search("Noodles");
    cout<<"price of Noodles is "<<*val;



	return 0;
}