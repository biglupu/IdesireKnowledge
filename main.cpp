/* Documentation:

main ----- doingStuff.h ------ printTest.h

Still need to find out and most importantly internalize what are the benefits of using Classes and that whole Public/Private/Protected paradigm again

*/



#include <iostream>
#include "doingStuff.h"
#include <string>

using namespace std;



int main(int argc, char** argv){
	
	if (argc > 1)
	{
		doingStuff(argc, argv[1], argv[2]); //here we choose which "doingStuff" is being ran. Function overloading, maybe used, maybe not.

	}
	else
		cout << "no arguments, going to sleep";

	return 0;
}



