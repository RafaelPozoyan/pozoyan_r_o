#include <iostream>
#include <string>
#include <vector>

#define f(a1,a2,a3) for(int a1 = a3; a1<a2; a1++)

int main() {
    int t = 0;
    std::cin >> t;
    f(i1, t, 0){
        int n = 0;
        std::string password;
        int k = 0;
        std::cin >> n >> password >> k;
        std::vector<char> keys(k);
        f(i2, k, 0) {
            std::cin >> keys[i2];
        }
        int flag = 1;
        int cnt = 0;
        while (flag != 0) {
            flag = 0;
            f(i3, password.length(), 1) {
                f(i4, k, 0) {
                    if (password[i3] == keys[i4]) {
                        password.erase(i3 - 1, 1);
                        flag = 1;
                        i3 -= 1;
                    }
                }
            }
            if (flag != 0) {
                cnt += 1;
            }
        }
        std::cout << cnt << std::endl;
    }
}
