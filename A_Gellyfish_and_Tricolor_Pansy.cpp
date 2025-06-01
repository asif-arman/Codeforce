#include<bits/stdc++.h>
#define int long long
#define e endl
#define cy cout<<"YES"<<e
#define cn cout<<"NO"<<e
using namespace std;


int32_t main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t;
    cin>>t;
    while(t--){
        int GH,FH,GK,FK;
        cin>>GH>>FH>>GK>>FK;
        
        int GN=2*min(FH,FK)-1;
        int FN = 2*min(GH,GK);

        cout<<((GN<FN)?"Gellyfish":"Flower")<<e;
        
    }
    return 0;
}