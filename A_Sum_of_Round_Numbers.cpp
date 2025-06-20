#include <bits/stdc++.h>
#define int long long
#define e endl
#define line cout << e
#define cy cout << "YES" << e
#define cn cout << "NO" << e
using namespace std;

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--){
        int count = 0;
        string n;
        cin >> n;
        for (int i = n.size() - 1; i >= 0; i--){
            if (n[i] != '0'){
                count++; 
            }
        }

        cout<<count<<e;

        for (int i = n.size() - 1; i >= 0; i--){
            if (n[i] != '0'){
                cout << n[i];
                for (int j = n.size() - 1; j > i; j--)
                {
                    cout << 0;
                }
                cout << " ";
            }
        }
        line;
    }
    return 0;
}