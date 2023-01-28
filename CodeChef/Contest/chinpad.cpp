#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    char S[50], a = 64;

    int c = 0, count = 0;

    cin >> S;

    while (S[c] != '\0')
    {
        if (S[c] == 'A' || S[c] == 'E' || S[c] == 'I' || S[c] == 'O' || S[c] == 'U')
            count++;
        c++;
    }

    int length = strlen(S);

    for (int i = 0; i < length; i++)
    {

        S[i]+=count;

        if (S[i] > 90)
        {
            int math = S[i] - 90;

            S[i] = a + math;
        }

        else
            S[i];
    }

    for (int i = 0; i < length; i++)
    {
        cout << S[i];
    }
    return 0;
}
