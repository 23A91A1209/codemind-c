#include <stdio.h>
int main() {
	int n, i, j; 

	scanf("%d", &n);

	int arr[n];

	// read array elements

	for (i = 0; i < n; i++) {

		scanf("%d", &arr[i]);

	}

	// code for couting occurences of each element

	int flag = 0;

	for (i = 0; i < n; i++)

	{

		int occ = 0;

		int visited = 0;

		for (j = 0; j < n; j++) {

			if (j < i && arr[i] == arr[j]) {

				visited = 1;

				break;

			}

			if (arr[i] == arr[j]) occ++;

		}

		if (visited == 0 && arr[i] == occ) {

			printf("%d ", arr[i]);

			flag = 1;

		}

	}

	if (flag == 0) {

	    printf("-1");

	}

}