#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;
 

int main()
{
     string parola;
     cout<<"inserire la parola";
     cin>>parola;
     
     int lunghezza=parola.size();
     
     int i=0, j=lunghezza-1;
     
     bool palin=true;
     
     while (i<j && palin)
     {
            if (parola[i]!=parola[j]) palin=false;
            i++;
            j--;
     }
            
     if (palin)
        cout<<"la parola inserita e' palindroma";
     else
        cout<<"la parola inserita non e' palindroma";
     
  
    
     system("PAUSE");
     return 0;
}
