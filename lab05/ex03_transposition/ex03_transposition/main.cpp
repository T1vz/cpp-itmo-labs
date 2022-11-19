#include <iostream>

using namespace std;

int search(int* arr, int elem, int n) {
    int ind = -1;

    for (int i = 0; i < n; i++) {
        if (arr[i] == elem) {
            ind = i;

            if (ind == 0) {
                break;
            }
            else {
                swap(arr[i], arr[i - 1]);
            }
        }
    }

    return ind;
}

int main()
{
    const int len = 10; // init array
    int arr[len];
    for (int i = 0; i < len; i++) //enter array data
    {
        cout << "arr[" << i << "]=";
        cin >> arr[i];
    }

    int n;
    cout << "Enter count of search iterations: ";
    cin >> n;
    for (int i = 0; i < n; i++) {
        int elem;
        cout << "Enter elemnt for search: ";
        cin >> elem;
        int ind = search(arr, elem, len);
        if (ind < 0) cout << elem << " isn't in array";
        else cout << "Element " << elem <<" has index " << ind << "\n";
    }

	return 0;
}