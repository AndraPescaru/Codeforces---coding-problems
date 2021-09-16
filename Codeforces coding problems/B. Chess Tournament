/*
 Programmer : Anamaria Andra Pescaru 
 Link to the problem : https://codeforces.com/contest/1569/problem/B
*/
#include<bits/stdc++.h>
using namespace std;
//ifstream fcin("input.txt");
//ofstream fcout("output.txt");
//#define cin fcin
//#define cout fcout
char s[51];
char m[51][51];
int main(){
	ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
	cout<<fixed<<setprecision(15);

    int test;
    cin>>test;
    while(test--){
      int n;
      cin>>n;
      cin>>s;
      int sum1 = 0, sum2 = 0;
      int i;
      for(i = 0;i < n;i++)
      if(s[i] == '1')
      sum1++;
      else
      sum2++;
      if(sum2 == 1 || sum2 == 2)
      cout<<"NO"<<endl;
      else{
          for(i = 0;i<n;i++){
              for(int j = 0;j<n;j++)
              m[i][j] = 0;
              
          }
          cout<<"YES"<<endl;
          for(i = 0;i < n;i++){
              int nr = 0;
              for(int j = 0; j < n; j++){
                  if(i == j)
                  m[i][j]='X';
                  else
                  {
                      if(s[i] == s[j] && s[i] == '1' && m[i][j] == 0)
                      m[i][j]='=', m[j][i] = '=';
                      if((s[i] == '1' && s[j] == '2')&& m[i][j] == 0 )
                      m[i][j]='+',m[j][i] = '-';
                      if((s[i] == '2' && s[j] == '1')&& m[i][j] == 0 )
                      m[i][j]='-',m[j][i] = '+';
                      if(s[i] == s[j] && s[i] == '2' && m[i][j] == 0)
                      if(nr == 0)
                      m[i][j]='+',m[j][i]='-', nr++;
                      else
                      m[i][j]='-',m[j][i]='+';
                  }
              }
          }
          for(i = 0;i<n;i++){
              for(int j = 0;j<n;j++)
              cout<<m[i][j];
              cout<<endl;
          }
      }
    }

	return 0;
}
