// #include<iostream>
// #include<deque>
// using namespace std;
// int main(){ 
// 	int n,k;
// 	cin>>n>>k;
// 	int arr[n];
// 	for(int i=0i,n;i++){ 
// 		cin>>arr[i];
// 	}
// 	deque<int> Q;
// 	for(int i=0;i<k;i++){ 
     
//      while(!Q.empty() and arr[i]>=Q.back()){ 

//       Q.pop_back();
//      }
//      	Q.push_back(i);


// 	}
// 	for(;i<n;i++){ 

//    cout<<Q.front();

//    //remove those elements which are not part of window ie Q.front()>i-k,if Q.front()<=i-k then this not in our window
//    while(!Q.empty() and Q.front()<=i-k){ 
//     Q.pop_front();
//    } 
//    //if the element in Q i of no use we need to remove it 

//    while(!Q.empty() and arr[i]>=Q.back()){ 
//     Q.pop_back();
//    }
//    Q.push_back(i);


 




// 	}

// return 0;
// 
