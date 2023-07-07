#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        char mat[3][3];
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                cin >> mat[i][j];
            }
        }
        int t = 0;
        for (int i = 0; i < 3; i++)
        {
            if ((mat[i][0] == mat[i][1]) && (mat[i][1] == mat[i][2]) && mat[i][0] != '.')
            {
                cout << mat[i][0] << endl;
                t = 1;
                break;
            }
            else if ((mat[0][i] == mat[1][i]) && (mat[1][i] == mat[2][i]) && mat[0][i] != '.')
            {
                cout << mat[0][i] << endl;
                t = 1;
                break;
            }
            else if ((mat[0][0] == mat[1][1]) && (mat[1][1] == mat[2][2]) && mat[0][0] != '.')
            {
                cout << mat[0][0] << endl;
                t = 1;
                break;
            }
            else if ((mat[0][2] == mat[1][1]) && (mat[1][1] == mat[2][0]) && mat[0][2] != '.')
            {
                cout << mat[1][1] << endl;
                t = 1;
                break;
            }
        }
        if (t == 0)
        {
            cout << "DRAW" << endl;
        }
    }
    return 0;
}