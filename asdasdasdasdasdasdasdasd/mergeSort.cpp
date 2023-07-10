#include "mergeSort.h"


void merge(vector<FilmData>& arr, int left, int mid, int right) {
    vector<FilmData> tmp;
    int l = left;
    int r = mid + 1;

    while (l <= mid && r <= right) {
        if (arr[l].filmRating <= arr[r].filmRating) {
            tmp.push_back(arr[l]);
            l++;

        }
        else {
            tmp.push_back(arr[r]);
            r++;
        }
    }

    while (l <= mid) {
        tmp.push_back(arr[l]);
        l++;

    }
    while (r <= right) {
        tmp.push_back(arr[r]);
            r++;
    }
    for (int i = left; i <= right; i++) {
        arr[i] = tmp[i - left];
    }
}


  /*  tmp.resize(arr.size());

    for (int i = left; i <= right; i++) {
        tmp[i] = arr[i].filmRating;
    }

    for (int j = left; j <= right; j++) {

        if (l <= mid) {
            if (r <= right) {
                if (tmp[l] < tmp[r]) {
                    arr[j].filmRating = tmp[l++];
                }
                else  arr[j].filmRating = tmp[r++];
            }
            else  arr[j].filmRating = tmp[l++];
        }
        else  arr[j].filmRating = tmp[r++];

    }


}*/


void mergeSort(vector<FilmData>& arr, int left, int right)
{

    if (left < right) {
        int mid = (right + left) / 2;

        mergeSort(arr, left, mid);
        mergeSort(arr, mid + 1, right);
        merge(arr, left, mid, right);
    }
    else return;
}

