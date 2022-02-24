 //    1
 //   121
 //  12321
 // 1234321  git init
// git config user.name "someone"
// git config user.email "someone@someplace.com"
// git add *
// git commit -m "some init msg

#include <iostream>
using namespace std;





int main(){ 


   int n=4;
   int i=0;
   int x=0;
   int space=n;
   


   for(int row=0;row<n;row++){ 

     space--;
     int col=2*row+1;
    
    for(int k=0;k<space;k++){ 
     cout<<" ";

    }
    for(int j=0;j<col;j++){ 
    
    if(j>row){ 
      x--;
      cout<<x;
     
    }else{ 
      x++;
     cout<<x;
    
    }


    }
    x=0;

    cout<<endl;



   }



//   return 0;

//    }


/////////////////
///////////////
//
 //    *
 //   * *
 //  * * *
 // * * * *

// int main(){ 
// 	int n=5;
// 	int row=n;
// 	int col=0;
// 	int space=n;
	
// 	for(int i=0;i<row;i++){ 
//     col=i;
      
//       for(int j=0;j<space;j++){ 
//         cout<<" ";
//       }
//       space--;
//       for(int k=0;k<col;k++){ 
//        cout<<"*"<<" ";
//       }
//       cout<<endl;



// 	}
// }


////////////
////////
  

//            *     
//          * *
//        * * *
//      * * * * 
//    * * * * * 

// int main(){ 


// int n =5;
// int space=5;
// for(int row=0;row<n;row++){ 


//    for(int s=0;s<space;s++){ 
//     cout<<" ";
//    }
//    space--;
//    for(int col=0;col<=row;col++){ 

//       cout<<"*";
//    }
//    cout<<endl;




// }
// return 0;


// }

//2nd method for same pattern using only 2 loops

// int main(){ 


//     int n=5;
//     int x=0;

//     for(int row=1;row<=n;row++){ 

//      int var=n;
     
//      for(int col=1;col<=n;col++){ 
      
//        if((var-col)>x){ 
//       cout<<" ";

//        }else{ 
//        cout<<"*";
//        }
        

//      }
//      cout<<endl;
//      x++;


//     }









//    return 0;
// }


////3rd method by decrementing space by 2

int main(){ 
   
int n=5;
int space=(2*n)-2;

for(int row=0;row<n;row++){ 

 for(int s=0;s<space;s++){ 
     cout<<" ";
 }
 space=space-2;

 for(int col=0;col<=row;col++){ 
    cout<<"* ";
 }
 cout<<endl;




}





return 0;
}





