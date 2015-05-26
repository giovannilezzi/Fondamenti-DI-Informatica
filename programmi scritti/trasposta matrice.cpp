#include <iostream>
#include <cstdlib>
using namespace std;


int main()
{int i,j,n;
const int MAXRANGO=10;
typedef int matrice[MAXRANGO][MAXRANGO];
matrice a,trasposta;
cout<<"inserire il rango della matrice";
cin>>n;
for(i=0;i<n;i++)
for(j=0;j<n;j++)
{cout<<"inserire il valore "<<i<<","<<j<<":";
cin>>a[i][j];
}
for(i=0;i<n;i++)
{for(j=0;j<n;j++)
{
cout.width(4);
cout<<a[i][j];
}
cout<<endl;
}cout<<"la trasposta di a e':"<<endl;
for(i=0;i<n;i++)
for(j=0;j<n;j++)
trasposta[i][j]=a[j][i];
for(i=0;i<n;i++)
{for(j=0;j<n;j++)
{
cout.width(4);
cout<<trasposta[i][j];
}cout<<endl;
}

 system("PAUSE");
 return 0;
}
