#include<iostream>
using namespace std;
int main() {
	int noOfTests;
	cin >> noOfTests;
	for (int i = 1;i <= noOfTests;i++) {
		int n;
		cin >> n;
		int *arr;
		arr = new int[n * 2];
		for (int j = 0; j < n;j++) {
			arr[j] = 1 + (rand() % 1000000000);
		}
		for (int j = n;j < (n * 2);j++) {
			cin >> arr[j];
		}
		int sum = 0;
		for (int j = 0;j < (n * 2);j++) {
			sum += arr[j];
		}
		int half = sum / 2;
		for (int j = 0;j < (n * 2);j++) {
			if (arr[j] == half) {
				cout << arr[j];
			}
			else {
				for (int k = j + 1;k < (n * 2);k++) {
					if (arr[j] + arr[k] == half) {
						cout << arr[j] << " " << arr[k];
					}
					else {

					}
				}
			}
		}
	}
}