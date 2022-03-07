#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    
    int t;
    cin>>t;
    for(int z=0;z<t;z++)
    {
        ll n;
        ll x;
        cin>>n;
        vector<ll> v;
        for( int i=0;i<n;i++){
            cin>>x;
            v.push_back(x);
        }
        
        int count=0;
        int i=0;
        int current = v[i];
        for(int j=1;j<n;j++){
            if(current>v[j]-1){
                while(!(current< v[j])){
                    string n = to_string(v[j]);
                    string m ="0";
                    n.append(m);
                    v[j]=stoi(n);
                    count++;
                }
            }
                else{
                    i++;
                }
            }
            cout<<"Case #"<<z+1<<":"<<" "<<count<<endl;
        }
    return 0;
}