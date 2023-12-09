#ifndef _STREAMING_HPP_
#define _STREAMING_HPP_

#include <vector>
#include "Movie.hpp"

class Streaming
{
    private:

    std::vector <Movie> movies_catalog;

    public:

    Streaming(std::vector <Movie> catalog = {});
    Streaming(const Streaming &source);
    ~Streaming();

    int check_catalog(std::string);
    void add_to_catalog(std::string, char);
    void play(std::string);
    void display_catalog_info() const;
};

#endif