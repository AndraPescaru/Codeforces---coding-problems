/*
 Programmer : Anamaria Andra Pescaru 
 Link to the problem : https://www.pbinfo.ro/probleme/413/adiacenta1
*/
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ifstream fcin("adiacenta1.in");
ofstream fcout("adiacenta1.out");
#define cin fcin
#define cout fcout
const ll maxn = 1e7 + 2;
const ll md = 1e9 + 7;
const int inf = 2e9;

int mm[101][101];

int main (){
	ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
	cout<<fixed<<setprecision(15);
    int vf = 1;
    int x, y;
    while (cin>>x ){
        cin>>y;
        mm[x][y] = 1;
        mm[y][x] = 1;
        vf = max(vf, x);
        vf = max(vf, y);
    }
 
    for (int i = 1; i <= vf; i++){
        for (int j = 1; j <= vf; j++){
            cout << mm[i][j] <<" ";
        }
        cout << '\n';
    }
	return 0;
}
