#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    if (n <= 0) return 0;

    int a = 0, b = 1, c;
    
    if (n == 1) {
        cout << a;
        return 0;
    }
    
    cout << a << " " << b;

    for (int i = 2; i < n; i++) {
        c = a + b;
        cout << " " << c;
        a = b;
        b = c;
    }

    return 0;
}
