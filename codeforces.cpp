#include <iostream>
using namespace std;
bool ispossible(long long int even,long long int odd,long long int no_of_papers){ 

 if(no_of_papers==1 and odd>=1 and even>=1){ 
  return true;
 }
  long long int cutted_papers=1;
// while(even and odd){ 
//    if(even%2 !=0 and odd%2 !=0){ 
//        return false;
//    }
//   if(even%2==0){ 
//     cutted_papers =cutted_papers*2;
//     even=even/2;

//   }
   
//    if(odd%2==0){ 
//   cutted_papers=cutted_papers*2;
//   odd=odd/2;
//    }

//    if(cutted_papers>=no_of_papers){ 
//     return true;
//   }


// }
 
//  return false;



// ********************/////
  ///***********************//////
  //2ND METHOD
   while(even%2==0){ 
   cutted_papers=cutted_papers*2;
   even=even/2;

   }
   while(odd%2==0){ 
    cutted_papers=cutted_papers*2;
    odd=odd/2;
    
   }
   if(cutted_papers>=no_of_papers){ 
    return true;
  }else{ 
    return false;
  }


}



int main(){ 
 long long  int t;
  cin>>t;
  while(t--){ 
  
   long long int even,odd,no_of_paper;
   cin>>even>>odd>>no_of_paper;
   bool ans=ispossible(even,odd,no_of_paper);
   if(ans){ 
       cout<<"Yes"<<endl;
   }else{ 
       cout<<"No"<<endl;
   }







  }


  return 0;




}
