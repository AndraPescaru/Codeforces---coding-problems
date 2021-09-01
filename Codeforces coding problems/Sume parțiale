/*
 Programmer : Anamaria Andra Pescaru 
 Link to the problem : 
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
    
            int i = 1, nr;
            
            while(strchr(s,sir[0]) && strlen(strchr(s,sir[0])) >= m){
                int ok = 1; 
                int q = strlen(strchr(s,sir[0]));
                char *p = strchr(s,sir[0]);
                for(int k = 0; k < m && ok; k ++)
                if(*(p + k) != sir[k])
                ok = 0;
                if(ok)
                aparitii[n - strlen(p) + 1] ++;
                strcpy(s, p + 1);
            }
            
            for(int f = 2; f <= n; f ++)
            aparitii[f] += aparitii[f-1];
            i = 1;
              
            
            while(i <= query){
                if(r[i] - l[i]  + 1< m)
                cout<<"0"<<endl;
                else{
                  
                   cout<<aparitii[r[i] - m + 1] - aparitii[l[i] - 1]<<endl;
                 
                }
                i++;
                
            }
        
    }
    else
        while(query --)
        cout<<"0"<<endl;
    
	return 0;
}
