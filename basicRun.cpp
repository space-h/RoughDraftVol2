#include <iostream>
#include <fstream>
#include "basicRun.h"

using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::ifstream;




void zeroArgumentRun()
{

    string sen, sub;
    int position;
    cout << "You have entered no command line arguments\n";


    cout << "\nEnter the Sentence" << endl;
    getline(cin, sen);

    cout << "Enter string to find" << endl;
    cin >> sub;

    position = (sen.find(sub));
    if (position == -1)
        cout << "Not found";
    else
        cout << "Found in position " << position;

    cout << "\n\nThis is the most basic operation of the Grep -tool\n";
    cout << "To see the documentation, run the program again. \nInput \"help\" or \"options\" ";
    cout << "on the command line when running this program.\n\n";
}



void basicRun(int argCee, string yksi, string kaksi)
{
    ifstream inputFile;
    string filename;
    string search_w;
    string found_w;
    bool found = 0;
    string line;

    bool printed = 0;


    if (argCee > 1)
    {

        search_w = yksi;
        filename = kaksi;

        inputFile.open(filename);
        if (inputFile)
        {
            while (getline(inputFile, line))
            {

                if (line.find(search_w) != -1)
                {
                    if (printed == 0)
                    {
                        cout << "\nStrinG \"" << search_w << "\" found on the lines:\n";
                        printed = 1;
                    }
                    cout << line << endl;

                    found = 1;

                }


            }

            if (found == 0)
            {
                cout << "Word \"" << search_w << "\" not found in file: " << filename;
            }

            inputFile.close();
        }
        else
            cout << "Error, couldn't read file: " << filename;
    }
}