#include <iostream>
#include <vector>
using namespace std;

int calculateRevenue(int n, int m, vector<vector<int>>& prices, vector<vector<int>>& soldTickets) {
    int totalRevenue = 0;

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            if (soldTickets[i][j] == 1) {
                totalRevenue += prices[i][j];
            }
        }
    }

    return totalRevenue;
}

int main() {
    int n, m;
    cin >> n >> m;
    vector<vector<int>> prices(n, vector<int>(m));
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cin >> prices[i][j];
        }
    }
    vector<vector<int>> soldTickets(n, vector<int>(m));
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cin >> soldTickets[i][j];
        }
    }
    int totalRevenue = calculateRevenue(n, m, prices, soldTickets);
    cout << totalRevenue << endl;

    return 0;
}