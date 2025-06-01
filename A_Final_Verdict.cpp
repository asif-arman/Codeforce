#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b, sum=0;
        cin>>a>>b;
        int arr[a];
        for(int i=0; i<a; i++){
            cin>>arr[i];
            sum += arr[i];
        }
        if(sum==a*b){
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }

    }
}