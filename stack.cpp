#include <iostream>
using namespace std;
int main() {
	int n;
	cout<<"enter input";
	cin>>n;
	cout<<"*";
	for(int i=1;i<=n-3/2;i++){ 
		cout<<" ";
	}
	for(int i=1;i<=n+1/2;i++){ 
		cout<<"*";
	}
	cout<<endl;


	for(int i=1;i<=n-3/2;i++){ 

   cout<<"*";
   for(int i=1;i<=n-3/2;i++){ 
	   cout<<" ";
   }
   cout<<"*";
   cout<<endl;
}
  for(int i=1;i<=n;i++){ 
	  cout<<"*";
  }
  cout<<endl;
  for(int i=1;i<=n-3/2;i++){ 
     
	 for(int i=1;i<=(n-3/2)+1;i++){ 
	   cout<<" ";
   }
   cout<<"*";
   for(int i=1;i<=n-3/2;i++){ 
	   cout<<" ";
   }
   cout<<"*";
  }
  cout<<endl;
  for(int i=1;i<=n+1/2;i++){ 
	  cout<<"*";
  }
  for(int i=1;i<=n-3/2;i++){ 
	  cout<<" ";
  }
  cout<<"*";
  
   return 0;
}


