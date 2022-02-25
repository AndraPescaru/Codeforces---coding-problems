/*
 Programmer : Anamaria Andra Pescaru 
 Link to the problem : https://codeforces.com/contest/1573/problem/A
*/
#include<bits/stdc++.h>
using namespace std;
// ifstream fcin("input.txt");
// ofstream fcout("output.txt");
// #define cin fcin
// #define cout fcout
char s[101];
int main(){
	ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
	cout<<fixed<<setprecision(15);

    int test;
    cin>>test;

    while(test--){
        int n;
        cin>>n;
        cin>>s;
        long long sum = 0;
        for(int i = 0; i < n; i++){
            if(s[i] != '0' && i != n - 1)
            sum++, sum += s[i] - '0';
            if(i == n - 1 && s[i] != '0')
            sum += s[i] - '0';
        }
        cout<<sum<<endl;
    }

	return 0;
}
