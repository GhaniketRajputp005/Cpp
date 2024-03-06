#include<bits/stdc++.h>
using namespace std;
vector<int> bfs(vector<int>adj[],int n){

    queue<int>q;  // to store neighbour nodes of a node which will eventually be popped.
    int visited[n]={0};  //  to check whether a node has been visited or not. 0 -> 1
    vector<int> bfs; // to store the popped element from queue that will eventually considered in bfs.

    q.push(0);   // start node is  0 here or can be taken any node .
    visited[0]=1;

    while(!q.empty()){      // repeat untill queue is not empty.
        int node =q.front();  // use first element of the queue 
        q.pop();     //  pop the above element 
        bfs.push_back(node);     //  since it is poped now push it in bfs.

        for(auto it:adj[node]){

            if(visited[it]==0){       // check if neighbour nodes are not visited
                visited[it]=1;      // if not visited mark them visited.
                q.push(it);      // and push neigbours of node which was popped into queue.
            }
        }
    }
    return bfs;

}
int main(){

    cout<<"enter number of vertex and edges\n";
    int n,e,u,v;
    cin>>n>>e;

    vector<int>adj[n];

    for(int i=0;i<e;i++){
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);

    }
    for(int i=0;i<n;i++){
        cout<<i;
    //    for(auto it: adj[i]){
    //     cout<<it<<" ";
        for(int j=0;j<adj[i].size();j++)
            cout<<"->"<<adj[i][j];
       
       cout<<endl;
    }
    vector<int>ve = bfs(adj,n); 
    for(int i=0;i<ve.size();i++){
        cout<<ve[i]<<"->";
    }
}
 

