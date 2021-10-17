/*
 Programmer : Anamaria Andra Pescaru 
 Link to the problem : https://www.codechef.com/START11C/problems/BIGARRAY
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

    int test;
    cin>>test;

    while(test--){
        long long n, s;
        cin>>n>>s;
            if(n * (n + 1) / 2 <= s)
            cout<<"-1"<<endl;
            else{
                if(n * (n + 1) / 2 - s > n)
                cout<<"-1"<<endl;
                else
                cout<<n * (n + 1) / 2 - s<<endl;
            }

    }

	return 0;
}
