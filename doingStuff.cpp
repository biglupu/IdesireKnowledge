#include "doingStuff.h"
#include <iostream>
#include <string>


using std::cout;
using std::endl;
using std::string;



void doingStuff(string yksi, string kaksi)

{
	//Should not be ran
	cout << yksi << " " << kaksi;


}

void doingStuff(int argCee, string yksi, string kaksi)
{
	//should run koska 3 parametria
	cout << "Argument count, " << argCee << ": ";
	cout << yksi << " " << kaksi;
	printTest();

}

void doingStuff(int argCee, string yksi)
{
	if (yksi == "-help")
	{
		helpFunction();
	}

	else if (yksi == "help")
	{
		helpFunction();
	}
}