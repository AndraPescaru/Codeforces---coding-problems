/* Programmer : Anamaria-Andra Pescaru 
   Link to the problem : https://codeforces.com/contest/1559/problem/B
*/
#include<bits/stdc++.h>
using namespace std;

int main(){
	//sort(v + 1, v + n + 1);
	//for(i = 1;i <= n;i++)
	ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
	cout<<fixed<<setprecision(15);

int test;
cin>>test;

int n;
char v[101], k[101];
int i, j;

while(test--){
	cin>>n;
	for(i = 0;i < n;i ++){
		cin>>v[i];
		k[i] = v[i];
	}
    if(n == 1){
        if(v[0] == 'R')
        cout<<"R"<<endl;
        if(v[0] == 'B')
        cout<<"B"<<endl;
        if(v[0] == '?')
        cout<<"B"<<endl;
        
    }
    else{
        int s1 = 0, s2 = 0;
	int ok = 1, mm = 1;
	
	if(ok){
		if(v[0] == '?' && v[1] == '?'){
			v[0] = 'R';
			
			for(i = 1;i < n;i ++){
				if(v[i-1] == 'R' && v[i] == '?')
				v[i] = 'B';
				if(v[i-1] == 'B' && v[i] == '?')
				v[i] = 'R';
			}
			mm = 0;
		}
		
		if(v[0] == '?' && v[1] == 'B'){
			v[0] = 'R';
			
			for(i = 1;i < n;i ++){
				if(v[i-1] == 'R' && v[i] == '?')
				v[i] = 'B';
				if(v[i-1] == 'B' && v[i] == '?')
				v[i] = 'R';
			}
			mm = 0;
		}
		if(v[0] == '?' && v[1] == 'R'){
			v[0] = 'B';
			
			for(i = 1;i < n;i ++){
				if(v[i-1] == 'R' && v[i] == '?')
				v[i] = 'B';
				if(v[i-1] == 'B' && v[i] == '?')
				v[i] = 'R';
			}
			mm = 0;
		}
		if(mm)
		{
			for(i = 1;i < n;i ++){
				if(v[i-1] == 'R' && v[i] == '?')
				v[i] = 'B';
				if(v[i-1] == 'B' && v[i] == '?')
				v[i] = 'R';
			}
			}	
		for(i = 0;i < n - 1;i ++)
		if(v[i] == v[i + 1])
		s1 ++;
		ok = 0;
	}
	mm = 1;
	if(ok == 0){
		if(k[0] == '?' && k[1] == '?'){
			k[0] = 'B';
			
			for(i = 1;i < n;i ++){
				if(k[i-1] == 'R' && k[i] == '?')
				k[i] = 'B';
				if(k[i-1] == 'B' && k[i] == '?')
				k[i] = 'R';
			}
			mm = 0;
		}
		
		if(k[0] == '?' && k[1] == 'B'){
			k[0] = 'R';
			
			for(i = 1;i < n;i ++){
				if(k[i-1] == 'R' && k[i] == '?')
				k[i] = 'B';
				if(k[i-1] == 'B' && k[i] == '?')
				k[i] = 'R';
			}
			mm = 0;
		}
		if(k[0] == '?' && k[1] == 'R'){
			k[0] = 'B';
			
			for(i = 1;i < n;i ++){
				if(k[i-1] == 'R' && k[i] == '?')
				k[i] = 'B';
				if(k[i-1] == 'B' && k[i] == '?')
				k[i] = 'R';
			}
			mm = 0;
		}
		if(mm)
		{
			for(i = 1;i < n;i ++){
				if(k[i-1] == 'R' && k[i] == '?')
				k[i] = 'B';
				if(k[i-1] == 'B' && k[i] == '?')
				k[i] = 'R';
			}
			}	
		
		for(i = 0;i < n - 1;i ++)
		if(k[i] == k[i + 1])
		s2 ++;
	}
	if(s1 <= s2){
		for(i=0;i<n;i++)
			cout<<v[i];
			cout<<endl;
	}
	else{
		for(i=0;i<n;i++)
			cout<<k[i];
			cout<<endl;
	}
    }
	
	}

	return 0;
}
