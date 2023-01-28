// #include <bits/stdc++.h>
// #include <string.h>
// using namespace std;

// int main()
// {
//     int n, len;
//     cin >> n;
//     char str[101];

//     cin >> n;
//     gets(str);
//     len = strlen(str);
//     for (int i = 0; i < len; i++)
//     {
//         if ((str[i] >= 65 && str[i] <= 90) || (str[i] >= 97 && str[i] <= 122))
//         {
//             if (str[i] - n < 97)
//             {
//                 str[i] = 123 - (97 - (str[i] - n));
//             }
//             else
//             {
//                 str[i] = str[i] - n;
//             }
//         }
//     }
//     cout << str << endl;
//     return 0;
// }
#include <bits/stdc++.h>
#include<stdio.h>
#include<string.h>
using namespace std;
#define MAX_LIMIT 105


int main()
{
    int len, n;
    char word[MAX_LIMIT];
    scanf("%d ", &n);
    fgets(word,MAX_LIMIT,stdin);
    len = strlen(word);
    for (int i = 0; i < len; i++)
    {
        if ((word[i] >= 65 && word[i] <= 90) || (word[i] >= 97 && word[i] <= 122))
        {
            if (word[i] - n < 97)
            {
                word[i] = 123 - (97 - (word[i] - n));
            }
            else
            {
                word[i] = word[i] - n;
            }
        }
    }
    printf("%s\n", word);
    return 0;
}