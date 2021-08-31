/* Programmer : Anamaria-Andra Pescaru
   Link to the problem : https://codeforces.com/contest/1399/problem/B
*/
#include <iostream>
#include <algorithm>
using namespace std;
int main(){
	
	int t, n;
	long long a[51], b[51];
	
	cin>>t;
	
	while(t --){
		int n;
		cin>>n;
		long long s = 0;
		int i;
		
		for(i = 1;i <= n;i ++){
			cin>>a[i];
		}
		for(i = 1;i <= n;i ++){
			cin>>b[i];
		}
		
		int min1 = a[1];
		int min2 = b[1];
		
		for(i = 2;i <= n;i ++){
			if(min1 > a[i])
			min1 = a[i];
		}
		for(i = 2;i <= n;i ++){
			if(min2 > b[i])
			min2 = b[i];
		}
		for(i = 1;i <= n;i ++){
			if(a[i] - min1 >= b[i] - min2)
			s += a[i] - min1;
			else
			s += b[i] - min2;
			
		}
		cout<<s<<endl;
	}
	
	return 0;
}
