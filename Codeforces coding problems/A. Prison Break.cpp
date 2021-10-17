/*
 Programmer : Anamaria Andra Pescaru 
 Link to the problem : https://codeforces.com/contest/1484/problem/A
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
    cin>>test;
    while(test--){
      int a, b;
      cin>>a>>b;
      cout<<a * b<<'\n';
    }   
    return 0;
}
