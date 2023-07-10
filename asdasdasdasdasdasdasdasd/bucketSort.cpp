#include "bucketSort.h"
#include "FilmData.h"
#include <algorithm>
#include <iostream>

void bucketSort(vector<FilmData>& arr) {
	int max = arr[0].filmRating;
	int min = arr[0].filmRating;
	
	

	for (int i = 1; i < arr.size(); i++) {
		if (arr[i].filmRating < min) {
			min = arr[i].filmRating;
		}
		else if (arr[i].filmRating > max) {
			max = arr[i].filmRating;
		}
	}

	int length = max - min + 1;
	vector<FilmData> *buckets = new vector<FilmData>[length];
	for (int i = 0; i < length; i++) {
		buckets[i] = vector<FilmData>();
	}
	for (int i = 0; i < arr.size(); i++) {
		buckets[arr[i].filmRating - min].push_back(arr[i]);
	}
	int k = 0;
	for (int i = 0; i < length; i++) {
		int tmp = buckets[i].size();
		if (tmp > 0) {
			for (int j = 0; j < tmp; j++) {
				arr[k] = buckets[i][j];
				k++;
			}
		}
	}

}




