#include<iostream>
#include<map>
#include<vector>
#include<cstring>
using namespace std;




int main(){

   map<string,vector<string> > phonebook;
  phonebook["faheem"].push_back("990612345"); 
   phonebook["faheem"].push_back("7006126265");
   phonebook["faheem"].push_back("9858123456");
   phonebook["aqib"].push_back("985646446");
   phonebook["parvaiz"].push_back("990633456");


   // for(auto p:phonebook){
   // 	cout<<p.first<<endl; 
   // }
   for(itr =phonebook.begin();itr!=phonebook.end();itr++){
   	cout<<itr->first<<"=="<<itr->second<<endl;
   }

	return 0;
}