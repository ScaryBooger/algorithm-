#include <iostream>
using namespace std;
int number = 8;
int sorted[8];
void merge(int* a, int s, int mid, int e) {

	int i, j, k, z;
	i = s;
	j = mid + 1;
	k = s;

	while (i <= mid && j <= e) {

		if (a[i] <= a[j]) {

			sorted[k++] = a[i++];


		}
		else {
			sorted[k++] = a[j++];

		}

	}
	if (i > mid) {
		for (z = j; z <= e; z++) {
			sorted[k++] = a[z];

		}
	}
	else {
		for (z = i; z <= mid; z++) {
			sorted[k++] = a[z];

		}
	}
	for (z = s; z <= e; z++) {
		a[z] = sorted[z];

	}




}
void mergesort(int* a, int s, int e) {

	int mid;
	if (s < e) {
		mid = (s + e) / 2;
		mergesort(a, s, mid);
		mergesort(a, mid + 1, e);
		merge(a, s, mid, e);

	}




}
int main() {


	int a[8] = { 21, 10, 12, 20, 25, 13, 15, 22 };
	mergesort(a, 0, 7);
	for (int i = 0; i < 8; i++) {
		cout << a[i] << " ";
	}






}