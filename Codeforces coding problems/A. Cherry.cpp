/* Programmer : Anamaria-Andra Pescaru
   Link to the problem : https://codeforces.com/contest/1554/problem/A
*/
#include <iostream>
#include <math.h>
#include <string.h>
#include <algorithm>
using namespace std;
int main(){
	
	int t;
	cin>>t;
	long long n, v[100003];
	
	while(t --){
		cin>>n;
		long long i;
		for(i = 1;i <= n; i ++)
		cin>>v[i];
		
		long long max = v[1]*v[2];
		for(i = 2;i < n; i ++)
		{
			if(v[i]*v[i+1] > max)
			max = v[i]*v[i+1];
		}
		cout<<max<<endl;
	}
	
	return 0;
}
