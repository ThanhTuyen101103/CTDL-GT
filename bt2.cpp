#include <iostream>
using namespace std;

int linearSearch(int arr[], int n, int x) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == x)
            return i;
    }
    return -1;
}

int main() {
    int arr[] = { 64, 25, 12, 22, 11 };
    int n = sizeof(arr) / sizeof(arr[0]);
    int x = 22;
    int result = linearSearch(arr, n, x);
    if (result == -1)
        cout << "Không tìm thấy giá trị " << x << " trong mảng." << endl;
    else
        cout << "Giá trị " << x << " được tìm thấy tại vị trí " << result << " trong mảng." << endl;
    return 0;
}
