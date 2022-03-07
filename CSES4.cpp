 #include <bits/stdc++.h> 
using namespace std;
int main ()
{   long long  n;
    cin>>n;
    long long a[n];

    for(int i=0;i<n;i++)
    {
     cin>>a[i];
        
    }
    long long int sum=0;

    for(int i=0;i<n-1;i++)
    {
     if(a[i]>a[i+1])
        {sum+=abs(a[i]-a[i+1]);
            a[i+1]=a[i];
        }
        
    }cout<<sum;
    return 0;




}   