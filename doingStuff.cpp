#include "doingStuff.h"
#include <iostream>
#include <string>



using std::cout;
using std::endl;
using std::string;


#if 0
void doingStuff(string yksi, string kaksi)

{
	//Should not be ran
	cout << yksi << " " << kaksi;


}

#endif


//muutetaan t�m� sillee ett� .exe -olo search_w tiedosto.txt 
//lis�t��n ominaisuuksia t�h�n

void doingStuff(int argCee, string yksi, string kaksi, string kolme)
{
	//should run koska 3 parametria
	cout << "Argument count, " << argCee-1 << endl;
	cout << "Command line arguments: \n";
	cout << yksi << " " << kaksi << " " << kolme <<endl;


	if (yksi == "-olo")
		Ffollowing(argCee,yksi,kaksi,kolme);


}


void doingStuff(int argCee, string yksi)
{
	//should run koska 3 parametria
	cout << "Argument count, " << argCee-1 << endl;
	cout << yksi << endl;
	if (yksi == "help")
		printTest();
	else
		cout << "???\nInvalid command";

}

//t�m� sillee ett� .exe search_w tiedosto.txt 

#if 0
void doingStuff(int argCee, string yksi, string kaksi)
{
	cout << "Argument count, " << argCee - 1 << endl;
	cout << "Command line arguments: \n";
	cout << yksi << " " << kaksi << endl;
	basicRun(argCee, yksi, kaksi);


}

#endif