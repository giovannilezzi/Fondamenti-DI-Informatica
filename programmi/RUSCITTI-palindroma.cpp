#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

int main()

{
	
string parola;
cout<<"Inserire la parola"<<endl;
cin>>parola;

int i=0;
int j=parola.size()-1;
bool palindroma=true;

while(i<j && palindroma)
{
	if(parola[i]!=parola[j])
	  palindroma=false;
	  i++;
	  j--;
}
if(palindroma) cout<<"La parola è palindroma"<<endl;
else cout<<"La parola non è palindroma"<<endl;

system("PAUSE");
return 0;

}
