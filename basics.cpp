 
#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define fr(a,b) for(int i = a; i < b; i++)
#define rep(i,a,b) for(int i = a; i < b; i++)
#define mod 1000000007
#define inf (1LL<<60)
#define all(x) (x).begin(), (x).end()
#define prDouble(x) cout << fixed << setprecision(10) << x
#define triplet pair<ll,pair<ll,ll>>
#define goog(tno) cout << "Case #" << tno <<": "
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
#define read(x) int x; cin >> x
#define f(i,n) for(ll i=0;)
using namespace std;


/*
character->int->long int->long long int->float->double
*/
 
void init_code(){
    fast_io;
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif 
}
 
int main() {
   init_code();
   int t = 1; 
   while(t--){

      ll n;
      cin>>n;

      ll a[n];
      fr(i,n)
      cin>>a[i];
      ll temp; cin>>temp;

      ll d[10000];
      sort(a,a+n);
      ll res=0;
     
      fr(i,n)
      {
         for(ll j=i+1;j<n;j++)
         {
            ll f=j+1; ll l=n-1;
            ll flag=-1;
            while(f<=1)
            {
               ll mid=(f+l)/2;
               if(a[i]+a[j]>a[mid]&&a[i]+a[mid]>a[j]&&a[j]+a[mid]>a[i]&&(a[i]+a[j]+a[mid])<temp)
               {
                  flag=mid;
                  f=mid+1;
               }
               else
               l=mid-1;
         }
             
            if(flag>-1){
             res+=flag-j;
            }
        }  
    }
         
     
   
   cout<<res<<endl;
}
   return 0;

}