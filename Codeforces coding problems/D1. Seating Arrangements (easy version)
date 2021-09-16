/*
 Programmer : Anamaria Andra Pescaru 
 Link to the problem : https://codeforces.com/contest/1566/problem/D1
*/
#include<bits/stdc++.h>
using namespace std;
ifstream fcin("input.txt");
ofstream fcout("output.txt");
// #define cin fcin
// #define cout fcout
long long v[302];
int main(){
	ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
	cout<<fixed<<setprecision(15);

    int test;
    cin>>test;

    while(test--){
        int n, m;
        cin>>n>>m;
        cin>>v[1];
        int ok = 1;
        for(int i = 2; i <= m; i++){
            cin>>v[i];
            if(v[i] > v[i - 1])
            ok = 0;
        }
        int sum = 0;
        if(!ok){
            for(int i = 1; i <= m; i++){
            for(int j = 1;j < i; j++){
                if(v[j] < v[i])
                sum++;
            }
        }
        cout<<sum<<endl;
        }
        else
        cout<<0<<endl;

    }

	return 0;
}
