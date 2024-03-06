#include<bits/stdc++.h>
using namespace std;


int find(int u,int parent[]){
    if(parent[u]<0){
        return u;
    }
    return find(parent[u],parent);
}


void unionByWeight(int u,int v,int parent[]){
    int parentOfu = find(u,parent);
    int parentOfv = find(v,parent);
    
    if(parentOfu!=parentOfv){

        if(parent[parentOfu] <= parent[parentOfv]){
            parent[parentOfu] += parent[parentOfv];
            parent[parentOfv] = parentOfu;
        }
        else{
         parent[parentOfv] += parent[parentOfu];
            parent[parentOfu] = parentOfv;

        }
    }
    else{
        cout<<"cycle detected";
    }
}

    int main(){

    int nodes;
    cin>>nodes;

    int parent[nodes];
    for(int i=0;i<nodes;i++){
        parent[i] = -1;

    }
    int key =0,u,v;
    bool val  = true;
    do{
        cin>>u>>v;
        unionByWeight(u,v,parent);
        
        cout<<"want another  edge press 0 else anything\n";
        cin>>key;
        }while(key ==0);

        
    

}