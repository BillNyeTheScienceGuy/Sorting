#ifndef _SELECTION_H
#define _SELECTION_H

// Swaps minimum value to first position, then continues on through the remainder of the list
// Performs no more than 'n' swaps
void selectionSort(int a[], size_t n) {
	int m, t;

	for (int i = 0; i < n - 1; i++) {
		m = i;
		for (int j = i + 1; j < n; j++) {
			if (a[m] > a[j]) {
				m = j;
			}
		}
		if (m != i) {
			t = a[m];
			a[m] = a[i];
			a[i] = t;
		}
	}
}

#endif // _SELECTION_H
