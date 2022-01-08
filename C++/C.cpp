#include <bits/stdc++.h>
using namespace std;

double ev(int x, int s)
{
    double a = x;
    if (x == 0)
        return 0;
    double d = 0;
    for (int i = 1; i <= s; i++)
    {
        d += (double)i * (1 / a);
    }
    return d;
}
int main()
{
    int T;
    cin >> T;
    while (T--)
    {

        string S;
        cin >> S;
        int dem0 = 0, dem1 = 0;
        for (int i = 0; i < S.size(); i++)
        {
            if (S[i] == '1')
                dem1++;
            else
                dem0++;
        }
        double C = S.size()*S.size();
        cout << ((ev(dem0, S.size()) + ev(dem1, S.size())) * C) << endl;
    }
    return 0;
}