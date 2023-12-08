#include <iostream>
#include <cmath>
#include "Movie.hpp"

Movie::Movie(std::string name, char classification, double rating, unsigned int views)
: movie_name {name}, movie_classification {classification}, movie_rating {rating}, number_views {views} {}

Movie::~Movie() {}

std::string Movie::get_name() const { return movie_name; }

char Movie::get_classification() const { return movie_classification; }

void Movie::set_rating(double rating)
{
    increase_views();
    movie_rating = movie_rating + 1.0 / number_views * (rating - movie_rating);
}

double Movie::get_rating() const { return round(movie_rating * 10) / 10.0; }

void Movie::increase_views()
{
    number_views++;
}

unsigned int Movie::get_views() const { return number_views; }

void Movie::display_info() const
{
    std::cout << "\nName: " << get_name() << "\nClassification: " << get_classification() << 
    "\nRating: " << get_rating() << "\nViews: " << get_views() << "\n";
}