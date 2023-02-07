#include <iostream>
using namespace std;

int main() {

	int n;
	cin >> n;

	// Outer loop
	int i = 1;
	while(i <= n) {

		// Inner loop
		int j = 1;
		while(j <= n) {
			// Use formula: `'A' + i - 1`
			char ch = 'A' + i - 1;
			cout << ch << " ";
			j = j + 1;
		}
		cout << endl;
		i = i + 1;
	}
} 
