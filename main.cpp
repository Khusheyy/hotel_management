#include <iostream>
using namespace std;

int main() {
    int limit;

    cout << "Enter the limit: ";
    cin >> limit;

    cout << "Odd numbers up to " << limit << " are:" << endl;
    for (int i = 1; i <= limit; i += 2) {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}