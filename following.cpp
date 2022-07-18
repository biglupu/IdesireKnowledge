#include <iostream>
#include <fstream>
#include "following.h"

using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::ifstream;



void Ffollowing(int argCee, string yksi, string kaksi, string kolme)
{
    ifstream inputFile;
    string filename;
    string search_w;
    string found_w;
    bool found = 0;
    string line;

    if (argCee > 1)
    {

        search_w = kaksi;
        filename = kolme;

        inputFile.open(filename);
        if (inputFile)
        {
            while (getline(inputFile, line))
            {
                if (line.find(search_w) != -1)
                {
                    cout << "\nString \"" << search_w << "\" found on the line:\n";
                    cout << line << endl << endl;
                    found = 1;

                }
            }

            if (found == 0)
            {
                cout << "Word " << search_w << "not found in file: " << filename;
            }

            inputFile.close();
        }
        else
            cout << "Error, couldn't read file: " << filename;
    }
}