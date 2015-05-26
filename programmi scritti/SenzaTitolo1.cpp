#include <iostream>
#include <cstdlib>
using namespace std;

const int MAXRANGO=10;
typedef int matrice[MAXRANGO][MAXRANGO];
void letturamatrice(matrice m,int n);
void stampamatrice (matrice m,int n);
bool bandataordine3(matrice m,int n);

int main ()
{ 
 int r;
 cout<<"inserire il rango della matrice";
 cin>>r;
 matrice a;  
 letturamatrice(a,r);
 stampamatrice(a,r);
 if(bandataordine3(a,r)) cout<<"ok";
 else cout<<"no";
  
  system("PAUSE");
  return 0;

}

void letturamatrice(matrice m,int n)
{
	for(int i=0;i<n;i++)
	for(int j=0;j<n;j++)
	{
		cout<<"inserire il valore "<<i<<" "<<j<<":";
		cin>>m[i][j];
	}
}

void stampamatrice(matrice m,int n)
{
	for(int i=0;i<n;i++)
	{ 
	 for(int j=0;j<n;j++)
	  {
	    cout.width (4);
	    cout<<m[i][j];
    } cout<<endl;
    }
}
	
	
bool bandataordine3(matrice m,int n)
{   
  int i,j;
  bool bandata=true; 
  
  for(int i=0;i<n && bandata;i++)
  for(int j=0;j<n && bandata;j++) 
  {
   if(i==j && i==j-1 && i==j+1 && m[i][j]!=1 )
   {
    
    bandata=false;
    
   }
   else if(m[i][j]!=0) 
   {
   bandata=false;
   }}
   return bandata;
  }


