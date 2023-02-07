#include <iostream>
using namespace std;

int main() {

	int n;
	cin >> n;

	// Outer loop
	int i, count = 1;
	while(i <= n) {

		// Inner loop
		int j = 1;
		while(j <= i) {
			cout << count << " ";
			count  = count + 1;
			j = j + 1;
		}
		cout << endl;
		i = i + 1;
	}
}
