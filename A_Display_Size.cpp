#include<bits/stdc++.h>
#define int long long
#define e endl
#define line cout<<e
#define cy cout<<"YES"<<e
#define cn cout<<"NO"<<e
using namespace std;

int indexMin(vector <pair<int,int>> a){
    int min=abs(a[0].first-a[0].second), index=0;
    for(int i=0; i<a.size(); i++){
       if(abs(a[i].first-a[i].second)<min){
        min=abs(a[i].first-a[i].second);
        index=i;
       }
    }
    return index;
}

int32_t main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int num,minimum=-1,a,b;
    cin>>num;
    vector<pair<int,int>> set;
    for(int i=1;i<=num;i++){
        
        if(num%i==0){
            a=num/i;
            b=i;
            set.push_back({a,b});
        }

    }
    sort(set.begin(),set.end());
    // for(auto p:set){
    //     cout<<p.first<<", "<<p.second<<e;
    // }
    cout<<set[indexMin(set)].first<<" "<<set[indexMin(set)].second<<e;
    return 0;
}