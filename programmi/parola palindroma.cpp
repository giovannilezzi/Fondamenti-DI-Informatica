#include <iostream>
#include <cstdlib>
#include<string>
using namespace std;


int main()
{ 
int i,j;
string s1;
bool palindroma=true;
cout<<"inserire parola"<<endl;
cin>>s1;
i=0;
j=s1.size()-1;
while(i<j && palindroma)
if (s1[i]!=s1[j])palindroma=false;
else
{i++;
j--;
}
if(palindroma)
cout<<"yes";
else cout<<endl<<"no"<<endl<<endl;

 system("PAUSE");
 return 0;
}

