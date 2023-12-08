#ifndef _STREAMING_HPP_
#define _STREAMING_HPP_

#include <vector>
#include "Movie.hpp"

class Streaming
{
    private:

    std::vector <Movie> catalog {};

    public:

    Streaming();
    ~Streaming();

    int check_catalog(std::string);
    void add_to_catalog(std::string, char);
    void play(std::string);
    void display_catalog_info() const;
};

#endif