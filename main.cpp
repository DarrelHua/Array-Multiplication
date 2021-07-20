#include <iostream>
#include <vector>
using namespace std;

void getVec(vector<vector<int>> &vec1, vector<vector<int>> &vec2,vector<vector<int>> &res, int x)
{

    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < x; j++)
        {
            vec1[i][j] = rand() % 100 + 1;
        }
    }
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < x; j++)
        {
            vec2[i][j] = rand() % 100 + 1;
        }
    }
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < x; j++)
        {
            res[i][j] = rand() % 100 + 1;
        }
    }
    
};

int main()
{
    int x = 0;

    cout << "Enter size of 2D Array: ";
    cin >> x;

    vector<int> init(x);

    vector<vector<int>> matrix1(x,init);

    vector<vector<int>> matrix2(x,init);

    vector<vector<int>> results(x,init);

    getVec(matrix1,matrix2,results,x);

    // for (int i = 0; i < x; i++)
    // {
    //     for (int j = 0; j < x; j++)
    //     {
    //         matrix1[i][j] = rand() % 10 + 1;
    //     }
    // }
    // for (int i = 0; i < x; i++)
    // {
    //     for (int j = 0; j < x; j++)
    //     {
    //         matrix2[i][j] = rand() % 10 + 1;
    //     }
    // }
    // for (int i = 0; i < x; i++)
    // {
    //     for (int j = 0; j < x; j++)
    //     {
    //         results[i][j] = 0;
    //     }
    // }

    for (int i = 0; i < matrix1.size(); i++)
    {
        for (int j = 0; j < matrix1[i].size(); j++)
        {
            results[i][j] = matrix1[i][j] * matrix2[i][j];
            cout << results[i][j] << " ";
        }
        cout << endl;
    }

    return -1;
};
