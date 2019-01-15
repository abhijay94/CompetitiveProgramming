#include <bits/stdc++.h>
using namespace std;

//Classic example of recursion with backtracking
bool ratInMaze(char maze[10][10], int soln[][10], int i, int j, int m, int n) {
	//Base case - target reached
	if (i == m && j == n) {
		soln[m][n] = 1;

		//Print the soln path
		for (int i = 0; i <= m; ++i)	{
			for (int j = 0; j <= n; ++j)	{
				cout << soln[i][j] << " ";
			}
			cout << endl;
		}
		cout << endl;

		return true;
	}

	//Rat should be inside the grid
	if (i > m || j > n) {
		return false;
	}

	//If a cell is blocked return false
	if (maze[i][j] == 'X') {
		return false;
	}

	//Assume soln exists through current cell
	soln[i][j] = 1;

	//Check for right cell
	bool rightSuccess = ratInMaze(maze, soln, i, j + 1, m, n);

	//Check for down cell
	bool downSuccess = ratInMaze(maze, soln, i + 1, j, m, n);

	//Backtracking - Set all cells to 0 while returning
	soln[i][j] = 0;

	if (rightSuccess || downSuccess) {
		return true;
	}

	return false;
}

int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	char maze[10][10] = {
		"0000",
		"00X0",
		"000X",
		"0X00"
	};

	int soln [10][10] = {0};

	bool ans = ratInMaze(maze, soln, 0, 0, 3, 3);

	if (ans == false) {
		cout << "Path does not exist!" << endl;
	}


	return 0;
}