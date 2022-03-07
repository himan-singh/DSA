
#include <bits/stdc++.h>
using namespace std;


#define ll long long

const int m=1000000007;


int main()
{

ll int t=0;
cin>>t;
while(t--)
{
  ll n,f1=0,m=0,sum=0;
  cin>>n;
  
if(n%2050!=0)
cout<<-1<<endl;
else 
{
    f1=n/2050;
    
    while(f1>0)    
{    
m=f1%10;    
sum=sum+m;    
f1=f1/10;    
}    
  cout<<sum<<endl;  
}

}
  
  return 0;
}

  




   



