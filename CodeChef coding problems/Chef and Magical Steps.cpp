/*
 Programmer : Anamaria Andra Pescaru 
 Link to the problem : https://www.codechef.com/START16C/problems/CHEFMGX
*/
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
// ifstream fcin("input.txt");
// ofstream fcout("output.txt");
// #define cin fcin
// #define cout fcout
const ll maxn = 1e7 + 2;
const ll md = 1e9 + 7;
const int inf = 2e9;

int v[maxn];
int vv[maxn];

int main(){
	ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
	cout<<fixed<<setprecision(15);


    int test = 1;
    cin>>test;
    ll sum = 0;
    v[0] = 1;
    v[1] = 1;

    for(ll i = 2;i * i <= maxn;i++){
        if(v[i] == 0){
            for(ll j = 2; j <= maxn / i;j++)
            v[i*j] = 1;
        }
    }
    for(ll i = 1; i <= maxn; i++){
        if(v[i] == 0)
        sum++;
        vv[i] = sum;
    }
    while(test--){
    
    ll x, y;
    cin>>x>>y;
    cout<<y - x - vv[y]+ vv[x+1]<<'\n';
    
    }
    

	return 0;
}
