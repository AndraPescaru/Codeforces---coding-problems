/*
 Programmer : Anamaria Andra Pescaru 
 Link to the problem : https://www.pbinfo.ro/probleme/392/cladire
 bottom-up
*/
#include<bits/stdc++.h>
using namespace std;
ifstream fcin("cladire.in");
ofstream fcout("cladire.out");
#define cin fcin
#define cout fcout
int mm[1001][1001];
int main(){
	ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
	cout<<fixed<<setprecision(15);

    int n, m;
    cin>>n>>m;

    for(int i = 1;i <= n;i ++)mm[i][1] = 1;
    for(int i = 1;i <= m;i ++)mm[1][i] = 1;
    for(int i = 2;i <= n;i ++)
    for(int j = 2;j <= m;j ++)
    mm[i][j] = (mm[i-1][j] + mm[i][j-1]) % 9901;

    cout<<mm[n][m];
	return 0;
}
