#include <iostream>

using namespace std;

void swap(int *x, int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

int main()
{
    int num1 = 2, num2 = -3;
    swap(&num1, &num2);
    cout << num1 << " " << num2 << endl;
    return 0;
}
