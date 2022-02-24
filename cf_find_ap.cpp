#include <iostream>
#include <bits/stdc++.h>
#include <vector>
using namespace std;
  

  void  isAp(int a,int b,int c){
      
      int new_a = b-(c-b);
     
     
      if( new_a>=a && new_a!=0 && new_a%a==0){
        cout<<"YES"<<endl;
         return;
      }
       int new_b = a+(c-a)/2;
      if( new_b>=b && (c-a)%2 == 0  &&  new_b!=0 && new_b%b==0){
      cout<<"YES"<<endl;
      return;

     }
      int new_c =a+2*(b-a);
     if ( new_c>=c && new_c!=0 && new_c%c==0){
       cout<<"YES"<<endl;
      return;
     }
      cout<<"NO"<<endl;
      return ;
     
  }
   

int main(){ 
	
int t;
cin>>t;
while(t--){ 
    int a ,b, c;
    cin>>a >> b>> c;
  isAp(a,b,c);
  
 
    }
     


 
return 0;

}