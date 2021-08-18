/* Programmer : Anamaria-Andra Pescaru
   Link to the problem : https://codeforces.com/contest/1538/problem/B
*/
#include <iostream>
using namespace std;

int main(){

	int t,n,v[200001];

	cin>>t;

	while(t--){
	
		cin>>n;
		if (n == 1){
			cin>>v[1];
			cout<<"0"<<"\n";
		}
		else
		{
			int i;
		int ok=1,s;
		cin>>v[1];
		s=v[1];
		for (i = 2; i <= n; i ++){
			cin>>v[i];
			if (v[i] == v[1])
			ok++;
			s += v[i];
		}
		if (ok == n){
			cout<<"0"<<"\n";
		}else{
			if (s % n != 0 )
			cout<<"-1"<<"\n";
			else{
				int k=0;
				for (i=1;i<=n;i++){
					if (s / n != v[i] && s / n < v[i] )
					k++;
				}
				cout<<k<<"\n";
			}


		}
		
		}
		
	}

	return 0;
}
