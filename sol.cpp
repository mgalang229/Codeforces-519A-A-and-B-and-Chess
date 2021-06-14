#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	vector<vector<char>> a(8, vector<char>(8));
	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 8; j++) {
			cin >> a[i][j];
		}
	}
	// map the corresponding value of each chess piece (based on the problem statement)
	map<char, int> m;
	m['q'] = 9; m['r'] = 5; 
	m['b'] = 3; m['n'] = 3; 
	m['p'] = 1; m['k'] = 0;
	long long white = 0;
	long long black = 0;
	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 8; j++) {
			// check if the character is an uppercase or a lowercase letter
			if (a[i][j] >= 'A' && a[i][j] <= 'Z') {
				// if it's an uppercase then add it to 'white'
				white += m[tolower(a[i][j])];
			} else if (a[i][j] >= 'a' && a[i][j] <= 'z') {
				// otherwise, add it to 'black'
				black += m[a[i][j]];
			}
		}
	}
	if (white > black) {
		cout << "White";
	} else if (white < black) {
		cout << "Black";
	} else {
		cout << "Draw";
	}
	cout << '\n';
	return 0;
}
