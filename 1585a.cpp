#include <iostream>

int main() {
    int t = 0; //количество наборов входных данных
    std::cin >> t;
    int n = 0; //количество поливов
    for (int i = 0; i < t; i += 1){
        std::cin >> n;
        int high = 1; //высота цветка(ответ)
        int previous = 69; //предыдущий полив
        for (int j = 0; j < n; j += 1){
            int a = 0; //полив
            std::cin >> a;
            if (a == 0 && a == previous) {
                high = -2;
                break;
            }
            if (a == 1 && a != previous) {
                high += 1;
            }
            if (a == 1 && a == previous) {
                high += 5;
            }
            else{
                high += 0;
            }
            previous = a;
        }
        std::cout << high << std::endl;
    }
}

