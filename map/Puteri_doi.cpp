/*
 Programmer : Anamaria Andra Pescaru 
 Link to the problem : Cate perechi de 2 numere adunate reprezinta o putere a lui 2
*/
#include<bits/stdc++.h>
using namespace std;
// ifstream fcin("input.txt");
// ofstream fcout("output.txt");
// #define cin fcin
// #define cout fcout


int main(){
	ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
	cout<<fixed<<setprecision(15);

    int n, x;
    unordered_map<char, long long> v;
    long long putere[33];


    cin >> n;
    long long cnt = 0;
    for (int i = 1; i <= n; ++i) {
        cin >> x;
        for (int j = 0; j <= 32; ++j) {
            cnt += v[putere[j] - x];
        }
        ++v[x];
    }

    cout << cnt << '\n';
    
  
    return 0;
}
