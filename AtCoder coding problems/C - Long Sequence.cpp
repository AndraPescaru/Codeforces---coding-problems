/*
 Programmer : Anamaria Andra Pescaru 
 Link to the problem : https://atcoder.jp/contests/abc220/tasks/abc220_c
*/
#include<bits/stdc++.h>
using namespace std;
// ifstream fcin("input.txt");
// ofstream fcout("output.txt");
// #define cin fcin
// #define cout fcout
long long v[100001];
 
int main(){
	ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
	cout<<fixed<<setprecision(15);
    int test = 1;
    //cin>>test;
 
    while(test--){
      long long n, sum = 0, i, nr;
      cin>>n;
      int pozitie = -1;
      long long x;
      for(i = 1;i <= n;i++){
          cin>>v[i];
      }
      cin>>x;
      for(i = 1;i <= n;i++){
          sum += v[i];
          if(sum > x && sum - v[i] < x)
          pozitie = i;
          if(sum == x &&  i == n)
          pozitie = i + 1;
      }
      
     if(pozitie != -1)
     cout<<pozitie;
      else{
          nr = 0;
          nr = n * (x / sum);
          x = x % sum;
          sum = 0;
          i = 1;
          while(sum <= x){
              sum += v[i];
              i++;
              nr++;
          }
          cout<<nr;
      }
      
    }
 
    return 0;
}
