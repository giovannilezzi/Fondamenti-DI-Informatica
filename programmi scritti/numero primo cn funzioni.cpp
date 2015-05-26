#include <iostream>
#include <cstdlib>
using namespace std;
bool NumeroPrimo(int num);

int main()
{ 
 int a;
 cout<<"inserire il numero";
 cin>>a;
 if (NumeroPrimo(a))cout<<"yes";
else cout<<"no";
 
 system("PAUSE");
 return 0;
}
bool NumeroPrimo(int num)
{ int i,n;
  bool primo=true;
  for(i=2;i<num/2+1  && primo;i++)
  if(n%i==0) primo=false;
  return primo;
}
