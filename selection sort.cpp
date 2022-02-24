#include<iostream>
#include<bits/stdc++.h>
using namespace std;






// int main(){ 
// int n;
// cin>>n;
// int arr[10];
// for(int i=0;i<n;i++){ 
//   cin>>arr[i];

//  }
//   for(int i=0;i<n-1;i++){  //5 4 3 2 1 
//     int minindex=i;
//     for(int j=i;j<=n-1;j++){ 
//          if(arr[j]<arr[minindex]){ 
//           minindex=j;
//          }

//     }
//    swap(arr[i],arr[minindex]);

//   }
//   for(int i=0;i<n;i++){ 

//   cout<<arr[i]<<" ";
//   }




// return 0;
// }
  
  //INSERTION SORT
int main(){ 
	int n;
	cin>>n;
	int arr[100];
	for(int i=0;i<n;i++){ 
    cin>>arr[i];
 }
   int x=0;

  for(int i=1;i<n;i++){ 
     int j=i-1;
     while(j>=0){ 
    if(arr[i]<arr[j]){ 
    	x=arr[i];
     arr[i]=arr[j];
     arr[j]=x;
    }
    j--;


     }





}





  return 0;

}