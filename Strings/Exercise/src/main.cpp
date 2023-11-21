#include <iostream>

using namespace std;

// ***** LETTER PYRAMID *****

int main()
{
    string word {"abcd"};
    size_t len_word {word.length()};
    size_t len_row {len_word * 2 - 1};
    string row (len_row, ' ');
    size_t center {len_word - 1};

    int counter {0};
    for (size_t i {1}; i <= len_row; i+=2)
    {
        int pos = {0}, increment {1};
        for (int j {-counter}; j <= counter; j++)
        {
            row[center + j] = word[pos];
            if (pos == counter)
            {
                increment = -1;
            }
            pos += increment;
        }
        counter++;
        cout << row << endl;
    }

    return 0;
}