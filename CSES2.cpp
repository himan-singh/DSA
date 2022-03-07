#include <bits/stdc++.h> 
using namespace std;
int main ()
{
	long long int n,sum=0,t=0,m=0;
	cin>>n;
	long long int a[n];
	for(int i=0;i<n-1;i++)
		{cin>>a[i];
			sum+=a[i];
		}
     t=n*(n+1)/2;
     m=t-sum;

     cout<<m;


     return 0;




}

