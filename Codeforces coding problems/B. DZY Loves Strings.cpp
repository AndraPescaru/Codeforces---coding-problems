/*
 Programmer : Anamaria Andra Pescaru 
 Link to the problem : https://codeforces.com/problemset/problem/447/B
*/
#include<bits/stdc++.h>
using namespace std;
char s[1001];
int v[27];

int main(){
	//sort(v + 1, v + n + 1);
	//for(i = 1;i <= n;i++)
	ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
	cout<<fixed<<setprecision(15);
    int k, i, sum = 0;
    cin>>s;
    cin>>k;
    cin>>v[1];
    int max = v[1];
    for(i = 2;i <= 26; i ++){
        cin>>v[i];
        if(max < v[i]){
            max = v[i];
        }
    }

    if(k == 0){
        for(i = 0;i < strlen(s); i++){
            sum += (i + 1) * v[s[i] - 'a' + 1];
        }
    }
    else{
        for(i = 0;i < strlen(s); i++){
            sum += (i + 1) * v[s[i] - 'a' + 1];
        }
        i = strlen(s);
        while(k --){
             sum += (i + 1) * max;
             i ++;
        }
    }
    cout<<sum;

	return 0;
}
