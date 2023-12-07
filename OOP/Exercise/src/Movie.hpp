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
    ~Movie();

    std::string get_name() const;

    char get_classification() const;

    bool set_rating(double rating);
    double get_rating() const;

    void increase_views();
    unsigned int get_views() const;

    void display_info() const;

};


#endif