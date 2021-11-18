#include <iostream> 

using namespace std;

int main() {
	int n;
	int* arr;
	cin >> n;
	// Th?c hi?n c?p phát b? nh? d?ng cho m?ng
	int p[100];
	arr=p;
	// Nh?p d? li?u cho m?ng
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	// Tính t?ng các ph?n t? trong m?ng và luu vào bi?n sum
	int sum=0;
	for (int i = 0; i < n; i++) {
		sum+=arr[i];
	}
	cout << "Sum = " << sum;
	delete []arr;
	return 0;
}
