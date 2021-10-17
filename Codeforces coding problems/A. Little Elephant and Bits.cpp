/*
 Programmer : Anamaria Andra Pescaru 
 Link to the problem : https://codeforces.com/contest/258/problem/A
*/
#include<bits/stdc++.h>
using namespace std;
string s;

int main(){
	//sort(v + 1, v + n + 1);
	//for(i = 1;i <= n;i++)
	ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
	cout<<fixed<<setprecision(15);
    
    //ifstream fcin("input.txt");
    //ofstream fcout("output.txt");

    cin>>s;

    int i, ok = 1, gasit = 0, oprim = 1;

    for(i = 0;s[i] ; i ++){
        if(!s[i+1]  && gasit == 1)
        cout<<s[i];
        
        if(s[i+1]   ){
            if(s[i] == '0' && gasit == 1)
            cout<<s[i];

            if(s[i] == '0' && gasit == 0){
                gasit = 1;
            }
            if(s[i] == '1')
            cout<<s[i];

        }
    }
    

    
    

	return 0;
}
