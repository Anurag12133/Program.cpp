#include <iostream>
#include <vector>
using namespace std;

bool issafe(int x, int y, int n, vector<vector<int>>& visited, vector<vector<int>>& m) {
    if ((x >= 0 && x < n) && (y >= 0 && y < n) && visited[x][y] == 0 && m[x][y] == 1) {
        return true;
    } else {
        return false;
    }
}

void solve(vector<vector<int>>& m, int n, int x, int y, vector<vector<int>>& visited, vector<string>& ans, string path) {
    if (x == n - 1 && y == n - 1) {
        ans.push_back(path);
        return;
    }
    visited[x][y] = 1;
    int newx, newy;

    // Move Down
    newx = x + 1;
    newy = y;
    if (issafe(newx, newy, n, visited, m)) {
        path.push_back('D');
        solve(m, n, newx, newy, visited, ans, path);
        path.pop_back();
    }

    // Move Up
    newx = x - 1;
    newy = y;
    if (issafe(newx, newy, n, visited, m)) {
        path.push_back('U');
        solve(m, n, newx, newy, visited, ans, path);
        path.pop_back();
    }

    // Move Left
    newx = x;
    newy = y - 1;
    if (issafe(newx, newy, n, visited, m)) {
        path.push_back('L');
        solve(m, n, newx, newy, visited, ans, path);
        path.pop_back();
    }

    // Move Right
    newx = x;
    newy = y + 1;
    if (issafe(newx, newy, n, visited, m)) {
        path.push_back('R');
        solve(m, n, newx, newy, visited, ans, path);
        path.pop_back();
    }

    visited[x][y] = 0;
}

vector<string> findPaths(vector<vector<int>>& m, int n) {
    vector<vector<int>> visited(n, vector<int>(n, 0));
    vector<string> ans;
    string path;
    solve(m, n, 0, 0, visited, ans, path);
    return ans;
}

int main() {
    // Example usage:
    vector<vector<int>> maze = {
        {1, 0, 0, 0},
        {1, 1, 0, 1},
        {0, 1, 0, 0},
        {1, 1, 1, 1}
    };
    int n = maze.size();

    vector<string> paths = findPaths(maze, n);

    if (paths.empty()) {
        cout << "No paths found in the maze." << endl;
    } else {
        cout << "Paths found in the maze:" << endl;
        for (const string& path : paths) {
            cout << path << endl;
        }
    }

    return 0;
}
