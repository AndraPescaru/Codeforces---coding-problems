/* Programmer : Anamaria-Andra Pescaru
   Link to the problem : https://codeforces.com/contest/1552/problem/A
*/
#include <iostream>
#include <string.h>
#include <math.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
 
	while(t --){
	int n,j;
	cin>>n;
	char s[45];
	cin>>s;
	int i, ok=0;
	for(i=0;i<n;i++)
	if(s[i]==s[i-1])
	ok++;
	
	if(ok == n-1)
	cout<<"0"<<endl;
	else
	{
		char ss[55];
		strcpy(ss,s);
		for(i=0;i<n-1;i++)
		{
			for(j=i+1;j<n;j++)
			if(ss[i]>ss[j])
			{
				char aux=ss[i];
				ss[i]=ss[j];
				ss[j]=aux;
				
			}
		}
		int nr=0;
		for(i=0;i<n;i++)
		if(s[i]!=ss[i])
		nr++;
		
		cout<<nr<<endl;
		
	}
	
	}
	return 0;
}
