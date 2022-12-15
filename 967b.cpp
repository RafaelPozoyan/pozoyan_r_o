#include <iostream>
#include <vector>
#include <numeric>

int main() {
    int n = 0, A = 0, B = 0;
    std::cin >> n >> A >> B;
    std::vector <int> g;//размеры отверстий
    int fst = 0;//размер первого отверстия
    std::cin >> fst;
    int x = 0;
    for (int i = 1; i < n; i++){
    std::cin >> x;
    g.push_back(x);
    }
    int S = std::accumulate((g.begin()), g.end(), 0)+fst;//сумма размеров отверстий
    for(int i = 0; i< g.size()+1; i++) {
        if ((A * fst / S) >= B) {
            std::cout << 0;
        } else {
            std::sort(g.begin(), g.end());
            std::reverse(g.begin(), g.end());
            for(int j = 0; j < g.size(); j++){
                S -= g.at(j);
                if(fst * A / S >= B){
                    std::cout << j+1;
                    break;
                }
            }
        }
        break;
    }
}
