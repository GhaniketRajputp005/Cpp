#include<bits/stdc++.h>
using namespace std;
typedef vector<pair<int,pair<int,int> > > viii;


int find(int node,int parent[]){

    if(parent[node]<0){
        return node;
    }
    return find(parent[node],parent);

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
}


viii kruskal(viii g,int V){

    int parent[V];
    for(int i =0;i<V;i++){
        parent[i] = -1;
    }
    
    viii res;
    int s,d,w;
    sort(g.begin(),g.end());
    int E = g.size();  // since we to check all edges for minimal spanning tree
    for(int i=0;i<E;i++){

        w = g[i].first;
        s = g[i].second.first;
        d = g[i].second.second;

        if(find(s,parent)!=find(d,parent)){
            res.push_back(g[i]);
            unionByWeight(s,d,parent);
        }
    }
    return res;
}


int main(){
    
    viii g,res;

    int V,E,w,s,d;
    cin>>V>>E;

    for(int  i =0;i<E;i++){
        cin>>w>>s>>d;
        g.push_back(make_pair(w,make_pair(s,d)));
    }
    res  = kruskal(g,V);

    int sum = 0;
    for(int i=0;i<res.size();i++){
        int w = res[i].first;
        cout<<res[i].second.first<<" "<<res[i].second.second<<endl;
        sum +=w;

    }

    cout<<"sum of weights = "<<sum;

    


}