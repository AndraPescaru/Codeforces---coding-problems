/* Programmer : Anamaria-Andra Pescaru
   Link to the problem : https://codeforces.com/contest/1551/problem/A
*/
#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	int t;
	long long n;
	cin>>t;
	
	while (t--){
		cin>>n;
		
		if (n % 3 != 0){
			if (n / 3 + 2 * ( n / 3 + 1 ) == n)
			cout<<n / 3<<" "<<n / 3 + 1<<endl;
			else
			cout<<n / 3 + 1<<" "<<n / 3 <<endl;
		}
		else
		cout<<n / 3<<" "<<n / 3<<endl;
		
	}
    return 0;
}
