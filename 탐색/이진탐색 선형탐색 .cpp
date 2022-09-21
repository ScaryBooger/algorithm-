#include <iostream>       //linary search
#include <algorithm>
using namespace std;
int lineSearch(int *arr,int n,int x) {     //�迭 ,�迭�� ���� , ã����� ��

	int i;
	for (i = 0; i < n; i++) {
		if (arr[i]==x) {
			return i;
		}
		
	}
	return -1;
}
//binarysearch
int binarysearch(int* arr, int n, int x) { //�迭 ,�迭�� ���� , ã����� ��

	//initialization
	int L = 0;    //����
	int R = n-1;    //������(���峡 �迭)
	int i;
	int mid;
	while (L <= R) {
		mid = L + (R - L) / 2;                 //mid = L + R / 2;   ������  �����÷ο� ������ �� ��
		if (x == arr[mid]) {
			return mid;		
		}
		else if (x < arr[mid]) {              //�߰����� ���� ���
			R = mid-1;		
		} 
		else  {              //�߰����� Ŭ ���
			L = mid + 1;
		}
	}
	return -1;
}
int main() {
	
	int arr[10] = { 1,3,4,5,6,7,8,2,4,5 };
	int n = sizeof(arr) / sizeof(int);
	sort(arr, arr + n);             //binarysearch ���� �����ϰ� ����ؾ��Ѵ�.
	cout << "lineSearch" <<" "<< lineSearch(arr, n, 2) << endl;
	cout << "binarysearch" << " " << binarysearch(arr, n, 2) << endl;  














}