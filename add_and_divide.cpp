#include<iostream>
using namespace std;


 int findwinner(vector <int>& arr,int n){ 

  if(n==0 or n==1){ 
  	return 0;
  }

  sort(arr.begin(),arr.end());
  int count=0;

  for(int i=arr.size()-1;i>0;i--){ 
    
    for(int j=i-1;j>=0;j--){ 

    if(arr[i]>arr[j]){ 

    count++;
    break;
    }

    }
    


  }

 return count;



 }




int main(){ 

  int t;
  cin>>t;
  for(int i=0;i<t;i++){ 
  
   int n;
   cin>>n;
   vector<int>& arr;
   for(int i=0;i<n;i++){ 
   
   cin>>arr[i];


   }
  cout<<findwinner(arr,n);
  cout<<endl;



 }



return 0;



}