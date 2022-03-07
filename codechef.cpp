#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
ll t,n;
while(t--)
{ 
	cin>>n;
	ll a[n],count=0;

 for(int i=1;i<=n;i++)
 {if(n%i<=(n))
 	count++;
 }
cout<<count;

 
}


return 0;
}