#include "commandCenter.h"
#include <iostream>
#include <string>



using std::cout;
using std::endl;
using std::string;


void doingStuff()
{
	zeroArgumentRun();

}


void doingStuff(int argCee, string yksi, string kaksi, string kolme)
{
	cout << "\nCommand line arguments: \n";
	cout << "\"" << yksi << "\"" << ", \"" << kaksi << "\"" << ", \"" << kolme << "\"" << endl << endl;

	if (yksi[0] == '-' && yksi[1] == 'o')
		IVargumentRun(argCee, yksi, kaksi, kolme);
	else
		cout << "ERROR\nYou must specify the desired run option. \nFor example use \"-olo\" for Occurances and Line number. \nUse \"help\" or \"options\" commands to see the documentation" << endl;

}


void doingStuff(int argCee, string yksi)
{
	if (yksi == "help" || yksi == "HELP" || yksi == "h" || yksi == "-h")
	{
		printHelp();
	}
	else if (yksi == "options" || yksi == "o" || yksi == "-options")
		printOptions();
	else
		cout << "???\nInvalid command";

}



void doingStuff(int argCee, string yksi, string kaksi)
{
	cout << "Command line arguments: \n";
	cout << "\"" << yksi << "\"" << ", \"" << kaksi << "\"" << endl;
	basicRun(argCee, yksi, kaksi);


}

