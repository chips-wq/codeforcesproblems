#include <iostream>

using namespace std;

int main()
{
    //the changes in between don't matter, just the leftmost equality and the right most equality
    int tests;
    cin >> tests;
    for (int j = 0; j < tests; j++)
    {
        int n, last_i = -1, x, y, res = 0;
        cin >> n;
        cin >> x;
        for (int i = 1; i < n; i++)
        {
            cin >> y;
            if (y == x)
            {
                last_i = i;
                break;
            }
            x = y;
        }
        if (last_i == -1)
        {
            cout << res << endl;
            continue;
        }
        // y is the last element read
        for (int i = last_i + 1; i < n; i++)
        {
            cin >> y;
            if (y == x)
            {
                if (i - 1 == last_i)
                {
                    res += 1;
                    last_i = i;
                }
                else
                {
                    res += i - 1 - last_i;
                    last_i = i - 1;
                }
                x = -1;
            }
            else
                x = y;
        }
        cout << res << endl;
    }
}
