#include<bits/stdc++.h>
using namespace std;

void top_dfs(vector<int>adj[],stack<int>&st,int vis[],int node){
    vis[node] = 1;
    for(auto it:adj[node]){
        if(!vis[it]){
            top_dfs(adj,st,vis,it);
        }
    }
    st.push(node);

}

void top_sort(vector<int>adj[],int v){
    int vis[v] = {0};
    stack<int>st;
    for(int i=0;i<v;i++){
        if(!vis[i]){
            top_dfs(adj,st,vis,i);
        }
    }
    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }
}

int main(){
    int  v,e,s,d;
    cin>>v>>e;
    vector<int>adj[v];

    for(int i=0;i<v;i++){
        cin>>s>>d;
        adj[s].push_back(d);
    }
    top_sort(adj,v);
}