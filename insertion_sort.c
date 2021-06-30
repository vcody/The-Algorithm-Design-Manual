#include <stdio.h>

void swap(char *x, char *y) {
	char temp = *y;
	*y = *x;
	*x = temp;
}

void insertionSort(char s[], int n) {
	int j;
	for (int i = 1; i < n; i++) {
		j=i;
		while ((j > 0) && (s[j] < s[j-1])) {
			swap(&s[j], &s[j-1]);
			j = j - 1;
		}
	}

	for (int i = 0; i < n; i++) 
		printf("%d\n", s[i]);
}

int main(int argc, char *argv[]) {
	char s[] = {10, 2, 1, 5, 15, 6, 4};

	puts("BEFORE:");
	for (int i = 0; i < 7; i++) 
		printf("%d\n", s[i]);

	puts("AFTER:");
	insertionSort(s, 7);	


}
