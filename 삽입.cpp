#include <iostream>
using namespace std;
void insertionsort(int* arr, int n) {
	int j, i, key;

	for (i = 1; i < n; i++) {
		key = arr[i];
		for (j = i - 1; j >= 0 && arr[j] > key; j--) {
			arr[j + 1] = arr[j];
		}

		arr[j + 1] = key;
	}
}

int main() {
	int d[5] = {2,5,6,1,3 };
	insertionsort(d, 5);
	for (int i = 0; i < 5; i++) {
	
		cout << d[i] << " ";
	
	}
	return 0;




}