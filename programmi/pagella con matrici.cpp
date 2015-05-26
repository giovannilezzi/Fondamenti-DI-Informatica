#include <iostream>
#include <cstdlib>
using namespace std;

	const int MAX_ALUNNI=3;
	const int MAX_MATERIE=4;
	
	int pagella[MAX_ALUNNI][MAX_MATERIE];
	string alunni[MAX_ALUNNI]={"Paola Urbani","Lorenzo Ruscitti","Rocco Masci"},
	        materie[MAX_MATERIE]={"Matematica","Italiano","Latino","Fisica"};

double media=0;
int c;

int main(int argc,char *argv[])
{	
	for(int alunno=0;alunno<MAX_ALUNNI;alunno++)
	{
		cout<<"Stai per inserire i voti per l'alunno:"<<alunni[alunno]<<endl;
		
		for(int materia=0;materia<MAX_MATERIE;materia++)
		{
			cout<<"Voto per la materia :"<<materie[materia]<<endl;
			cin>>pagella[alunno][materia];
		}
		
		for(int alunno=0;alunno<MAX_ALUNNI;alunno++)
		{
			for(int materia=0;materia<MAX_MATERIE;materia++)
			{
				cout.width(20);
				cout<<pagella[alunno][materia];
			}
			cout<<endl;
		}
		
	}
	
	system("PAUSE");
	return 0;
	
}
