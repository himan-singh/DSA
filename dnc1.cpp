#include <bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_studio(false),cin.tie(nullptr),cout.tie(nullptr);

int main()
{
    long long int t=0;
    cin>>t;

    while(t--)
    {
  long long int n=0,k=0,c=2,count=1;
  cin>>n>>k;
  
   while(c<=n)
   {
    if(c<n && k>c)
    {c=2*c;    
    count++;
    }else
    ;

   }
   
  
  cout<<count+1<<endl;



    }
    return 0;
}
