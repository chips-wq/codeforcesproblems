#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int n, c;
    cin >> n >> c;
    vector<int> v(n), s1(n), s2(n), ins1(n), ins2(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        s1[i] += v[i] + i + 1;
        s2[i] += v[i] + n - i;
    }
    iota(ins1.begin(), ins1.end(), 0);
    iota(ins2.begin(), ins2.end(), 0);
    sort(ins1.begin(), ins1.end(), [&](int i, int j)
         { return s1[i] < s1[j]; });
    sort(ins2.begin(), ins2.end(), [&](int i, int j)
         { return s2[i] < s2[j]; });
    set<int> ui;
    // wrong idea
    /*
    for (int i = 0; i < n; i++)
    {
        cout << s1[ins1[i]] << " ";
    }
    cout << endl;
    for (int i = 0; i < n; i++)
    {
        cout << s2[ins2[i]] << " ";
    }
    cout << endl;
    */
    int i = 0, j = 0, us = 0, ans = 0;
    while (ui.size() != n && c > 0)
    {
        if (us == 0)
        {
            if (ui.find(ins1[i]) == ui.end())
            {
                us = !us;
                ui.insert(ins1[i]);
                c -= s1[ins1[i]];
                if (c >= 0)
                    ans++;
            }
            i++;
        }
        else
        {
            if (ui.find(ins2[j]) == ui.end())
            {
                us = !us;
                ui.insert(ins2[j]);
                c -= s2[ins2[j]];
                if (c >= 0)
                    ans++;
            }
            j++;
        }
    }
    cout << ans << endl;
}

int main()
{
    // freopen("inp2.txt", "r", stdin);
    int t;
    cin >> t;
    while (t--)
        solve();
}
