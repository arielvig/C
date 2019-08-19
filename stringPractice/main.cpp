#include <iostream>

using namespace std;

int main()
{
    //create an array of 5 strings
    //ask the user to enter 5 words (no spaces) into the array
    //loop the array and find the longest word entered
    //print out the longest word entered and its length
    const int SIZE = 5;
    string words[SIZE];
    cout << "Enter five words." << endl;
    for(int i = 0; i < SIZE; i++)
    {

        cin >> words[i];
    }

    int longestWord = words[0].length();
    string longestWordStr = words[0];
    for(int i = 0; i < SIZE; i++)
    {
        if(words[i].length() > longestWord)
        {
            longestWordStr = words[i];
            longestWord = words[i].length();
        }
    }
    cout << longestWordStr << " " << longestWord << endl;







    return 0;
}
//for(int i = 0; i <= SIZE; i++)
    //{

    //}
