#include <iostream>

using namespace std;

void solve()
{
    int x, a = 0, b = 0, y, r = 0;
    cin >> x; // (a+b)/2
    x *= 2;   // a + b
    y = x / 2;
    for (int i = 31; i >= 0; i--)
    {
        if (((y >> i) & 1) == 0)
        {
            if (r != 0)
            {
                a += (1 << i);
                b += (1 << i);
                if (((x >> i) & 1) == 0)
                {
                    r = 0;
                }
            }
        }
        else
        {
            a += (1 << i);
            if (((x >> i) & 1) == 0)
            {
                if (r == 0)
                    r = 1;
            }
        }
    }
    if (a + b == 2 * (a ^ b))
    {
        printf("%d %d\n", a, b);
    }
    else
    {
        printf("-1\n");
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
}
