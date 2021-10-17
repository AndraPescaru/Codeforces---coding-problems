/* Programmer : Anamaria-Andra Pescaru
   Link to the problem : https://codeforces.com/contest/1553/problem/A
*/
#include <iostream>
#include <math.h>
#include <string.h>
using namespace std;
int main()
{
   int t,n,i,s=0;

   cin>>t;

   while(t--){
       cin>>n;
    if(n%10==9)
       cout<<n/10+1<<endl;
       else
       cout<<n/10<<endl;

   }
    return 0;
}
