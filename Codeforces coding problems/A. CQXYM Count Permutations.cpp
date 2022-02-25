/*
 Programmer : Anamaria Andra Pescaru 
 Link to the problem : https://codeforces.com/contest/1581/problem/A
*/
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
// ifstream fcin("input.txt");
// ofstream fcout("output.txt");
// #define cin fcin
// #define cout fcout
const ll maxn = 2e5 + 2;
const ll md = 1e9 + 7;
const int inf = 2e9;


int main(){
	ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
	cout<<fixed<<setprecision(15);


    int test = 1;
    cin>>test;
    while(test--){
        ll n, m, k;
        cin>>n>>m>>k;
        ll c = n * (n - 1) / 2;
        if(m > c || m < n - 1){
            cout<<"NO\n";
            continue;
        }
        k -= 2;
        if(k < 0){
            cout<<"NO\n";
            continue;
        }
        if(k == 0){
            if(n == 1){
                cout<<"YES\n";
            }
            else{
                cout<<"NO\n";
            }
            continue;
        }
        if(m == c){
            cout<<"YES\n";
            continue;
        }
        if(k == 1){
            if(n <= 2){
                cout<<"YES\n";
            }
            else{
                cout<<"NO\n";
            }
            continue;
        }
        cout<<"YES\n";

    }

	return 0;
}
