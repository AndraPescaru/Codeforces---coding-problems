/*
    Programmer : Pescaru Anamaria-Andra
    Link to the problem : https://codeforces.com/contest/1405/problem/B
*/
#include<bits/stdc++.h>
using namespace std;

// ifstream in("input.txt");
// ofstream out("output.txt");
// #define cin in
// #define cout out
typedef  long long ll;
const ll maxn = 1e5 + 2;

ll v[maxn];

int main()
{

    int test = 1;
    cin>>test;
    for (int tt = 1; tt <= test; ++tt) {
        int n;
        cin >> n;

        for (int i = 1; i <= n; ++i) {
            cin >> v[i];
        }

        ll sum = 0;

        for (int i = 1; i < n; ++i) {
            if (v[i] > 0) {
                sum += v[i];
                
            } else {
                if (v[i] != 0) {
                    ll copie = v[i];
                    if (v[i] + sum > 0) {
                        v[i] = 0;
                        sum = sum + copie;
                    } else {
                        v[i] = v[i] + sum;
                        sum = 0;
                    }
                    
                }
            }
        }

        
            sum += v[n];
        

        cout << sum << '\n';
    }

    

    return 0;
}
