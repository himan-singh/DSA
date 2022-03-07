#include<bits/stdc++.h>

using namespace std;
#define ll long long

int main() {
  int t;
  cin>>t;
  while(t--)
  {
    ll n,x;
    cin>>n>>x;

    ll a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];

    int t=n%x;

    sort(a,a+n,greater<int>());


    



  }
  return 0;
}
