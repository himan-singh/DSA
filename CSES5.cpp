#include <bits/stdc++.h>

using namespace std;
#define ll long long
int main()
{
   ll n;
   cin>>n;

if(n==2||n==3)
    cout<<"NO SOLUTION";
else if(n==4)
 cout<<"2 4 1 3";

else
{
for(int i=n;i>0;i--)
{if(i%2==0)
    cout<<i<<" ";

}
for(int i=n;i>0;i--)
{if(i%2!=0)
    cout<<i<<" ";

}
}

 

return 0;
}

