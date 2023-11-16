#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main()
{
    // ***** FOR *****

    int sum_odds {0};
    
    for (int i = 1; i < 20; i += 2)
    {
        if (i % 2 != 0)
        {
            sum_odds = sum_odds + i;
        }
    }
    
    cout << "Sum odds = " << sum_odds << endl;

    // ***** ARRAYS *****

    int sum {0};
    int list[5] {1, 2, 3, 4, 5};
    
    for (int index {0}; index < 5; index++)
    {
        sum = sum + list[index];
    };

    cout << "\nSum = " << sum << endl << endl;

    // ***** VECTORS *****

    float avg_temp, sum_temp {0.0};
    vector <float> temperatures
        {
            11.3, 12.1, 14.3, 16.2, 16.6,
            15.7, 15.0, 14.8, 14.5, 13.6,
            12.1, 11.6
        };
    int n {0};
    
    for (unsigned int i {0}; i < temperatures.size(); i++)
    {
        sum_temp = sum_temp + temperatures.at(i);
        n++;
    }
    avg_temp = sum_temp / n;

    cout << "Average = " << avg_temp << endl << endl;

    // ***** RANGE-BASED FOR *****

    float std_temp;
    sum_temp = 0.0;
    
    for (auto t : temperatures)
    {
        sum_temp = sum_temp + pow((t - avg_temp), 2);
    }
    std_temp = sqrt(sum_temp / (temperatures.size()-1));

    cout << "Standard deviation = " << std_temp << endl << endl;

    // ***** NESTED LOOPS *****

    vector <int> nums {2,4,6,8};
    int sum_pair {0};
    
    for (size_t i {0}; i < nums.size(); i++)
    {
        for (size_t j {i+1}; j < nums.size(); j++)
        {
            sum_pair = sum_pair + nums.at(i) * nums.at(j);
        }
    }

    cout << "Pairs sum = " << sum_pair << endl;

    return 0;
}