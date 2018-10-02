/***********************************************
** Developer:   Glenn Kiefer
** Date:        04/18/2018
** Description: This program will prompt the user
**              to enter a name as reference for 
**              file input. The program will then
**              add the values in said file and
**              output results to sum.txt.
************************************************/

#include <iostream>
#include <fstream>
#include <string>

using std::endl;
using std::cout;
using std::cin;
using std::ifstream;
using std::ofstream;
using std::string;

int main()
{   
  ifstream inputFile;
  ofstream outputFile;
  double total, runTotal;
  string fileName;

    cout << "Please enter your filename." << endl;
    cin >> fileName;
    inputFile.open(fileName);
    // This loop will verify if a file is present for input
    if(inputFile)
    {
        while (inputFile>>runTotal)
            {
                total += runTotal;
            }
            inputFile.close();
    
            outputFile.open("sum.txt");
            outputFile << total << endl;
            outputFile.close();
	    cout << "result written to sum.txt" << endl;
    }
     else
     {
         cout << "could not access file" << endl;
     }
    return 0;
}
