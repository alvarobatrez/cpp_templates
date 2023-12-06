#ifndef _MOVIE_HPP_
#define _MOVIE_HPP_

#include <string>

class Movie
{
    private:

    std::string movie_name;
    char movie_classification;
    double movie_rating;
    unsigned int number_views;

    public:

    Movie(std::string name = "", char classification = ' ', double rating = 0.0, unsigned int views = 0);
    Movie(const Movie &source);
    ~Movie();

    std::string get_name();

    char get_classification();

    bool set_rating(double rating);
    double get_rating();

    void increase_views();
    unsigned int get_views();

    void display_info();

};


#endif