#include <iostream>
using namespace std;

int fibMemo(int n,int dp[]){
  if(n==1 or n==0){
    dp[n] = n;
    return n;
  }

  if(dp[n]!=-1){
    return dp[n];
  }

  int fibn1 = fibMemo(n-1,dp);
  int fibn2 = fibMemo(n-2,dp);

  int fibn = fibn1 + fibn2;

  dp[n] = fibn;

  for(int i = 0;i<=5;i++){
    cout<<dp[i]<<"\t";
  }
  cout<<endl<<"*******************"<<endl;

  return fibn;
}

int main() {
   int n;
   cout<<"enter input";
   cin>>n;
   int dp[n+1];
   //memset(dp,-1,sizeof(dp));
   cout<<fibMemo(n,dp);
    return 0;
}
