#include<iostream>
using namespace std;





int main(){ 
int n;
cin>>n;
int arr[10];
 for(int i=0;i<n;i++){ 
  cin>>arr[i];
 }
  for(int i=0;i<n-1;i++){ 
    int minval=arr[i];
    for(int j=i+1;j<n;j++){ 
         if(arr[j]<minval){ 
       swap(minval,arr[j]);     
         }

    }


  }
  for(int i=0;i<n;i++){ 

  cout<<arr[i]<<" ";
  }




return 0;
}