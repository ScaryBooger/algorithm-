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
		if (sum < m) {               //r�� ��ĭ �̵� �� �����ش�.

			sum += arr[++r];


		}
		else if (sum > m) {             // ������ ������ ���δ�. ���� ��ĭ �̵�

			sum -= arr[l++];
			;
			if (l > r) {
				r = l;
				sum = arr[l];


			}
		}
		else if (sum == m) {         //ī��Ʈ +1
			a++;

			sum += arr[++r];

		}


	}
	cout << a;
	return 0;

}