#include<iostream>
using namespace std;
int main() {
	int n;
	int t1 = 0;
	int t2 = 1;
	int next_term;
	cout << "Enter the number you want the series upto:\n";
	cin >> n;
	for (int i = 1; i < n; i++) {

		next_term = t1 + t2;
		if (next_term % 2 == 0) {
			cout << next_term << " ";
		}

		t1 = t2;
		t2 = next_term;
	}

}