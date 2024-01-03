#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin>>N;
        vector<int> A(N), B(N);
        for (int i = 0; i < N; ++i)
        {
            cin >> A[i];
        }
        for (int i = 0; i < N; ++i)
        {
            cin >> B[i];
        }
        sort(A.begin(), A.end());
        sort(B.rbegin(), B.rend());

        bool possible = true;
        int target_sum = A[0] + B[0];
        for (int i = 1; i < N; ++i)
        {
            if (A[i] + B[i] != target_sum)
            {
                possible = false;
                break;
            }
        }
        if (possible)
        {
            for (int i = 0; i < N; ++i)
            {
                cout << A[i] << " ";
            }
            cout<<endl;
            for (int i = 0; i < N; ++i)
            {
                cout << B[i] << " ";
            }
            cout<<endl;
        }
        else
        {
            cout << "-1"<<endl;
        }
    }
    return 0;
}
