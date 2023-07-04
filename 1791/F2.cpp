#include <bits/stdc++.h>

using namespace std;

// de fapt nu era smenul lui mars, trebuia sa te axezi pe faptul ca dupa
// ce aplici sum_d(n) de 3 ori, nu mai trebuie aplicat

/* tine minte toti indicii ce inca pot fi schimbati(inauntrul unui set), binary search pe ei si gaseste-i
 */

int sum_d(int n)
{
    int s0 = 0;
    while (n)
    {
        s0 += n % 10;
        n /= 10;
    }
    return s0;
}

void solve()
{
    int n, q, l, r, x, tmp;
    cin >> n >> q;
    vector<int> v(n);
    set<int> aa;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        if (v[i] >= 10)
        {
            aa.insert(i);
        }
    }
    for (int i = 0; i < q; i++)
    {
        cin >> tmp;
        if (tmp == 1)
        {
            cin >> l >> r;
            l--;
            r--;
            int lst = l;
            while (!aa.empty())
            {
                set<int>::iterator it = aa.lower_bound(lst);
                if (it == aa.end() || *it > r)
                    break;
                v[*it] = sum_d(v[*it]);
                int el = *it;
                if (v[*it] <= 9)
                    aa.erase(it);
                lst = el + 1;
            }
        }
        else
        {
            cin >> x;
            cout << v[x - 1] << "\n";
        }
    }
}

int main()
{
    // freopen("inp.txt", "r", stdin);
    int t;
    cin >> t;
    while (t--)
        solve();
}
