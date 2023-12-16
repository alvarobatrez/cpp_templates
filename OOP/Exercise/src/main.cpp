#include <iostream>
#include "Streaming.hpp"

using namespace std;

void add_movie_to_catalog(Streaming &service, string name, char classification)
{
    service.add_to_catalog(name, classification);
}

void play_movie(Streaming &service, string name)
{
    service.play(name);
}

void display_streaming_service_info(Streaming &service)
{
    service.display_catalog_info();
}

int main()
{
    Streaming netflix;

    add_movie_to_catalog(netflix, "Mi Pobre Angelito", 'A');
    add_movie_to_catalog(netflix, "Y Donde Estan Las Rubias?", 'B');
    add_movie_to_catalog(netflix, "Titanic", 'B');
    add_movie_to_catalog(netflix, "Mi Pobre Angelito", 'A');

    play_movie(netflix, "Y Donde Estan Las Rubias?");
    play_movie(netflix, "Mi Pobre Angelito");
    play_movie(netflix, "Y Donde Estan Las Rubias?");
    play_movie(netflix, "Barbie");
    play_movie(netflix, "Y Donde Estan Las Rubias?");

    display_streaming_service_info(netflix);

    cout << "\n******************************\n";

    Streaming primevideo {netflix};

    display_streaming_service_info(primevideo);
    
    return 0;
}