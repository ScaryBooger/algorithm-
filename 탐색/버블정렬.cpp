#include <iostream>
using namespace std;
void Bubble_Sort(int* array, int n) {
	int temp, j, i;
	for (i = 0; i < n ; i++) {
		for (j = 0; j < n - 1 - i; j++) {
			if (array[j] > array[j + 1]) {
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
			
			
			}
		
		}
	
	
	
	
	}











}

int main() {
	
	
	int array[5] = { 3,5,6,2,7 }; //{3,5,2,6} {}
	int n = sizeof(array) / sizeof(int);
	Bubble_Sort(array, n);
	for (int i = 0; i < 5; i++) {
		cout << array[i]<<" ";
	
	}










}
