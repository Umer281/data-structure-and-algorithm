#include<iostream>
#include<map>
#include<cstring>

using namespace std;




int main(){
 map<string,int> m;
 m.insert(make_pair("apple",12));
 cout<<m["apple"]<<endl;
 pair<string,int> p;
 p.first ="banana";
 p.second = 10;
 m.insert(p);
 cout<<m["banana"]<<endl;

 string fruit;
 cin>>fruit;
 // map<string,int>:: is data type of iterator
  map<string,int>::iterator itr = m.find(fruit);

 if(itr!=m.end()){
 	cout<<"price of"<<fruit<<"is"<<m[fruit]<<endl;

 }else{
 	cout<<"fruit is not present";
 }

 //another way
  if(m.count(fruit)){
  	cout<<"price of  "<<fruit<<" is  ="<<m[fruit]<<endl;
  }else{
  	cout<<"product not found"<<endl;
  }
   
   m.erase(fruit);

   m["liche"] = 20;
   m["pineapple"] = 30;
   m["orange"] =40;

   //loop to iterate over all the elements in map
   for(itr =m.begin();itr!=m.end();itr++){
   	cout<<itr->first<<"=="<<itr->second<<endl;
   }
   //for each loop to iterate
   for(auto p:m){
   	cout<<p.first<<"-------->>"<<p.second<<endl;
   }
   

	return 0;
}
