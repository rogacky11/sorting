#include <iostream>
#include <chrono>
#include "bucketSort.h"
#include "mergeSort.h"
#include "quickSort.h"
#include "statistick.h"
#include "FilmData.h"
#include "file.h"

using namespace std;

   
    int main()
    {
        vector<FilmData> filmData = fileData("C:\\Users\\Michał\\source\\repos\\asdasdasdasdasdasdasdasd\\projekt2_dane.csv", 100001);
        auto start = chrono::steady_clock::now();

        mergeSort(filmData, 0, filmData.size() - 1);
        //bucketSort(filmData);

        auto end = chrono::steady_clock::now();
        auto time = chrono::duration_cast<chrono::milliseconds>(end-start).count();

        //for (int i = 0; i <= filmData.size()-1; i++) {
         //  cout << i<<". "<<filmData[i].filmName << " ; " << filmData[i].filmRating << endl;
        //}
        //cout << endl;
        cout << "Execution time: " << time << " miliseconds" << endl;
        cout << "Average rating: " << average(filmData) << endl;
        cout << "Median: " << median(filmData) << endl;

        
        return 0;
    }
