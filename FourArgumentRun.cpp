
#include "FourArgumentRun.h"


using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::ifstream;




void IVargumentRun(int argCee, string yksi, string kaksi, string kolme)
{
    ifstream inputFile;
    string filename;
    string search_w;
    string found_w;
    int found = 0;
    int unfound = 0;
    string line;
    int count = 1;
    bool printed = 0;
    int occurance = -2;
    int lineNumb = -2;
    int reverseSearch = -2;
    int ignoreCase = -2;
    filename = kolme;

    yksi.erase(0, 2); // removing "-o" from argv[2]


    try {
        inputFile.open(filename);
        if (inputFile) {
            inputFile.close();
        }
        else 
        {
            throw 404;
        }
    }
    catch (int F) 
    {
        cout << "\nFile not found, Error: " << F << ", seizing operations\n";
        return;
    }


    lineNumb = (yksi.find("l"));
    if (lineNumb != -1)
    {
        cout << "Line numbers ";
        lineNumb = 1;
    }

    occurance = (yksi.find("o"));
    if (occurance != -1)
    {
        cout << "Occurances ";
        occurance = 1;
    }

    reverseSearch = (yksi.find("r"));
    if (reverseSearch != -1)
    {
        cout << "Reverse search ";
        reverseSearch = 1;
    }

    ignoreCase = (yksi.find("i"));
    if (ignoreCase != -1)
    {
        ignoreCase = 1;
        cout << "Ignoring cases ";
    }
    cout << ":" << endl;

    //Tähän kohtaan argv[1] re-edit? Esimerkiksi -olodsandsani -> -oloi

    if (ignoreCase == 1)
        ignoreCaseRUN(kaksi, kolme, occurance, lineNumb, reverseSearch, ignoreCase);

    else
        normalCaseRUN(kaksi, kolme, occurance, lineNumb, reverseSearch, ignoreCase);

}




