#include <iostream>
#include <bits/stdc++.h>
#include <vector>
using namespace std;
  
   

int main(){ 
	gcd(8,12);
int t;
cin>>t;
while(t--){ 
    
    int arr[3];
    int min_val = INT_MAX;
    int max_val = INT_MIN;
    int min_index,max_index;
    for(int i=0;i<3;i++){
      cin>>arr[i];
      min_val = min(arr[i],min_val);
      if(arr[i]<min_val){
      	min_index= i;
      }
      if(arr[i]> max_val){
      	max_index = i;
      }
    }
    int t_index;
    for(int i=0;i<3;i++){
    	if(i !=max_index && i!=min_index ){
    		t_index =i;
    	}
    }

    for(int i=1;i<max_val;i++){
    	arr[t_index] = arr[t_index]*1;
    	gcd()
    }
     
}

 
return 0;

}