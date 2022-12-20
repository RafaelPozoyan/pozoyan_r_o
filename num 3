#include <iostream>
#include <string>

int main() {
	int cnt = 0;
	std::string w1 = "westy";
	std::string w2 = "test";
	if (w1.length() == w2.length()) {
		int flag = 1;
        while (flag == 1) {
		for (int i = 0; i < w1.length(); i += 1) {
				if (w1[i] == w2[i]) {
					flag = 1;
				}
				else {
					cnt += 2;
					flag = 0;
				}
                flag = 0;
			}
        std::cout << cnt;
		}
	}
    //слова разной длины не работают
    else {
        int flag = 1;
        while (flag == 1) {
            for (int i = 0; i < std::max(w1.length(), w2.length()); i += 1) {
                for (int j = 0; j < std::min(w2.length(), w2.length()); j += 1) {
                    if (w1[j] == w2[j]) {
                        flag = 1;
                        break;
                    } else {
                        flag = 0;
                        cnt += 1;
                    }
                }
                if(flag == 0){
                    cnt += 1;
                }
                flag = 0;
            }
            std::cout << cnt << '\n';
        }
    }

    //слова разной длины не работают
}
