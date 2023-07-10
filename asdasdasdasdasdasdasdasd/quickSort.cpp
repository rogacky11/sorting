
#include "quickSort.h"


void quickSort(vector<FilmData>& arr, int left, int right) {
    int l = left;
    int r = right;
    int pivot = arr[(right + left) / 2].filmRating;


    do  {

        while (arr[l].filmRating < pivot) {
            l++;
        }

        while (arr[r].filmRating > pivot) {
            r--;
        }
        if (l <= r) {
            swap(arr[l], arr[r]);
            l++;
            r--;
        }


    } while (l <= r);

    if (left < r) quickSort(arr, left, r);
    if (right > l) quickSort(arr, l, right);

}