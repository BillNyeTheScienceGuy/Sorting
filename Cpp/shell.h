#ifndef _SHELL_H
#define _SHELL_H

void shellSort(int a[], size_t n) {
	int gap[] = {701, 301, 132, 57, 23, 10, 4, 1};
    int j, t;

    for (int g = 0; g < 8; g++) {
		for (int i = gap[g]; i < n; i += gap[g]) {
			t = a[i];
			j = i - gap[g];
			while (j >= 0 && a[j] > t) {
				a[j + gap[g]] = a[j];
				j -= gap[g];
			}
			a[j + gap[g]] = t;
		}
    }
}
#endif // _SHELL_H
