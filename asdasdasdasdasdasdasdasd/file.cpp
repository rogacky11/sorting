#pragma once
#include "file.h"

vector<FilmData> fileData(string fileName, int size) {
    vector <FilmData> data;
    std::fstream file(fileName);
    if (file.is_open()) {
        std::string line;

        for (int i = 0; i < size; i++) {
            getline(file, line);
            if (i != 0) {
                size_t commaFirst = line.find(',');
                size_t commaLast = line.find_last_of(',');

                string name = line.substr(commaFirst + 1, commaLast - commaFirst - 1);
                string filmRatingString = line.substr(commaLast + 1);
                if (filmRatingString != "") {
                    int rating = stoi(filmRatingString);
                    FilmData film(name, rating);
                    data.push_back(film);
                }
            }
        }

    }
    return data;
}



