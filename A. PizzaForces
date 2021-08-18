/* Programmer : Anamaria-Andra Pescaru
   Link to the problem : https://codeforces.com/contest/1555/problem/A
*/
#include <iostream>
#include <math.h>
#include <string.h>
#include <algorithm>
using namespace std;
int main(){
	
	int t;
	long long n;
	cin>>t;
	
	while(t --){
		cin>>n;
		n -= 40;
		long long cnt =n/ 40 * 100 ;
		n = n % 40 ;
		n += 40;
		int minim = 10000;
		for ( int i = 0; i<= 15;i++)
		{
			for(int j=0;j<=15;j++)
			{
				for ( int t = 0;t<=15;t++)
				{
					if(6 * i+8*j+ 10* t < n )
					continue;
					minim = min(minim, i*15+20*j+25*t) ;
				}
			}
		}
		cnt += minim;
		cout<<cnt<<endl;
	}
	
	return 0;
}
