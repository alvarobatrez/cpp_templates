#ifndef _STREAMINGSRV_HPP_
#define _STREAMINGSRV_HPP_

#include <vector>
#include "Movie.hpp"

class StreamingSrv
{
    private:

    vector <Movie> catalog {};

    public:

    StreamingSrv();
    StreamingSrv(const Movie &source);
    ~StreamingSrv();
};

#endif