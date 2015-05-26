#include <iostream>
#include <cstdlib>
using namespace std;
 

int main()
{
     int n;
     
     cout<<"max numero Fibonacci";
     cin>>n;
     
     int f[100];
     
     f[0]=1;
     f[1]=1;
     
     int i=2;
     
     while (i<=n)
     {
         f[i]=f[i-1]+f[i-2];
         i=i+1;
     }
  
     for (int i=0; i<n; i++)
       cout<<f[i]<<endl;
  
  
     system("PAUSE");
     return 0;
}
