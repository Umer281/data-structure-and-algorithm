#include<iostream>
using namespace std;
void rearrange_number(int* arr,int n,int i,int j,int* ans){ 
  int k=0;
 
  int x=0;

  while(i<=j){ 

   if(x==0){ 
   ans[k]=arr[i];
   i++;
   k++;
   x=1;
   }else{ 
    ans[k]=arr[j];
    j--;
    k++;
    x=0;
   }

  }
 // return ans;


}





int main(){ 
	int t;
	cin>>t;

	for(int i=0;i<t;i++){ 
    int n;
    cin>>n;
    int arr[n];
    int ans[n];
    for(int i=0;i<n;i++){ 
    cin>>arr[i];
    }
    int i=0;
    int j=n-1;
    rearrange_number(arr,n,i,j,ans);

    for(int i=0;i<n;i++){ 
   cout<<ans[i]<<",";
	}

	}
	
return 0;
}