#include <iostream>
#include <string>
int main() {
	int n = 0;
	int count = 0;
	std::string word;
	std::cin >> n;
	std::cin >> word;
	for (int i = 0; i < n; i++) {
		if (word[i] == 'x' && word[i+1] == 'x' && word[i+2] == 'x') {
			count += 1;
		}
	}
	std::cout << count;
}
