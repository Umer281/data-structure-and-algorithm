// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
// int main(){    //modulo exponent by using bit masking 
//   int a,b,c;
//   cin>>a>>b>>c;
//   int ans=1;
  
//   while(b!=0){
//   if(b&1==1){
//   ans=(ans*a)%c;

//   }
//  a=(a*a)%c;
//  b=b>>1;

//    }
 
//  cout<<ans;



// return 0;


// }
// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;   //modulo exponent using divide and conquer

//   double power(double x,int y){
//   if(y==0){   
//    return 1;
//   }
//   double temp;
//   temp=power(x,y/2);
//   if(y%2==0)
//   	 return temp*temp;    //or temp=temp*temp
//   else{

//     if(y<0)
//     	 return (temp*temp)/x;
//     else                           
//     	 return x*(temp*temp);



//   }




//   }


// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;   //modulo exponent using divide and conquer

//   float power(float x,int y){
//   if(y==0){   
//    return 1;
//   }
//   float temp;
//   temp=power(x,y/2);
//   if(y%2==0)
//   	 temp=temp*temp;
//   else{

//     if(y<0)
//     	 temp=(temp*temp)/x;
//     else                           
//     	 temp=x*(temp*temp);

//   }


//     return temp;

//   }



// int main(){ 
// 	 int x,y;
// 	 cin>>x>>y;
// 	 float z=power(x,y);
// 	cout<<z;

// return 0;

// }

//USING PYTHON