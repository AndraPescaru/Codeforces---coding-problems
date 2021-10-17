/*
 Programmer : Anamaria Andra Pescaru 
 Link to the problem : https://atcoder.jp/contests/abc220/tasks/abc220_a
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
    int test = 1;
    //cin>>test;
 
    while(test--){
        int a, b, c;
        int ok = 1;
        cin>>a>>b>>c;
        for(int i = a; i <= b && ok;i++)
        if(i >= c && i % c == 0)
        cout<<i, ok = 0;
        if(ok)
        cout<<"-1";
    }
 
    return 0;
}
