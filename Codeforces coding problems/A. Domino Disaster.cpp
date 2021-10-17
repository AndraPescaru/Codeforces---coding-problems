/*
 Programmer : Anamaria Andra Pescaru 
 Link to the problem : https://codeforces.com/contest/1567/problem/A
*/
#include<bits/stdc++.h>
using namespace std;
// ifstream fcin("input.txt");
// ofstream fcout("output.txt");
// #define cin fcin
// #define cout fcout
char s[102];

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
        for(int i = 0;i < n;i ++){
            if(s[i] == 'L')
            cout<<"L";
            if(s[i] == 'R')
            cout<<"R";
            if(s[i] == 'U')
            cout<<"D";
            if(s[i] == 'D')
            cout<<"U";
        }
        cout<<endl;
    }

	return 0;
}
