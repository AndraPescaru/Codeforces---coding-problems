/*
 Programmer : Anamaria Andra Pescaru 
 Link to the problem : https://atcoder.jp/contests/abc220/tasks/abc220_b
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
        long long a, b, k;
        int ok = 1;
        cin>>k;
        cin>>a>>b;
        if(k == 10)
        cout<<a * b;
        if(k != 0 && k != 10){
            long long aa = 0, bb = 0, i = 1;
            while(a){
                aa += a % 10 * i;
                i *= k;
                a /= 10;
            }
            i = 1;
            while(b){
                bb += b % 10 * i;
                i *= k;
                b /= 10;
            }
            cout<<aa * bb;
        }
    }
 
    return 0;
}
