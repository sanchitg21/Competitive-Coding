#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")

using namespace std;

bool sortbysec(const pair<int,int> &a,
              const pair<int,int> &b)
{
    return (a.second < b.second);
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;


    while (t--)
    {
        int n, i, k, c;

        cin >> n >> k;

        c = n;

        vector<pair<int, int>> a(n);

        for (i = 0; i < n; i++)
        {
            cin >> a[i].first;
            a[i].second = i;
        }

        sort(a.begin(), a.end());

        for (i = 0; i < n; i++)
        {
            a[i].first = i;
        }
        
        sort(a.begin(), a.end(), sortbysec);

        for (i = 1; i < n; i++)
        {
            if (c == k)
            {
                break;
            }

            if (a[i].first == a[i-1].first + 1)
            {
                c--;
            }

        }

        if (c == k)
        {
            cout << "Yes\n";
        }
        else
        {
            cout << "No\n";
        }
    }
}