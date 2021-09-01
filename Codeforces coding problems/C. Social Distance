/*
 Programmer : Anamaria Andra Pescaru 
 Link to the problem : https://codeforces.com/problemset/problem/1367/C
*/
#include<bits/stdc++.h>
using namespace std;
// ifstream fcin("input.txt");
// ofstream fcout("output.txt");
// #define cin fcin
// #define cout fcout
string s;

int main(){
	ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
	cout<<fixed<<setprecision(15);

    int test;
    long long n, k;
    cin>>test;

    while(test--){
        cin>>n>>k;
        cin>>s;
        int nr = 0, sum = 0;
        for(int i = 0;i < s.length(); i++){
            if(s[i] == '1')
             if(nr + 1 == (k+1) )
                nr++;
             else
                nr= 0;
            else
            if(i != 0)
            nr++;
            if(nr == (k + 1) && s[i] == '0')
            sum++, nr = 0;
            if(nr < (k+1) && sum != 0 && s[i] == '1')
            sum--, nr = 0 ;
            if(s[i] == '0' && i == 0)
            sum++, nr = 0;
            if(s[i]=='1' )
            nr = 0;
            
        }
        cout<<sum<<endl;
    }

    
	return 0;
}
