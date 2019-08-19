#include <iostream>

using namespace std;
const int NUM_MONKEYS = 3;
const int NUM_DAYS = 5;
int monkeyFood[NUM_MONKEYS][NUM_DAYS];

double averagePerDay(int mfood[NUM_MONKEYS][NUM_DAYS], int day){
int sum1 = 0, sum2 = 0, sum3 = 0, sum4 = 0, sum5 = 0;
        sum1 = mfood[0][0] + mfood[1][0] + mfood[2][0];
        double average1 = (double)sum1 / NUM_MONKEYS;
        return average1;

}

double leastPerWeekByAnyOneMonkey (int mfood[NUM_MONKEYS][NUM_DAYS]){
   int least1=0, least2=0,least3 = 0;
    for (int rows = 0; rows < 3; rows++)
	{
		for (int c = 0; c < 5; c++)
		{
			if (rows==0){
                least1+=mfood[rows][c];
			}
			else if(rows==1){
                least2+=mfood[rows][c];
			}
			else if(rows==2){
                least3+= mfood[rows][c];
			}

		}

	}
	if(least1<least2&&least1<least3){
        return least1;
	}
	else if(least2<least1&&least2<least3){
	return least2;
	}
	else{
        return least3;
	}
}

double greatestPerWeekByAnyOneMonkey(int mfood[NUM_MONKEYS][NUM_DAYS])
{
    int greatest1=0, greatest2=0,greatest3 = 0;
    for (int rows = 0; rows < 3; rows++)
	{
		for (int c = 0; c < 5; c++)
		{
			if (rows==0){
                greatest1+=mfood[rows][c];
			}
			else if(rows==1){
                greatest2+=mfood[rows][c];
			}
			else if(rows==2){
                greatest3 += mfood[rows][c];
			}

		}

	}
	if(greatest1>greatest2&&greatest1>greatest3){
        return greatest1;
	}
	else if(greatest2>greatest1&&greatest2>greatest3){
	return greatest2;
	}
	else{
        return greatest3;
	}
}

int main()
{
    for(int i = 0; i < NUM_MONKEYS; i++){
        cout << "Enter the information for monkey " << (i+1) << endl;
        for(int j = 0; j < NUM_DAYS; j++){
            cout << "Enter the information for day " << (j + 1) << endl;
            cin >> monkeyFood[i][j];
        }
    }
    cout << averagePerDay(monkeyFood, 0)<< endl;
    cout << leastPerWeekByAnyOneMonkey(monkeyFood) << endl;
    cout << greatestPerWeekByAnyOneMonkey(monkeyFood) << endl;


    return 0;
}
