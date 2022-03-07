#include <bits/stdc++.h> 
//#include <iomanip>
using namespace std;
int main()
{
		int x;
		double y,r=0.00;
		cin>>x>>y;
		if(x>=0&&x<=2000&&y>=0&&y<=2000)
		if(x%5==0 && x<y)
		{r=(y-x-0.50);
         std::cout << std::fixed;
         std::cout << std::setprecision(2);
         std::cout << r;
		}
		else
         {std::cout << std::fixed;
          std::cout << std::setprecision(2);
          std::cout << y;
          }
  
    
		
return 0;

}