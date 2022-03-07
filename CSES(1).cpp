#include <bits/stdc++.h>
using namespace std;

#define ll long long
const int N=400;
const int m=1000000007;
#define fast ios_base::sync_with_studio(false),cin.tie(nullptr),cout.tie(nullptr);



int main()
{ 
  ll t;
  cin>>t;
  while(t--)
  { 

    ll c,d;
    ll ds[400];
    cin>c;

   for(int j=1;j<=N;j++)
   { for (int i = 1; i <=N; i++)
    { 
        if(N%i==0)
            d+=i;

    }
    ds[j-1]=d;
    }

    for(int i=0;i<N;i++)
    {
        if(ds[i]==c)
            cout<<i+1<<endl;
        else
            cout<<-1<<endl;
    }


        
    }
  

   

  return 0;
   }
