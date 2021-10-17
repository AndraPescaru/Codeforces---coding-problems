/*
 Programmer : Anamaria Andra Pescaru 
 Link to the problem : https://codeforces.com/problemset/problem/546/B
*/
#include<bits/stdc++.h>
using namespace std;
int v[3001];
int main(){
	//sort(v + 1, v + n + 1);
	//for(i = 1;i <= n;i++)
	ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
	cout<<fixed<<setprecision(15);
    
    //ifstream fcin("input.txt");
    //ofstream fcout("output.txt");
    
    int n;
    cin>>n;
    for(int i = 1; i<= n;i ++)
    cin>>v[i];

    sort(v + 1, v + n + 1);

    int nr = 0;

    for(int i = 2; i <= n; i ++){
        if(v[i] == v[i-1])
        v[i]++, nr ++;
        if(v[i] < v[i-1])
        nr += v[i-1] - v[i] + 1, v[i] += v[i-1] - v[i] + 1 ;
    }
    cout<<nr;

	return 0;
}
