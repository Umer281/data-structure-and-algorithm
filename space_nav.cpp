#include <iostream> 
using namespace std;

void Reached_Plant(string str,int px,int py){ 

   int x=0;
   int y=0;
   bool reached_x=false;
   bool reached_y=false;


   for(int i=0;i<str.length();i++){ 

     
    if(reached_x==true and (str[i]=='R' or str[i]=='L')){ 
    str[i]=' ';
    }
    if(reached_y==true and (str[i]=='U' or str[i]=='D')){ 
      str[i]=' ';
    }



     if(str[i]=='R'){ 
      x++;
      if(x==px){ 
      	reached_x=true;
      }
      
     }else if(str[i]=='D'){ 
       y--;
       if(y==py){ 
        reached_y=true;
       }
     }else if(str[i]=='L'){ 
      x--;
      if(x==px){ 
      	reached_x=true;
      }

     }else{ 
       y++;
       if(y==py){ 
       reached_y=true;
       }
     }




   }

   if(reached_x==true and reached_y==true){ 

     cout<<"YES";
   }else { 
   cout<<"NO";
   }




}



int main(){ 
int t;
cin>>t;
   while(t--){ 
    
    int px,py;
    cin>>px>>py;
     string str;
     cin>>str;
     cout<<Reached_Plant(str,px,py);
     cout<<endl;


   }



return 0;
}