#include <iostream>

using namespace std;

int recursiveMethod(int x)
{
    if(x == 0)
    {
        return 0;
    }
    return x + recursiveMethod(x-1);
}
int main()
{
    cout << recursiveMethod(3) << endl;
    return 0;
}
