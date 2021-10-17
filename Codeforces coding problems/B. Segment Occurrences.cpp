/*
 Programmer : Anamaria Andra Pescaru 
 Link to the problem : https://codeforces.com/problemset/problem/1016/B
*/
#include<bits/stdc++.h>
using namespace std;
// ifstream fcin("input.txt");
// ofstream fcout("output.txt");

// #define cin fcin
// #define cout fcout
int l[100002], r[100002];
char s[1001], sir[1001], ss[1001];
int aparitii[1001];
int main(){
	ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
	cout<<fixed<<setprecision(15);
    
    int n, m, query;
    cin>>n>>m>>query;
    cin>>s;
    cin>>sir;
    for(int i = 1; i <= query; i ++){
        cin>>l[i]>>r[i];
    }
    
    if(m > n){
        while(query--)
         cout<<"0"<<endl;
         return 0;
    }
        
    if(strchr(s,sir[0]) ){
        if(m == n){
            int i = 1, ocupat = 1;
            while(i <= query){
                int ok;
                if(l[i] == 1 && r[i] == n){
                    if(ocupat){
                        ocupat == 0;
                         ok = 1;
                        for(int j = 0;j < n && ok; j ++)
                        if(s[j] != sir[j])
                        ok = 0;
                        if(ok)
                        cout<<"1"<<endl;
                        else
                        cout<<"0"<<endl;
                    }
                    else{
                        if(ok)
                        cout<<"1"<<endl;
                        else
                        cout<<"0"<<endl;
                    }
                }
                else
                cout<<"0"<<endl;
                i++;
            }
        
        }
        if(n > m){
            int i = 1, nr;
            strcpy(ss,s);
            while(strchr(ss,sir[0]) && strlen(strchr(ss,sir[0])) >= m){
                int ok = 1; 
                int q = strlen(strchr(ss,sir[0]));
                char *p = strchr(ss,sir[0]);
                for(int k = 0; k < m && ok; k ++)
                if(*(p + k) != sir[k])
                ok = 0;
                if(ok)
                aparitii[n - strlen(p) + 1] ++;
                strcpy(ss, p + 1);
            }
            i = 1;
            while(i <= query){
                if(r[i] - l[i] + 1 < m)
                cout<<"0"<<endl;
                else{
                    nr = 0;
                    for(int h = l[i]; h <= r[i] && h + m - 1 <= r[i]; h++)
                    if(aparitii[h] )
                    nr++;
                    cout<<nr<<endl;
                }
                i++;
                
            }
        } 
    }
    else
        while(query --)
        cout<<"0"<<endl;
    
	return 0;
}
