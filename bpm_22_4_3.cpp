#include <iostream>
#include <string>

int main(){
    std::string w1, w2;
    std::cin >> w1 >> w2;
    int flag = 1;
    int cnt = 0;
    for(int i=std::max(w1.length(), w2.length()); i>=0; i--){
        if (w1[i] == w2[i]){
            flag = 1;
        }
        else{
            if (w1.length() != w2.length()) {
                cnt += 1;
            }
            else{
                cnt += 2;
            }
        }
    }
    std::cout << cnt;
}
