#include <iostream>

using namespace std;

int* max_vect(int n, int a[], int b[])
{
	int* arr = new int[n];
	for (int i = 0; i < n; i++) {
		if (a[i] > b[i]) {
			arr[i] = a[i];
		} 
		else {
			arr[i] = b[i];
		}
	}
	return arr;
}

int main()
{
	int a[] = { 1,2,3,4,5,6,7,2 };
	int b[] = { 7,6,5,4,3,2,1,3 };
	int kc = sizeof(a) / sizeof(a[0]); // Length of array
	int* c; // pointer to array
	c = max_vect(kc, a, b);
	for (int i = 0;i < kc; i++)
		cout << c[i] << " ";
	cout << endl;
	delete[]c; // Memory clean
	return 0;
}