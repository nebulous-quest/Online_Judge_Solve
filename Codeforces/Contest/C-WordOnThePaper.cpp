#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t = 1;
    cin >> t;
    while (t--)
    {
        char p[9][9];
        for (int i = 0; i < 8; i++)
        {
            for (int j = 0; j < 8; j++)
            {
                cin>>p[i][j];
            }
        }

        string result = "";
        for (int col = 0; col < 8; ++col)
        {
            for (int row = 0; row < 8; ++row)
            {
                char letter = p[row][col];
                if (letter != '.')
                {
                    result += letter;
                }
            }
        }
        cout << result << endl;
    }
    return 0;
}