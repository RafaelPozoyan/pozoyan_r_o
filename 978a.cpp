#include <iostream>
#include <vector>

int main() {
    int n = 0;
    std::cin >> n;
    std::vector <int> A(n);
    int cnt = 0;
    for (int i = 0; i < n; i++) {
        std::cin >> A[i];
    }
    for (int i = n - 1; i >= 0; i--) {
        for (int j = i - 1; j >= 0; j--) {
            if (A[i] == A[j]) {
                A[j] = 0;
            }
        }
    }
    for (int a : A) {
        if (a != 0) {
            cnt += 1;
        }
    }
    std::cout << cnt << '\n';
    for (int a : A) {
        if (a != 0) {
            std::cout << a << " ";
        }
    }
}
