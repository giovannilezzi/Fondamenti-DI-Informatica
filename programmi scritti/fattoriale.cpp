#include <iostream>
#include <cstdlib>
using namespace std;
int main()
{
	int n,i,fattoriale;
	cout<<"inserire un valore di n positivo";
	cin>>n;
	fattoriale=1;
	for(i=1;i<=n;i++)
	fattoriale=fattoriale*i;
	cout<< fattoriale;

system("PAUSE");
     return 0;
}
