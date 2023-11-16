#include <iostream>
#include <vector>

using namespace std;

int main()
{
    // ***** VECTORS *****

    vector <char> vowels {'a', 'e', 'i', 'o', 'u'};
    vector <double> days_year (365, 0.0);
    vector <string> days {"Mon", "Tue", "Wed", "Thu", "Fri", "San"};
    vector <int> empty {};

    // cout << days_year[364];
    cout << days_year.at(364) << endl<< endl; // recommended

    cout << "Vector size = " << days.size() << endl << endl;

    // days[5] = "Sat";
    days.at(5) = "Sat"; // recommended

    days.push_back("Sun");

    cout << days.at(0) << endl;
    cout << days.at(1) << endl;
    cout << days.at(2) << endl;
    cout << days.at(3) << endl;
    cout << days.at(4) << endl;
    cout << days.at(5) << endl;
    cout << days.at(6) << endl << endl;

    vector <double> temps {11.3, 12.1, 14.3};
    double avg_temp;
    avg_temp = (temps.at(0) + temps.at(1) + temps.at(2)) / temps.size();
    cout << "Average temperature = " << avg_temp << endl << endl;

    // ***** MULTI-D VECTORS *****

    vector <vector <int>> ones (3, vector<int> (3, 1));

    vector <vector <int>> matrix
    {
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };

    cout << ones.at(2).at(2) << endl << endl;

    cout << matrix.at(0).at(0) << endl;
    cout << matrix.at(0).at(1) << endl;
    cout << matrix.at(0).at(2) << endl;
    cout << matrix.at(1).at(0) << endl;
    cout << matrix.at(1).at(1) << endl;
    cout << matrix.at(1).at(2) << endl;
    cout << matrix.at(2).at(0) << endl;
    cout << matrix.at(2).at(1) << endl;
    cout << matrix.at(2).at(2) << endl << endl;

    vector < vector <string>> names
    {
        {"Álvaro"},
        {"Berenice", "Carlos"},
        {"Daniela", "Eugenia", "Francisco"}
    };

    cout << names.at(2).at(1) << endl;

    return 0;
}