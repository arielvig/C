#include <iostream>

using namespace std;

//dynamic memory
int *makeArray(int sizeArr)
{
    int *arrPtr = new int[sizeArr];
    for(int i = 0; i < sizeArr; i++)
    {
        arrPtr[i]= i * i; //make an array of the numbers squared
    }
    return arrPtr; // send the location of the array integers
}

int main()
{
    int num = 10;
    int *arr = makeArray(num);
    for(int counter = 0; counter < num; counter++)
    {
        cout << *(arr + counter) << endl;

    }
    double d = 2.5;
    double *dPtr = &d;
    *dPtr = 7.1;

    cout << d;



    //create a pointer to d
    //using the pointer you've created, change the value of d to 7.1


    return 0;
}
