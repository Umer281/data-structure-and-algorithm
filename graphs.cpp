#include<iostream>
#include<list>
#include<queue>
using namespace std;
  ///graph implementation using linked list
  // V is  the number of vertices
class Graph{ 
    public:
             int  V;
  //array of linked lists of size v, v linked lists are there 
            list<int> *adjlist;              //this is pointer to a list of elements



  Graph(int v){ 
   V=v;
   adjlist=new list<int>[v];                  //every element in array is a list itself
 }

 void addedge(int u,int v,bool bidir=true){ 
   adjlist[u].push_back(v);
   if(bidir){ 
  adjlist[v].push_back(u); 
   }
 }
  void printedges(){ 
  for(int i=0;i<V;i++){ 
   cout<<i<<"->"; 
   for(int node:adjlist[i]){ 
    cout<<node<<",";
   }
   cout<<endl;



  }

   }


   void BFS(int src,int des){ 

     queue<int> q;
     bool *visited=new bool[V+1]{0}; 
     q.push(src);
     visited[src]=1;
     int *distance=new int[V+1];
     int *parent=new int[V+1];

     while(!q.empty()){ 
     int  node=q.front();
     q.pop();
     for(int neighbour:adjlist[node]){ 
       if(!visited[neighbour]){ 
      q.push(neighbour);
      visited[neighbour]=1;
      distance[neighbour]=distance[node]+1;
      parent[neighbour]=node;

       }
    
     }
     cout<<endl;




     }
     //to print path from   destination to src,i.e going in backward direction 
     int temp=des;
     while(temp!=-1){ 
     cout<<temp<<"-->";
     temp=parent[temp];

     }


   }
 
  
 



};
int main(){  
  int n;
  cin>>n;
  //make Graph object
   Graph g(n);  
   g.addedge(0,1);
   g.addedge(0,3);
   g.addedge(1,0);
   g.addedge(1,2);
   g.addedge(2,1);
   g.addedge(2,3);
   g.addedge(2,4);
   g.addedge(3,2);
   g.addedge(4,2);
   //g.addedge(3,4);
  // g.printedges();
   g.BFS(0,4);
   return 0;

}











// graph implementation using hashmap 
// #include<iostream>
// #include<map>
// using namespace std;
// template<typename T>
// class Graph{ 

// public:
  
//   map<T,list<T> > *adjlist;   //this is hashmap in which each element contains list,datatype may be of any 
                                //any type so we have taken template type T
// Graph(){

 

// }

// void addEdge(T u,T v,bool bidir=true){ 
//   adjlist[u].push_back[v];

// }

//   if(bidir){ 
//     adjlist[v].push_back[u];
//   }

//  void PrintAdjlist(){ 
                                       // delhi--> punjab,noida,amritsar
//   for(auto everyRow:adjlist){     //everyRow is pair and it stores 2 things,row.first=delhi,and row.second is punjab,noida,amritsar
//     T key=everyRow.first;               //key here is particular value but value is list of element
//    cout<<key<<"->";

//      for(T element:adjlist.second){ 
//        cout<<element<<",";
//      }
//      cout<<endl;




//   }

//  }


// };


// int main(){ 
//   Graph<string> g;
//   g.addEdge("Delhi","Amritsar");
//   g.addEdge("Delhi","Haryana");
//   g.addEdge("Delhi","Punjab");
//   g.addEdge("Haryana","Punjab");
//   g.addEdge("Haryana","Amritsar");
//   g.addEdge("Punjab","Amritsar");
//   g.addEdge("Punjab","Haryana");
//   g.PrintAdjlist();

//  return 0;
// }





















///////////  practice  of graphs///////

