/*
 Programmer : Anamaria Andra Pescaru 
 Link to the problem : https://codeforces.com/problemset/problem/628/C
*/
#include<bits/stdc++.h>
using namespace std;
// ifstream fcin("input.txt");
// ofstream fcout("output.txt");
// #define cin fcin
// #define cout fcout
string s, ss;

int main(){
	ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
	cout<<fixed<<setprecision(15);

    int n, k;
    // scanf("%d %d", &n, &k);
    // scanf("%s", s);
    cin>>n>>k;
    cin>>s;
    int i = 0;
    while(i < n){
        if(k - ( 'z' - s[i]) >= 0 && k - ( s[i] - 'a') >= 0 && i < n)
        if(  ( s[i] - 'a') >=  ( 'z' - s[i]))
        ss += 'a', k -= ( s[i] - 'a'), i++;
        else
        ss += 'z', k -= ('z' - s[i]), i++;

        if(k - ('z' - s[i]) < 0 && k - ( s[i] - 'a') < 0 && k > 0 && i < n)
        ss += s[i] + k , k = 0, i++;
        if(k - ('z' - s[i]) < 0 && k - ( s[i] - 'a') >= 0 && k > 0 && i < n)
        ss += s[i] + k , k = 0, i++;
        if(k - ('z' - s[i]) >= 0 && k - ( s[i] - 'a') < 0 && k > 0 && i < n)
        ss += s[i] - k, k = 0, i++;


        if(k == 0 && i < n)
         ss += s[i],i++;
        
        
    }

    if(k)
    cout<<"-1"<<endl;
    else
    cout<<ss<<endl;    
    // if(k)
    // printf("-1\n");
    // else
    // printf("%s\n",ss);
    
	return 0;
}
