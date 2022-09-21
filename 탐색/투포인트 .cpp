#include <iostream>
#define MAX 10001
#define INF 987654321
using namespace std;
int arr[MAX];
int main(int argc, const char* argv[]) {
	int n, m;
	int l, r, sum ;
	
	int a = 0;
	
	cin >> n >> m;

	for (int i = 0; i < n; i++) {
		cin >> arr[i];

	}
	l = 0;
	r = 0;
	sum = arr[l];


	while (l < n && r < n) {               
		if (sum < m) {               //r을 한칸 이동 후 더해준다.

			sum += arr[++r];


		}
		else if (sum > m) {             // 수열의 범위를 줄인다. ㅣ을 한칸 이동

			sum -= arr[l++];
			;
			if (l > r) {
				r = l;
				sum = arr[l];


			}
		}
		else if (sum == m) {         //카운트 +1
			a++;

			sum += arr[++r];

		}


	}
	cout << a;
	return 0;

}
