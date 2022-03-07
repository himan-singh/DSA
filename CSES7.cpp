#include <bits/stdc++.h>

using namespace std;
#define ll long long

int main()
{
	int t=1;

while(t--)


{
	int n;
	cin>>n;
	for(int i=1;i<=n;i++)
	{cout<<(((i*i)*((i*i)-1))-8-24-(16*(i-4))-16-((i-4)*24)-((i-4)*(i-4)*8))/2<<endl;
	}
}
return 0;
}