#include <iostream>
using namespace std;

int main() {

	int n;
	cin >> n;
	int count = 1;

	// Outer loop
	int i = 1;
	while(i <= n) {

		// Inner loop
		int j = 1;
		while(j <= n) {
			// print count here!
			cout << count << " ";
			count = count + 1;
			j = j + 1;
		}
		cout << endl;
		i = i + 1;
	}
}
