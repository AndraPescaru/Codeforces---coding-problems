/* Programmer : Anamaria-Andra Pescaru
   Link to the problem : https://codeforces.com/contest/1399/problem/A
*/
#include <iostream>
#include <algorithm>
using namespace std;
int main(){
	
	int t, n, v[101];
	
	cin>>t;
	
	while(t --){
		cin>>n;
		int i, ok = 1;
		
		for(i = 1;i <= n;i ++)
		cin>>v[i];
		
		if( n == 1)
		cout<<"YES"<<endl;
		else{
			sort(v +1, v + n + 1);
			
		for(i = 1;i < n && ok;i ++){
			if(v[i+1] - v[i] > 1){
				ok = 0;
			}
		}
		
		if(ok)
		cout<<"YES"<<endl;
		else
		cout<<"NO"<<endl;
		}
	}
	
	return 0;
}
