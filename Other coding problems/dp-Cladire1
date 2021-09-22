/*
 Programmer : Anamaria Andra Pescaru 
 Link to the problem : https://www.pbinfo.ro/probleme/393/cladire1
*/
#include<bits/stdc++.h>
using namespace std;
ifstream fcin("cladire1.in");
ofstream fcout("cladire1.out");
#define cin fcin
#define cout fcout
int mm[1001][1001];
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    cout<<fixed<<setprecision(15);

    int n, m;
    cin>>n>>m;
    int k, x, y;
    cin>>k;
    for(int i = 1;i <= k; i ++){
        cin>>x>>y;
        mm[x][y] = -1;
    }
    mm[1][1] = 1;
    for(int i = 1;i <= n;i ++)
    for(int j = 1;j <= m;j ++){
        if(i == 1 && j == 1)
        continue;
        if(mm[i][j] != -1){
        if(mm[i-1][j] != -1 && mm[i][j-1] != -1){
            mm[i][j] = (mm[i-1][j] + mm[i][j-1]) % 9901;
             continue;
        }
        if(mm[i-1][j] != -1 && mm[i][j-1] == -1){
            mm[i][j] = mm[i-1][j] % 9901;
            continue;
        }
        if(mm[i-1][j] == -1 && mm[i][j-1] != -1){
            mm[i][j] = mm[i][j-1] % 9901;
            continue;
        }
    }
    }
   
    cout<<mm[n][m];
    return 0;
}
