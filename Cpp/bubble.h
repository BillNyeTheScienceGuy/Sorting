#ifndef _BUBBLE_H
#define _BUBBLE_H

// Swaps two elements to sorted order, doing so for each pair down the list, making passes until sorted
// Performs very well for nearly-sorted lists
void bubbleSort(int a[], size_t n) {
	bool sorted = false;
	int t;

	for (int i = 0; i < n - 1; i++) {
		sorted = true;
		for (int j = 0; j < n - 1 - i; j++) {
			if (a[j] > a[j + 1]) {
				t = a[j];
				a[j] = a[j + 1];
				a[j + 1] = t;
				sorted = false;
			}
		}
		if (sorted) break;
	}
}

#endif // _BUBBLE_H
