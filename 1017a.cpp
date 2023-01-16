    #include <iostream>
    #include <vector>
     
    void sort(std::vector<std::vector<int>> &num,int &k){
        for(int i = 0;i<num.size()-1;i+=1){
            for(int j = 0;j<num.size()-1;j+=1){
                std::vector<std::vector<int>> temp(1);
                if(num[j][0] < num[j+1][0]){
                    temp[0] = num[j];
                    num[j]=num[j+1];
                    num[j+1] = temp[0];
                } else if(num[j][0] == num[j+1][0]){
                    if(num[j][1] > num[j+1][1]){
                    temp[0] = num[j];
                    num[j]=num[j+1];
                    num[j+1] = temp[0];
                    }
                }
                if(num[j][1]==0){
                    k = j;
                } else if(num[j+1][1]==0){
                    k = j+1;
                }
            }
        }
    }
     
    int main(){
        int n = 0;
        int k = 0;
        std::cin >> n;
        std::vector<std::vector<int>> num(n);
        for (int i = 0;i < n;i += 1){
            int sum = 0;
            int a = 0;
            std::vector<int> student(2);
            for (int i=0;i<4;i+=1){
                std::cin >> a;
                sum+=a;
            } 
            student[0] = sum;
            student[1] = i;
            num[i] = student;
        }
        sort(num,k);
        std::cout << k+1;
    }
