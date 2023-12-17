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
    string name {};
    char classification {};
    bool flag {true};

    while (flag == true)
    {
        display_streaming_service_info(netflix);
        
        int opt {};
        cout << "\nSelect one option: \n1. Add a movie to your playlist.\n2. Watch a movie.\n3. Exit.\nYour selection: ";
        cin >> opt;

        switch(opt)
        {
            case 1 :
                cout << "Enter the name of the movie: ";
                cin.ignore(); getline(cin, name);
                cout << "Enter the classification of the movie (A,B,C): ";
                cin >> classification;
                add_movie_to_catalog(netflix, name, classification);
                break;
            case 2:
                cout << "\nEnter the name of the movie: ";
                cin.ignore(); getline(cin, name);
                play_movie(netflix, name);
                break;
            case 3:
                cout << "Bye.\n";
                flag = false;
                break;
            default:
                cout << "Invalid option\n";
                break;
        }
    }
    
    return 0;
}