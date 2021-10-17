
/*
 Programmer : Anamaria Andra Pescaru 
 Link to the problem : https://www.codechef.com/START10C/problems/SIGNFLIP
*/
#include<bits/stdc++.h>
using namespace std;
int v[100001];
int mini = 999999;

int main(){
	//sort(v + 1, v + n + 1);
	//for(i = 1;i <= n;i++)
	ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
	cout<<fixed<<setprecision(15);
    
    //ifstream fcin("input.txt");
    //ofstream fcout("output.txt");
    int test;
    cin>>test;

    while(test--){
        int n, k;
        long long sum = 0;
        cin>>n>>k;
        int i;
        for(i = 1; i<= n; i++)
        cin>>v[i];

        sort(v + 1, v + n + 1);

        int ok = 1;
        for(i = 1; i <= k  && ok;i ++){
            if(v[i] < 0)
            sum += v[i] * (-1);
            else
            ok = 0;
        }
        ok = 1;
        for(i = n;i >= 1 && ok; i--)
        if(v[i] >= 0)
        sum += v[i];
        else
        ok = 0;
        cout<<sum<<endl;
    }
    
	return 0;
}
