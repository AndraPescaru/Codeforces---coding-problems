/*
 Programmer : Anamaria Andra Pescaru 
 Link to the problem : https://codeforces.com/problemset/problem/1248/B
*/
#include<bits/stdc++.h>
using namespace std;
int v[100001];

int main(){
	//sort(v + 1, v + n + 1);
	//for(i = 1;i <= n;i++)
	ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
	cout<<fixed<<setprecision(15);

    int n;
	cin>>n;
	int i;

    for(i = 1;i <= n ;i ++){
        cin>>v[i];
    }
    sort(v + 1, v + n + 1);
    long long sum1 = 0;
    long long sum2 = 0;
    if(n % 2 == 0){
        for(i = 1;i <= n / 2 ;i ++)
        sum1 += v[i];
        for(i = n/2 + 1;i <= n ;i ++)
        sum2 += v[i];
        cout<<sum1 * sum1 + sum2 * sum2<<endl;
    }
    else{
        for(i = 1;i <= n / 2 ;i ++)
        sum1 += v[i];
        for(i = n/2 + 1;i <= n ;i ++)
        sum2 += v[i];
        cout<<sum1 * sum1 + sum2 * sum2<<endl;
    }

	return 0;
}
