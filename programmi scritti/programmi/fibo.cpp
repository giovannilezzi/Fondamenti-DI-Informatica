#include <iostream>
#include <cstdlib>
using namespace std;
 

int main()
{
     int n;
     
     cout<<"max numero Fibonacci";
     cin>>n;
     
     int f1=1, f2=1, f, i=1;
     
     cout<<f1<<" "<<f2<<" ";
 
     while (i<=n)
     {
         f=f1+f2;
         cout<<f<<" ";
         f2=f1;
         f1=f;
         i=i+1;
     }
  
     system("PAUSE");
     return 0;
}
