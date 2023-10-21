#include <iostream>
#include <string>
#include <vector>
int main() {
	int answ = 0;
	int indx1 = 0;
	int indx2 = 0;
	std::string word;
	std::cin >> word;
	std::vector<char> alphabet{ 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
	for (int i = 0; i < word.size(); i++) {
		indx1 = 0;
		for (int j = 0; j < alphabet.size(); j++) {
			if (word[i] == alphabet[j]) {
				indx1 = j;
			}
		}
		if (alphabet.size() - std::abs(indx1 - indx2) <= std::abs(indx1 - indx2)) {
			answ += alphabet.size() - std::abs(indx1 - indx2);
		}
		else {
			answ += std::abs(indx1 - indx2);
		}
		indx2 = indx1;
	}
	std::cout << answ;
}
