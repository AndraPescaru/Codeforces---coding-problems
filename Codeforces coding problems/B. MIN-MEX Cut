/*
 Programmer : Anamaria Andra Pescaru 
 Link to the problem : https://codeforces.com/contest/1566/problem/B
*/
#include<bits/stdc++.h>
using namespace std;
ifstream fcin("input.txt");
ofstream fcout("output.txt");
// #define cin fcin
// #define cout fcout
char s[100002];

int main(){
	ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
	cout<<fixed<<setprecision(15);

    int test;
    cin>>test;

    while(test--){
        cin>>s;
        int sum = 0;
        int s1  = 0, s0 = 0, aparitie = 0;
        int ok = 1;

        for(int i = 0; i < strlen(s); i++){
            if(s[i] == '1')
            s1++;
            if(s[i] == '0' && s0 == 0)
            s0++, aparitie = s1;
            if(s[i] == '0' && s1 != aparitie && ok){
                aparitie = -1;
                ok = 0;
            }


        }
        if(ok == 0){
            cout<<2<<endl;
            continue;
        }
        if(s1 == 0){
            cout<<1<<endl;
            continue;
        }
        if(s0 == 0){
            cout<<0<<endl;
            continue;
        }
        cout<<1<<endl;
        
    }

	return 0;
}
