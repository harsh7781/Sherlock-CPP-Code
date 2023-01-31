#include <bits/stdc++.h>
using namespace std;

void solve()
{
    string a, b;
    cin >> a >> b;

    unordered_map<char, int> freq;
    
    for (char ch : a)
        freq[ch] += 1;
    for (char ch : b)
        freq[ch] -= 1;

    for (auto &it : freq)
    {
        int cnt = it.second;
        if (cnt > 0)
        {
            cout << "NO\n";
            return;
        }
    }

    cout << "YES\n";
}

int main()
{
    int tc;
    cin >> tc;

    for (int i = 0; i < tc; i++)
    {
        solve();
    }
    return 0;
}
