#include<iostream>
using namespace std;
int main() {
    int n, q;
    cin >> n >> q;

    int** arr = new int* [n];

    for (int i = 0; i < n; i++) {
        int k;
        cin >> k;

        arr[i] = new int[k];

        for (int j = 0; j < k; j++) {
            cin >> arr[i][j];
        }
    }

    while (q--) {
        int i, j;
        cin >> i >> j;

        cout << arr[i][j] << endl;
    }

    for (int i = 0; i < n; i++) {
        delete[] arr[i];
    }
    delete[] arr;

    return 0;
}