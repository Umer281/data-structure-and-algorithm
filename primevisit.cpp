#include<iostream>
using namespace std;
int primevisit(int start,int end){ 
        int count=0;
		int j=2;
		for(int num=start;num<=end;num++){ 
			for( j=2;j<num;j++){ 
				if(num%j==0)
				break;
			}
			if(j==num)
				count++; 
		}
       return count;
	


}
int main() {
	int n;
	cin>>n;
	while(n--){ 
		int start,end;
		cin>>start>>end;
		int a=primevisit(start,end);
		cout<<a<<endl;
	}
	
	
	return 0;
}