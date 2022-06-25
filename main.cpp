/* Documentation:

main ----- doingStuff.h ------ printTest.h

Still need to find out and most importantly internalize what are the benefits of using classes and that whole Public/Private/Protected paradigm again

Perhaps the documentation prompted by the "help" -command should be Private/Protected? Should argc and argv be? Can they be made Const? Should they?

*/



#include <iostream>
#include "doingStuff.h"
using namespace std;



int main(int argc, /*const*/ char** argv){ //works with const char** or without. Const is prolly better in the context, but will it affect anything unexpectedly?
	
	if (argc > 1)
	{
		//here we choose which "doingStuff" is being ran. Function overloading, maybe used in final ver, maybe not.

		if (argc == 2)
			doingStuff(argc, argv[1]);
		if (argc == 3)
			doingStuff(argc, argv[1], argv[2]); 
		if (argc > 3)
			cout << "Error: too many arguments";
		
	}
	else
		cout << "No arguments found, going to sleep";

	return 0;
}



