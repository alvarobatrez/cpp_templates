#include <iostream>
#include "Streaming.hpp"

Streaming::Streaming() {}

Streaming::~Streaming() {}

int Streaming::check_catalog(std::string name)
{
    int i {};
    for (const Movie &movie : catalog)
    {
        if (movie.get_name() == name)
        {
            return i;
        }
        i++;
    }

    return -1;
}

void Streaming::add_to_catalog(std::string name, char classification)
{
    if (check_catalog(name) == -1)
    {
        Movie new_movie {name, classification};
        catalog.push_back(new_movie);
        std::cout << name << " added to the catalog" << "\n";
    }
    else
    {
        std::cout << name << " is already in the catalog" << "\n";
    }
}

void Streaming::play(std::string name)
{
    int index = check_catalog(name);
    if (index != -1)
    {
        std::cout << "Playing " << catalog.at(index).get_name() << "...\n";

        double rating {};
        std::cout << "Do you like the movie? Enter your movie rating from 0 to 5: ";
        std::cin >> rating;

        while (0.0 > rating || rating > 5.0)
        {
            std::cout << "Invalid number\n";
            std::cout << "Enter your movie rating from 0 to 5: ";
            std::cin >> rating;
        }

        catalog.at(index).set_rating(rating);
    }
    else
    {
        std::cout << name << " is not in the catalog" << std::endl;
    }
}

void Streaming::display_catalog_info() const
{
    for (const Movie &movie : catalog)
    {
        movie.display_info();
    }
}