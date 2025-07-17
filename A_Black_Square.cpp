/*
codeforce problem name: A. Black Square
codeforce problem link: https://codeforces.com/problemset/problem/431/A
status: accepted
author: Md. Asif Arman
codeforce handle: asif_arman
*/

/*
APPROACH: 
1st-> 
the first line take 4 integer a1,a2,a3,a4
if the input is 1 4 3 6 then a1=1, a2=4, a3=3, a4=6

2nd->
the second line takes one string s, its every character represents "a", meaning,
112243 = a1 a1 a2 a2 a4 a3

3rd->
the output is the sum of these character, meaning,
output: 112243 = a1(1)+a1(1) +a2(4) +a2(4) +a4(6) +a3(3) = the values of a= 1 + 1 + 4 + 4 + 6 + 3 = 19
*/

#include<bits/stdc++.h>
#define int long long
#define e endl
#define line cout<<e
#define cy cout<<"YES"<<e
#define cn cout<<"NO"<<e
using namespace std;

int32_t main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int a1,a2,a3,a4;
    cin>>a1>>a2>>a3>>a4;

    string s;
    cin>>s;

    int sum=0;

    for(int i=0; i<s.size();i++){
        if(s[i]=='1') sum += a1;
        else if(s[i]=='2') sum+=a2;
        else if(s[i]=='3') sum+=a3;
        else sum+=a4;
    }
    cout<<sum<<e;
    return 0;
}