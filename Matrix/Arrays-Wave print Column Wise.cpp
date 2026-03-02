#include<bits/stdc++.h>
using namespace std;
int main() {
	int n, m;
    cin >> n >> m;
    vector<vector<int>> matrix(n, vector<int>(m));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> matrix[i][j];
        }
    }
	int left=0,top=0;
	int bottom=n-1;

	for(int col = 0; col < m; col++) {
        if(col % 2 == 0) {
            for(int row = 0; row < n; row++){
                cout << matrix[row][col] << ", ";
			}
        } else {
            for(int row = n - 1; row >= 0; row--){
                cout << matrix[row][col] << ", ";
			}
        }
    }
	cout<< "END";
}