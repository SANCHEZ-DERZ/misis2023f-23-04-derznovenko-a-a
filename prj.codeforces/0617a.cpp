#include <iostream>
int main() {
	int x = 0;
	int count = 0;
	std::cin >> x;
	while (x > 0) {
	    if (x == 5) {
	        count +=1;
	        break;
	    }
		if (x > 5) {
			x = x - 5;
			count += 1;
		}
		if (x < 5) {
			count += 1;
			x = 0;
		}
	}
std::cout << count;
 
	
 
	
 
}
