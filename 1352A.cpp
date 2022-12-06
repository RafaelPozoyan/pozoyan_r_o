    #include <iostream>
    #include <string>
    #include <vector>
    #include <cmath>
     
    int main() {
        int t = 0;
        std::cin >> t;
        for (int i = 0; i < t; i++) {
            int cnt = 0;
            std::string V;
            std::cin >> V;
            std::vector<int> ANS;
            for (int j = 0; j < V.length(); j++) {
                if (V[j] != '0') {
                    int a = V[j] - '0';
                    cnt += 1;
                    ANS.push_back(a * pow(10, V.length() - j-1));
                }
            }
            std::cout << cnt << std::endl;
            for(int i = 0; i < ANS.size(); i++){
                std::cout << ANS[i] << " ";
            }
        }
    }
