#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
	int i,n,e,fatt,s;
	s=0;
	fatt=1;
	i=1;
	
	cout<<"Inserire quanti numeri"<<endl;
	cin>>n;
	
	while(i<=n)
	{
	fatt=fatt*i;
	e=1/fatt;
	s=s+e;
    i++;
	}
	system("PAUSE");
	return 0;
	
}
