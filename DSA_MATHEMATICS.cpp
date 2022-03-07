#include <bits/stdc++.h>
using namespace std;


#define ll long long int



// factorial of a number

int main()
{
	ll n=0,fact=1;
	cout<<"enter the value of n:"<<endl;
	cin>>n;
   

	for(ll i=n;i>0;i--)
		{		fact=fact*i;
		}

    if(n==0||n==1)
    cout<<1<<endl;
    else
	cout<<fact<<endl;

	return 0;
}



//trailing zeros in factorial
/*
int main()
{
	int n=0;
	int ans=0;
	cout<<"enter n:";
	cin>>n;

	

	for(int i=5;i<=n;i=i*5)
	{	ans=ans + n/i;
      
	}

	cout<<ans;

	return 0;

}*/



//palindrome number
/*
int main()
{
	ll n,num,digit=0,rev=0;
	cout<<"enter the number:";
	cin>>num;

	n=num;

	while(num!=0)
	{
      digit=num%10;
      rev=(rev*10)+digit;
      num=num/10;

	}
	if(n==rev)
		cout<<"palindrome";
	else
		cout<<"not palindrome";


}
*/



//1.Sieve of eratosthenes(primenumber)
/*
const int N=1e7+10;
vector<bool> isprime(N,1);
vector<int> lp(N,0) , hp(N,0);

int main()
{
	isprime[0]=isprime[1] = false;
	for(int i=2;i<N;i++)
	{
		if(isprime[i]==true){
			lp[i]=hp[i]=i;
			for(int j=2*i;j<N;j+=i){
				isprime[j]=false;
				hp[j]=i;
				if(lp[j]==0){
					lp[j]=i;
				}

			}
		}
	}
	for(int i=1;i<100;i++)
	{
		cout<<i<<" " <<isprime[i]<<" "<<lp[i]<<" "<<hp[i]<<endl;
	}

	int num;
	cin>>num;
	
	vector <int> prime_factors;

	while(num>1){
		int prime_factor=hp[num];
		while(num%prime_factor==0)
		{
			num/=prime_factor;
			prime_factors.push_back(prime_factor);

		}

        for(int factor:prime_factors)
        {
        	cout<<factor<<" ";

        }
	}
	return 0;

}

*/

//2.Euclid GCD






























