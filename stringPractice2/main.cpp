#include <iostream>
#include <vector>

using namespace std;

int main()
{
    //ask a user to keep entering strings (can include spaces)
    //stop when the user enters QUIT
    //display how many words (not including QUIT) were entered
    //for example: user enter "dog" "Cat" "QUIT" ---> 2
    //needs vector, look, if statements
    string s;
    vector<string>words;
    //words.push_back(s);
    //cout << words.size() << endl;
    cout << "Enter words, to stop type QUIT" << endl;
    while (s != "QUIT")
    {
        getline(cin, s);
        if(s == "QUIT")
        {

        }
        else
        {
            words.push_back(s);
        }
    }
    cout << words.size();


    return 0;
}
/*vector<string>words;
    string s;
    words.push_back(s);
*/
