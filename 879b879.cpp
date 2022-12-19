    #include <iostream>
    #include <vector>
     
    int main(){
        int n = 0;
        long long k = 0;
        long long m = 0;
        std::cin >> n >> k;
        std::vector<int> S(n);
        for (int i = 0;i < n;i += 1){
            std::cin >> S[i];
        }
        if (k>=n){
            std::sort(S.begin(),S.end());
            std::cout << S[n-1];
            return 0;
        }
        while (m<k){
            if (S[0] > S[1]){
                S.push_back(S[1]);
                S.erase(S.begin()+1);
                m+=1;
            } else {
                S.push_back(S[0]);
                S.erase(S.begin());
                m = 1;
            }
        }
        std::cout << S[0];
    }
