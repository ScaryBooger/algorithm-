#include <iostream>
using namespace std;
int partition(int* a, int start, int end) {
	int index = start;
	int i, temp;
	int pivot = a[end];
	for (int i = start; i < end; i++) {
		if (a[i] <= pivot) {
			temp = a[index];
			a[index] = a[i];
			a[i] = temp;
			index++;
		}
	}
	temp = a[end];
	a[end] = a[index];
	a[index] = temp;
	return index;
}
void quicsort(int* a, int start, int end) {
	int index;

	if (start < end)  {
		index = partition(a, start, end);
		quicsort(a, start, index - 1);
		quicsort(a, index+1, end);
	}
	else {
		return;
	}


}

int main(void) {

	int data[10] = { 5,6,2,3,4,1,10,11,12,18 };

	cout << "before" << endl;

	for (int i = 0; i < 10; i++) {
		cout << data[i] << " ";
	}
	cout << endl << "after" << endl;
	quicsort(data, 0, 9);
	for (int i = 0; i < 10; i++) {
		cout << data[i] << " ";
	}










}