/*
 Programmer : Anamaria Andra Pescaru 
 Link to the problem : https://www.pbinfo.ro/probleme/412/adiacenta
*/
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ifstream fcin("adiacenta.in");
ofstream fcout("adiacenta.out");
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

    int n, m;
    cin >> n >> m;
    
    while ( m-- ){
        int x, y;
        cin >> x >> y;
        mm[x][y] = 1;
        mm[y][x] = 1;
    }
    
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= n; j++){
            cout << mm[i][j] <<" ";
        }
        cout << '\n';
    }
	return 0;
}
