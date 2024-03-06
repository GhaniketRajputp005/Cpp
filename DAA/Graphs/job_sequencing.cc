#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,profit,dline;
    vector<pair<int,int> > job;
    cin>> n;
    for(int i=0;i<n;i++){
        cin>>profit>>dline;
        job.push_back(make_pair(profit,dline));

    }
    sort(job.begin(),job.end(),greater<pair<int,int> >());

    int maxdline = 0;
    for(int i=0;i<n;i++){
        if(job[i].second>maxdline){
            maxdline = job[i].second;
        }

    }

    int fill[maxdline] ;
    for(int i=0;i<maxdline;i++){
        fill[i] = -1;
    }
    // cout<<fill[0]<<fill[1]<<fill[2];
    int count = 0,maxprofit = 0;

    for(int i=0;i<n;i++){

        int j = job[i].second-1;

        while(j>=0&&fill[j]!=-1){
            j--;
        }
        if(j>=0&&fill[j]==-1){
            
            fill[j] = i;
            count++;
            maxprofit+=job[i].first;
        }
    }

    cout<<count<<" "<<maxprofit;
}