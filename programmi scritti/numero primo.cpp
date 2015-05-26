#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{int n,i,d;
 cout<<"inserire il numero";
 cin>>n;
 bool primo=true;
 for(i=2;i<n/2+1 && primo;i++)
{
 if(n%i==0)
   primo=false;
}
   if (primo) cout<<"yes";
   else cout<<"no";


system("PAUSE");
return 0;
}
