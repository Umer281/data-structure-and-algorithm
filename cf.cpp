int main() {
    int t;
      cin>>t;
      
  for(int i=0;i<t;i++){
    long long int  max_num =INT_MIN;
    long long int arr[3];
      long long int a,b,c;
      cin>>a>>b>>c;
     arr[0] =a;
      arr[1] =b;  
      arr[2] =c;  
    for(int i=0;i<3;i++){
      max_num = max(max_num,arr[i]);
  }

    for(int i=0;i<3;i++){
        if(max_num==0){
            arr[i]=1;
        }else{
           arr[i] = (max_num -arr[i])+1;
        }
      
    }
    for(int i=0;i<3;i++){
      cout<<arr[i]<<" ";
    }
    cout<<endl;
  }
    
   

  return 0;
}

