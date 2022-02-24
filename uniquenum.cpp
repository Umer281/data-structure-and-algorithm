#include<iostream>
#include<cstring>
using namespace std;

int findsetbit(int num){ 
     int count =0;
     while(num){ 
   if(num&1){ 
   return count;
     }else{
     count++; 
     num=num>>1;
}


     }

}






void uniquenumber(int arr[10],int n){ 
   
   int num=0;
   for(int i=0;i<n;i++){ 

    num=num^arr[i];

   }

    int setbitposition=findsetbit(num);
    int mask=1<<setbitposition;
    int num1,num2=0;
    for(int i=0;i<n;i++){ 
    if(arr[i]&mask==1){ 
   num1=num1^arr[i];
    }

    }
    cout<<num1<<endl;
    num2=num1^num;
    cout<<num2;





}







int  main(){ 
 int n;
 cin>>n;
 int arr[10];
 for(int i=0;i<n;i++){ 
  cin>>arr[i];

 }
  uniquenumber(arr,n);


  return 0;
}