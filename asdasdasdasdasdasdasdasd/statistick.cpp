#include "statistick.h"
#include "FilmData.h"

using namespace std;

double average(vector<FilmData>& data) {
	double sum = 0;
	for (int i = 0; i < data.size(); i++) {
		sum += data[i].filmRating;
	}

	return sum / data.size();
}

double median(vector<FilmData>& data) {
	double median;
	if (data.size() % 2 == 1) {
		median = data[data.size() / 2].filmRating;
		return median;
	}
	else if (data.size() % 2 == 0) {
		median = ((data[(data.size() / 2) - 1].filmRating + data[(data.size() / 2)].filmRating)) / 2;
		return median;
	}
}