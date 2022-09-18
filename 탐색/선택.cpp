#include <iostream>
using namespace std;
void sort(int* array, int n) {
	int temp;
	int i;
	int j;
	int minindex;
	for ( i = 0; i < n; i++) {
		minindex = i;
		for (j = i + 1; j < n; j++) {
			if (array[minindex] > array[j]) {

				minindex = j;
			}

		}
		temp = array[i];
		array[i] = array[minindex];
		array[minindex] = temp;


	}
}
int main() {
	int array[5] = { 3,2,1,7,9 };
	sort(array, 5);
	for (int i = 0; i < 5; i++) {
		cout << array[i] << " ";
	}
	return 0;
	
	
	
	
	
	
	
	
	
	
	}
















