#include <iostream>
using namespace std;

int main() {

	int n;
	cin >> n;

	// Outer loop
	int i = 1;
	while(i <= n) {
		// Space print
		// Use formula: `n - i` for spaces here!
		int space = n - i;

		// while loop for space
		while(space) {
		cout << "  ";
		space = space - 1;
		}

		// Star print
		int j = 1;
		while(j <= i) {
			// '*' print
			cout << '*' << " ";
			j = j + 1;
		}
		cout << endl;
		i = i + 1;
	}
}
