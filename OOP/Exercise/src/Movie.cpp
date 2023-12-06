#include <iostream>
#include <cmath>
#include "Movie.hpp"

Movie::Movie(std::string name, char classification, double rating, unsigned int views)
: movie_name {name}, movie_classification {classification}, movie_rating {rating}, number_views {views} {}

Movie::Movie(const Movie &source)
: Movie {source.movie_name, source.movie_classification, source.movie_rating, source.number_views} {}

Movie::~Movie() {}

std::string Movie::get_name() { return movie_name; }

char Movie::get_classification() { return movie_classification; }

bool Movie::set_rating(double rating)
{
    Movie::increase_views();
    movie_rating = movie_rating + 1.0 / number_views * (rating - movie_rating);

    return true;
}

double Movie::get_rating() { return round(movie_rating * 10.0) / 10.0; }

void Movie::increase_views() { number_views++; }

unsigned int Movie::get_views() {return number_views; }

void Movie::display_info()
{
    std::cout << "Name: " << Movie::get_name() << ", Classification: " << Movie::get_classification()
    << ", Rating: " << Movie::get_rating() << ", Views: " << Movie::get_views() << std::endl;
}