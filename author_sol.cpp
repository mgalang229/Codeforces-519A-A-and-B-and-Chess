#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	vector<vector<char>> s(8, vector<char>(8));
	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 8; j++) {
			cin >> s[i][j];
		}
	}
	// use two vectors (or arrays) to map out the corresponding value of each chess piece
	vector<char> chess_piece = {'Q', 'R', 'B', 'N', 'P', 'K'};
	vector<int> weight = {9, 5, 3, 3, 1, 0};
	int white = 0;
	int black = 0;
	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 8; j++) {
			for (int k = 0; k < 8; k++) {
				// check if the current character matches a chess piece
				if (toupper(s[i][j]) == chess_piece[k]) {
					// check if the current character is an uppercase letter
					if (isupper(s[i][j])) {
						// if yes, then add it to 'white'
						white += weight[k];
					} else {
						// if no, then add it to 'black'
						black += weight[k];
					}
					// break the loop if match is found
					break;
				}
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
