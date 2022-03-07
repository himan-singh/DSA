#include<bits/stdc++.h>
using namespace std;
#include <algorithm>

using std::cout;
int main()
{
    
    string s;
    cin>>s;
    
    int count1=0,count2=0,count3=0,count4=0;
    int maxv1=0,maxv2=0,maxv3=0,maxv4=0;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='A')
        {
            count1++;
            if(count1>=maxv1)
            maxv1=count1;
            
        }
        else
        count1=0;


         if(s[i]=='C')
        {
            count2++;
            if(count2>=maxv2)
            maxv2=count2;
            
        }
        else
        count2=0;

         if(s[i]=='T')
        {
            count3++;
            if(count3>=maxv3)
            maxv3=count3;
            
        }
        else
        count3=0;

         if(s[i]=='G')
        {
            count4++;
            if(count4>=maxv4)
            maxv4=count4;
            
        }
        else
        count4=0;
    }
    

    cout<< max({maxv1,maxv2,maxv3,maxv4});
    
return 0;
}
