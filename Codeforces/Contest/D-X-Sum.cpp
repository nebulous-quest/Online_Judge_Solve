#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t = 1;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        int res = 0;
        vector<vector<int>> v(n,vector<int>(m,0));
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> v[i][j];
            }
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                int temp_sum = 0;
                temp_sum += v[i][j];
                int temp_i = i - 1, temp_j = j - 1;
                while (temp_i >= 0 && temp_j >= 0)
                {
                    temp_sum += v[temp_i][temp_j];
                    temp_i--;
                    temp_j--;
                }
                temp_i = i - 1;
                temp_j = j + 1;
                while (temp_i >= 0 && temp_j < m)
                {
                    temp_sum += v[temp_i][temp_j];
                    temp_i--;
                    temp_j++;
                }
                temp_i = i + 1;
                temp_j = j - 1;
                while (temp_i < n && temp_j >= 0)
                {
                    temp_sum += v[temp_i][temp_j];
                    temp_i++;
                    temp_j--;
                }
                temp_i = i + 1;
                temp_j = j + 1;
                while (temp_i < n && temp_j < m)
                {
                    temp_sum += v[temp_i][temp_j];
                    temp_i++;
                    temp_j++;
                }
                res = max(res, temp_sum);
            }
        }
        cout << res << endl;
    }
    return 0;
}