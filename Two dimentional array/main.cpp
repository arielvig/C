#include <iostream>

using namespace std;

int main()
{
    //2 dimensional array
    //whole numbers
    //int x[3];
    //x[0] = 1;
    //x[1] = 50;
    //x[2] = 100;
    //above it's single dimensional array
    const int NUMCITIES = 4;
    string cities[] = {"Dallas", "Miami", "Seattle" , "New York City"};
    const int NUMDAYS = 3;
    int weather[NUMCITIES][NUMDAYS];
    for(int i = 0; i < NUMCITIES; i++)
    {
        for(int j = 0; j < NUMDAYS; j++)
        {
            cout << "Enter the high temperature for " << cities[i] << " on day " << (j+1) << endl;
            cin >> weather[i][j];
        }
    }
    //find the highest temperature for any city of any day
    int highest = weather[0][0];
    for(int i = 0; i < NUMCITIES; i++)
    {
        for(int j = 0; j < NUMDAYS; j++)
        {
            if(weather[i][j] > highest)
            {
                highest = weather[i][j];
            }
        }
    }
    //which city had the highest average for the three days?
    double average = weather[0][0] + weather[0][1] + weather [0][2];
    string hottestCity = cities[0];
    double hottestAve = average / 3.0;
    for(int i = 1; i < NUMCITIES; i++)
    {
        average = (weather[i][0] + weather [i][1] + weather [i][2]) / 3.0;
        if(average > hottest)
        {
            hottestAve = average;
            hottestCity = cities[i];
        }
    }
    cout << "The hottest city was " << hottestCity << " at " << hottestAve << " degrees." << endl;
    cout << highest << " was the highest temperature." << endl;
    return 0;
}
