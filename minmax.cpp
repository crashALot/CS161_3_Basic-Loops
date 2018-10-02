/***********************************************
** Author:      Glenn Kiefer
** Date:        04/18/2018
** Description: This program will prompt the user 
**              to enter the max number if integers
**              being entered. The following
**              integers will be compared for max
**              and min values. Results will be
**              output to consol.
************************************************/
#include <iostream>

using std::endl;
using std::cout;
using std::cin;

int main()
{
    int count=0, intTotal;
    double userNum, minNum, maxNum;
    
    // Prompt user to enter number of integers for evaluation 
    cout << "How many integers would you like to enter?" << endl;
    cin >> intTotal;
    cout << "Please enter " << intTotal << " integers." << endl;
    // Compare each user input against the min and max values
    while (count<intTotal)
    {
        cin >> userNum;
        if (count==0)
        {
            minNum=userNum;
            maxNum=userNum;
        }
        else if (userNum<minNum)
        {
            minNum=userNum;
        }
        else if (userNum>maxNum)
        {
            maxNum=userNum;
        }
        count=count+1; 
    } 
    // Output min and max values to consol 
    cout << "min: " << minNum << endl;
    cout << "max: " << maxNum << endl;
    return 0;
}
