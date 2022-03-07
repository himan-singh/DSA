
#include <bits/stdc++.h>
using namespace std;


#define ll long long


const int m=1000000007;



int main()
{   
  ll t;
  cin>>t;
  while(t--)
  {
    ll int n;
     cin>>n;

    int a[n];
    for(int i=0;i<n;i++)
      cin>>a[i];

   vector <ll> v1;
   for(int i=0;i<n;i++)
 {  ll s=0;
  s=a[i]*a[i-1];
  
  v1.push_back(s);
}
 cout<<*max_elememt(v1.begin(),v1.end())<<"\n";
 }

  return 0;
}