#include <bits/stdc++.h>

using namespace std;
#define ll long long
int main()
{int t=1;

cin>>t;
while(t--)
{ ll x,y; 
  cin>>x>>y;

  if(x<y)
  { ll a;
  	if(y%2!=0)
    a=(y*y)-x+1;
    else
    a=((y-1)*(y-1))+x;
   cout<<a<<endl;
  }
  else
  	{ 
  		ll a;
    if(x%2!=0)
  		a=((x-1)*(x-1))+y;
  	else
  		a=(x*x)-y+1;
  	cout<<a<<endl;
	
    }
}
 return 0;

}