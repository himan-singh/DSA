#include <bits/stdc++.h> 
using namespace std;
int main()
{
	long long int n;
	cin>>n;
	cout<<n<<" ";
	for(int i=0;i<100;i++)
	{
		if(n%2==0)
			{n=n/2;
		cout<<n<<" ";
	}

		 

        else
			{n=(n*3)+1;
		cout<<n<<" ";
	}

		if(n==1)
	    break;

	   

	}	

return 0;
}