#include <iostream>
#include "Movie.hpp"

using namespace std;

int main()
{
    Movie m1 {"Mi Pobre Angelito", 'A'};

    m1.set_rating(4.0);
    m1.set_rating(5.0);

    Movie m2 {"Bastardos Sin Gloria", 'C'};

    m2.set_rating(5.0);
    m2.set_rating(3.5);
    m2.set_rating(1.0);

    m1.display_info();
    m2.display_info();
    
    return 0;
}