
#include <bits/stdc++.h>

using namespace std;


int main()
{

    long long n, i, m, j, v, mo;
    int t = 1;
    v = 0;
    char p;

    cin >> n;

    vector<char> a(n);
    vector<long long int> c(26, 0);
    vector<long long> q(26, 0);
    vector<int> f(26, 0);

    for (i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] != '*')
        {
            f[(int)a[i] - 97]++;
        }
    }

    cin >> m;
    
    mo = m;

    for (i = 0; i < m; i++)
    {
        t = 1;

        for (j = 0; j < n; j++)
        {
            cin >> p;

            if (a[j] == '*')
            {
                if (f[(int)p - 97] > 0)
                {
                    if (t == 1)
                    {
                        mo--;
                        t = 0;
                    }
                }

                c[(int)p - 97]++;
            }
            else if (a[j] != p)
            {
                if (t == 1)
                {
                    mo--;
                    t = 0;
                }
            }
        }

        for (j = 0; j < 26; j++)
        {
            if (c[j] > 0 && t == 1)
            {
                q[j]++;
            }
        }

        for (j = 0; j < 26; j++)
        {
            c[j] = 0;
        }
    }

    for (i = 0; i < 26; i++)
    {
        if (q[i] == mo)
        {   
            v++;
        }
    }

    cout << v;















   
}



    