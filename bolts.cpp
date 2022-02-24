#include <iostream>
#include <bits/stdc++.h>
#include <vector>
using namespace std;



int main(){ 
int t;
cin>>t;
while(t--){ 
int n;
cin>>n;
vector<string> str(n);



for(int i=0;i<n-2;i++){
  cin>>str[i];
}

string ans = str[0];
 ans = ans.front();
 bool isPresent = false;
for(int i=0;i<n-2;i++){ 
    string s1 = str[i];
  string s2 = str[i+1];
   if(i==n-2-1){
        ans +=s1.back();
        break;
    }  
  s1 = s1.back();
  s2 =  s2.front();
  if(s1 !=s2){
      isPresent= true;
      ans +=s1;
      ans +=s2;
  }else{
      ans += s1;
  }
}
  if(!isPresent){
     ans +="a";
 }
 cout<<ans<<endl;

}

 
return 0;

}