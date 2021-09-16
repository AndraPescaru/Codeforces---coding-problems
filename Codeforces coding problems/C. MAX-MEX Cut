/*
 Programmer : Anamaria Andra Pescaru 
 Link to the problem : https://codeforces.com/contest/1566/problem/C
*/
#include<bits/stdc++.h>
using namespace std;
ifstream fcin("input.txt");
ofstream fcout("output.txt");
// #define cin fcin
// #define cout fcout
char s[100002];
char ss[100002];

int main(){
	ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
	cout<<fixed<<setprecision(15);

    int test;
    cin>>test;

    while(test--){
        int n;
        cin>>n;
        cin>>s>>ss;
        int sum = 0;
        int bec = 0, bec0 = 0;

        for(int i = 0; i < n; i++){
            if(s[i] == '1' && ss[i] == '1')
            bec++;
            if(s[i] == '0' && ss[i] == '0')
            bec0++;
            if((s[i] == '0' && ss[i] == '1') || (s[i] == '1' && ss[i] == '0') ){
                 sum += 2;
                 if(bec)
                 bec = 0;
                 if(bec0)
                 sum += bec0, bec0 = 0;
            }
            if(s[i] == '1' && ss[i] == '1'){
                if(bec0){
                    sum += 2 + bec0 - 1;
                    bec0 = 0;
                    bec = 0;
                }
            }
            if(s[i] == '0' && ss[i] == '0'){
                if(bec){
                    sum += 2;
                    bec = 0;
                    bec0 = 0;
                }
            }
        }
        if(bec0)
        cout<<sum + bec0<<endl;
        else
        cout<<sum<<endl;
    }

	return 0;
}
