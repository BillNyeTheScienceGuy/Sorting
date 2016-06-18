#ifndef _INSERTION_H
#define _INSERTION_H

// Inserts each unsorted element into the sorted elements before it
// Typically works better than quicksort for 8 to 20 elements
void insertionSort(int a[], size_t n) {
    int j, t;

    for (int i = 1; i < n; i++) {
		t = a[i];
		j = i - 1;
		while (j >= 0 && a[j] > t) {
			a[j + 1] = a[j];
			j--;
		}
		a[j + 1] = t;
    }
}

#endif // _INSERTION_H
