#include <iostream>
using namespace std;

int main() {

	int n;
	cin >> n;

	// Outer loop
	int i = 1;
	while(i <= n) {

		// Inner loop
		int j = n, space = 1;

		// Space print
		while(space <= i - 1) {

			cout << "  ";
			space = space + 1;
		}

		// Stars print
		while(j >= i) {

			cout << i << " ";
			j = j - 1;
		}
		cout << endl;
		i = i + 1;
	}
}
