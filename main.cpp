#include <iostream>
#include <vector>
using namespace std;

int main() {

    vector<vector<int>> matrix1 {
        {1,2,3,4,5},{1,2,3,4,5},{1,2,3,4,5},{1,2,3,4,5},{1,2,3,4,5}
    };

    vector<vector<int>> matrix2 {
        {1,2,3,4,5},{1,2,3,4,5},{1,2,3,4,5},{1,2,3,4,5},{1,2,3,4,5}
    };

    vector<vector<int>> results;

    for (int x =0; x < matrix1.size(); x++) {
        for (int y = 0; y < matrix1[x].size(); y++) {
            results[x][y] = matrix1[x][y] * matrix2[x][y];
            cout << results[x][y] << endl;
        }
    }
    return -1;
}