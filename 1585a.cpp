#include <iostream>
#include <vector>
#include <string>


int main() {
	int t = 0;
	std::cin >> t;
	for (int i = 0; i < t; i += 1) {
		int dlina = 0;
		int n = 0;
		std::cin >> n;
		std::string a;
		int cnt = 0;
		for (int j = 0; j <= n; j += 1) {
			//while (j < n){
			std::cin >> a;
			if (a[j + 1] == a[j] == 1) {
				dlina += 5;
				if (j >= n) {
					break;
				}
				if (a[j + 1] != a[j] && a[j + 1] == 1) {
					dlina += 1;

				}
				else {
					dlina += 0;
				}
			}
			}

		std::cout << dlina;
		}
	}
	
