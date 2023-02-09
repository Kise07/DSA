#include <iostream>
using namespace std;

int main() {

	int n;
	cin >> n;

	// Outer loop
	int i = 1;
	while(i <= n) {

		// Stars print
		// Stars Use formula: `n - i + 1`
		int stars = n - i + 1;

		// Stars while loop
		while(stars) {
			cout << "*" << " ";
			stars = stars - 1;
		}

		// Space while loop
		int j = 1;
		while(j <= i) {
			// Space print
			cout << "  ";
			j = j + 1;
		}
		cout << endl;
		i = i + 1;
	}
}			
