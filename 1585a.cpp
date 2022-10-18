//#include <iostream>
//
//int main() {
//    int t = 0;
//    std::cin >> t;
//    for(int i = 0; i < t; i += 1){
//        int n = 0;
//        std::cin >> n;
//        int a = 0;
//        int previous = 9;
//        int high = 1;
//        for(int j = 0; j < n; j += 1) {
////            int previous = 9;
//            high = 1;
//            std::cin >> a;
//            if (n != 1) {
//                if (a == 0 && a == previous) {
//                    high = -1;
//                    break;
//                }
//                if (a == 1 && a != previous) {
//                    high += 1;
//                }
//                if (a == 1 && a == previous) {
//                    high += 5;
//                }
//                if (a == 0 && a != previous) {
//                    high += 0;
//                }
//                previous = a;
//                continue;
//            }
//            else{
//                if (a == '1'){
//                    high += 1;
//                }
//                else{
//                    high += 1;
//                }
//            }
//        }
//        std::cout << high << std::endl;
//    }
//}

#include <iostream>

int main() {
    int t = 0; //количество наборов входных данных
    std::cin >> t;
    int n = 0; //количество поливов
    for (int i = 0; i < t; i += 1){
        std::cin >> n;
        int high = 1; //высота цветка(ответ)
        int previous = 69; //предыдущий полив
        bool flag = false;
        for (int j = 0; j < n; j += 1){
            int a = 0; //полив
            std::cin >> a;
            if (a == 0 && a == previous) {
                flag = true;
            }
            if (a == 1 && a != previous) {
                high += 1;
            }
            if (a == 1 && a == previous) {
                high += 5;
            }
            previous = a;
        }
        if (flag == false) {
            std::cout << high << std::endl;
        }
        else{
            std::cout << -1 << std::endl;
        }
    }
}

