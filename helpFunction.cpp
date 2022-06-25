#include <iostream>
#include "helpFunction.h"

void helpFunction()

{
	std::cout << "\nHelp documentation print successful: ";
    std::cout << "\nInput the command you wish to excecute first, followed by the filename (with location) and lastly the search term\n";
    std::cout << "\nCommands are differentiated with the \" - \" symbol before the command with the exception of the \"help\" command\n";
    std::cout << "\n";
    std::cout << "-a\nProcess binary files as if they were text\n";
    std::cout << "\n-i, -ignore\nIgnore case differences between the patterns and the files\n";
    std::cout << "\n-help, help\nPrint out all the commands and documentation\n";

}