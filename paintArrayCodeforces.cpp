#include <iostream>
#include <bits/stdc++.h>
#include <vector>
using namespace std;
  
   

int main(){ 
	gcd(8,12);
int t;
cin>>t;
while(t--){ 
    
    int n;
    cin>>n;
    long long int arr[n];
    int max_val =INT_MIN;
    int min_val =  INT_MAX;
    for(long long int i=0;i<n;i++){
    	cin>>arr[i];
    	max_val =max(arr[i],max_val);
    	min_val = min(arr[i],min_val);
    }

    long long int ans = max_val - min_val;
    cout<<ans<<endl;
     
}

 
return 0;

}