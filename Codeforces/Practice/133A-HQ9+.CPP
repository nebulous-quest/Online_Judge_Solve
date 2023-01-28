#include <iostream>
#include <string.h>
using namespace std;
main()
{
    char s[1000];
    int l, i, flag = 0;

    cin >> s;
    l = strlen(s);
    while (l >= 0)
    {

        for (i = 0; i < l; i++)
        {
            if ((s[i] == 'H') || (s[i] == 'Q') || (s[i] == '9'))
            {
                flag++;
            }
        }

        l--;
    }
    if (flag >= 1)
        cout << "YES" << endl;
    else if (flag == 0)
        cout << "NO" << endl;
    flag = 0;
    return 0;
}