#include<iostream> 
#include<stack>
using namespace std;


 int findposition(int n,int m,int x){ 

    int a=x/n;
   int b=x%n;
   int ans=(b*m)+a;
   return ans;

 }



int main() { 

int t;
cin>>t;
 while(t--){ 

  int n,m,x;
  cin>>n>>m>>x;

  int s=findposition(n,m,x);
  cout<<s;
  cout<<endl;






 }

return 0;

}