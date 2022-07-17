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

void doingStuff(int argCee, string yksi, string kaksi, string kolme)
{
	//should run koska 3 parametria
	cout << "Argument count, " << argCee-1 << endl;
	cout << "Command line arguments: \n";
	cout << yksi << " " << kaksi << " " << kolme <<endl;


	if (yksi == "following")
		Ffollowing(argCee,yksi,kaksi,kolme);


}


void doingStuff(int argCee, string yksi)
{
	//should run koska 3 parametria
	cout << "Argument count, " << argCee-1 << endl;
	cout << yksi <<endl;
	if (yksi == "help")
		printTest();
	else
		cout << "???\nInvalid command";

}
