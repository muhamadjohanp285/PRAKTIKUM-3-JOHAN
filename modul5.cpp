#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "\nMasukkan jumlah baris Segitiga Pascal: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        int nilai = 1;

        for (int s = 0; s < n - i; s++)
            cout << " ";

        for (int j = 0; j <= i; j++) {
            cout << nilai << " ";
            nilai = nilai * (i - j) / (j + 1); 
        }
        cout << endl;
    }

    return 0;
}
