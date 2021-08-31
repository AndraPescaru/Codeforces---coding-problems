
/*
 Programmer : Anamaria Andra Pescaru 
 Link to the problem : https://www.codechef.com/START10C/problems/REPEAT
*/
#include<bits/stdc++.h>
using namespace std;

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
        long long s;
        cin>>n>>k>>s;

        int i = 1, nr = 0;
        long long sum  = 0;
        while(n){
            if(i % 2 != 0){
                sum += i;
                n--;
            }
            i++;
        }
        cout<<(s - sum) /(k-1)<<endl;
    }
    
	return 0;
}
