 #include <iostream>
 #include <bits/stdc++.h>
 using namespace std;

// void findsubsequence(int num,char ch[]){ 

//   int j=0;
//   while(num>0){ 

//   if(num&1){ 
//    cout<<ch[j];

//   }
//   num= num>>1;
//   j++;


//   }
 
 


// }


// int main(){ 
//  char ch[10];
// cin>>ch;
//  int n=strlen(ch);
//  for(int i=0;i<(1<<n);i++){ 
//   findsubsequence(i,ch);
//   cout<<endl;

//  }

// return 0;
// }




////find number of number which are less than n and are 
//divisible by either of primee numbers given list are prime numbers
//which is less than 20 [2,3,5,7,11,13,17,19]
 //1000 


int findcount(long long int num,long long int prime_list[],long long int subsets){ 

  long long int ans=0;
  for(long long int i=0;i<subsets;i++){ 
   
   long long int den=1;
   long long int j=0;
  // long long int setbits= __bulltin_popcount(i);
   long long int temp=0;  //this is to count the number of set bits,ie if temp is even
                          //we subtract it to total val and if it is odd we add it
  for(int k=0;k<=7;k++){ 
    
    if(i&1){   //if bit is set then multiply den with number present in that particular 
    	        //index in prime_list (index is represented with j in this)
    den *=prime_list[j];
    temp++;
     }
    j++;
    i>>1;
  }
  if(temp&1){   
    ans +=floor(num-1)/den;
  }else{ 
   ans =ans-floor(num-1)/den;
  }

  }




return ans;
}




int main(){ 

long long int num;
cin>>num;
long long int  prime_list[]={2,3,5,7,11,13,17,19};
long long int subsets=(1<<8)-1;  //1<<8 is similar to 2^8 as there will be these no of subsets

cout<<findcount(num,prime_list,subsets);


return 0;
}