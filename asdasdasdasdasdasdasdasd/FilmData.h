#pragma once
#include <vector>
#include <string>


using namespace std;

struct FilmData {

    FilmData(string filmName, int filmRating) {
        this->filmName = filmName;
        this->filmRating = filmRating;
    }
    string filmName;
    int filmRating;


};