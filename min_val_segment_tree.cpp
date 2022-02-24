#include<iostream>
using namespace std;
//program to store minimum value in particular range using segment tree
int segment_tree(int* arr,int* buildtree,int index,int start,int end){ 

 if(start>end){
 	 return INT_MAX;
 }
 
 if(start==end){ 
   buildtree[index]=arr[start];
   return buildtree[index];
 }

  int mid=(start+end)/2;
  int left=segment_tree(arr,buildtree,2*index+1,start,mid);
  int right=segment_tree(arr,buildtree,2*index+2,mid+1,end);
  buildtree[index]=min(left,right);
  return buildtree[index];


}
int main(){ 
  int n;
  cin>>n;
  int arr[n];
  for(int i=0;i<n;i++){ 
   cin>>arr[i];

  }
  int m=(4*n)+1;
  int buildtree[m];
  int start=0;
  int end=n-1;
  int index=0;

   cout<<"minimum value from"<<" "<<start+1<<" -to- "<<n<<" = "<<segment_tree(arr,buildtree,index,start,end);

  cout<<find_query(arr,tree,start,end,qs,qe);




return 0;




}