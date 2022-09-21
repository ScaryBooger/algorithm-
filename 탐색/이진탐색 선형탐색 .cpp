#include <iostream>       //linary search
#include <algorithm>
using namespace std;
int lineSearch(int *arr,int n,int x) {     //배열 ,배열의 길이 , 찾고싶은 수

	int i;
	for (i = 0; i < n; i++) {
		if (arr[i]==x) {
			return i;
		}
		
	}
	return -1;
}
//binarysearch
int binarysearch(int* arr, int n, int x) { //배열 ,배열의 길이 , 찾고싶은 수

	//initialization
	int L = 0;    //왼쪽
	int R = n-1;    //오른쪽(가장끝 배열)
	int i;
	int mid;
	while (L <= R) {
		mid = L + (R - L) / 2;                 //mid = L + R / 2;   같은뜻  오버플로우 때문에 안 씀
		if (x == arr[mid]) {
			return mid;		
		}
		else if (x < arr[mid]) {              //중간보다 작을 경우
			R = mid-1;		
		} 
		else  {              //중간보다 클 경우
			L = mid + 1;
		}
	}
	return -1;
}
int main() {
	
	int arr[10] = { 1,3,4,5,6,7,8,2,4,5 };
	int n = sizeof(arr) / sizeof(int);
	sort(arr, arr + n);             //binarysearch 사용시 정렬하고 사용해야한다.
	cout << "lineSearch" <<" "<< lineSearch(arr, n, 2) << endl;
	cout << "binarysearch" << " " << binarysearch(arr, n, 2) << endl;  














}