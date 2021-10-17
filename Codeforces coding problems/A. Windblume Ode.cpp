/*
 Programmer : Anamaria Andra Pescaru 
 Link to the problem : https://codeforces.com/contest/1586/problem/A
*/
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
// ifstream fcin("input.txt");
// ofstream fcout("output.txt");
// #define cin fcin
// #define cout fcout
const ll maxn = 1e5 + 2;
const ll md = 1e9 + 7;
const int inf = 2e9;

int v[103];

int main(){
	ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
	cout<<fixed<<setprecision(15);


    int test = 1;
    cin>>test;
    while(test--){
        int n;
        cin>>n;
        int i;
        ll sum = 0;
        for(i = 1;i <= n;i++)
        cin>>v[i], sum += v[i];
        
        int nr = n;
        bool ok = 1;
        for(ll j = 2;j * j <= sum && ok;j++ )
        if(sum % j == 0)
        ok = 0;

        if(ok == 0){
            cout<<n<<'\n';
            for(i = 1; i <= n; i++)
            cout<<i<<" ";
            cout<<'\n';
        }
        else{
            bool gasit = 1;
            for(i = 1; i <= n  && gasit; i++){
                ll summ = sum - v[i];
                bool okk = 1;
                 for(ll j = 2;j * j <= summ && okk;j++ )
                if(summ % j == 0)
                okk = 0;
                if(okk == 0){
                    cout<<n - 1<<'\n';
                    for(ll j = 1; j < i; j++)
                    cout<<j<<" ";
                    for(ll j = i + 1; j <= n; j++)
                    cout<<j<<" ";
                    gasit = 0;
                    cout<<'\n';
                }
            }
        }
    }
    

	return 0;
}
