/*
 Programmer : Anamaria Andra Pescaru 
 Link to the problem : https://www.codechef.com/CDMN21C/problems/NODRUGS
*/
#include<bits/stdc++.h>
using namespace std;
// ifstream fcin("input.txt");
// ofstream fcout("output.txt");
// #define cin fcin
// #define cout fcout
int v[1002];
int main(){
	ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
	cout<<fixed<<setprecision(15);

    int test;
    cin>>test;
    while(test--){
      int n, l, k;
      cin>>n>>k>>l;
      cin>>v[1];
     if(n == 1)
     cout<<"YES"<<endl;
     else{
          int maxi = v[1];
      for(int i = 2;i <= n; i++){
          cin>>v[i];
          if(i != n)
          maxi = max(maxi,v[i]);
      }
      if(v[n] > maxi)
      cout<<"Yes"<<endl;
      else{
          if(k < 1 || l == 1)
          cout<<"No"<<endl;
          else{
              if(v[n] + k * (l - 1) > maxi)
              cout<<"Yes"<<endl;
              else
              cout<<"No"<<endl;
          }
      }
     }

    }

	return 0;
}
