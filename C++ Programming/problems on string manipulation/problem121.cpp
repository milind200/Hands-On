/*
121. Accept string from user and check whether the string is palindrome or not without considering its case.
		
		Input :   “1abccBA1” 
		Output :   TRUE 
		
		Author : Milind Nalawade
	
		Date : 04/08/2021
	
		Language : C programming

*/

#include <iostream>
using namespace std;
 
// Logic
bool isPalindrome(string str)
{
    int low = 0;
    int high = str.length() - 1;
 
    while (low < high)
    {
        if (str[low] != str[high]) 
		{
            return false;
        }
 
        low++;
        high--;
    }
 
    return true;
}
 
int main(int argc,char* argv[])
{
    string str = argv[1];
 
    if (isPalindrome(str))
	{
        cout << "\n TRUE \n";
    }
    else
	{
        cout << "\n FALSE \n";
    }
 
    return 0;
}