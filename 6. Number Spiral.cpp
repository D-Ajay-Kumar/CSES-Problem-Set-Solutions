#include<bits/stdc++.h>

using namespace std;

typedef long long ll;


ll findDiagonal(ll n)
{
    return ((n*n)-(n-1));
}

void solve()
{
    ll y, x;
    cin >> y >> x;

    ll result;

    if(y == x)
    {
        result = findDiagonal(y);
    }
    else if(y>x)
    {
        if(y%2 ==0)
        {
            result = findDiagonal(y) + (y-x);
        }
        else
        {
            result = findDiagonal(y) - (y-x);
        }
    }
    else
    {
        if(x%2 != 0)
        {
            result = findDiagonal(x) + (x-y);
        }
        else
        {
            result = findDiagonal(x) - (x-y);
        }
    }

    cout << result << "\n";
}

int main()
{
    ll test;
    cin >> test;

    while(test--)
    {
        solve();
    }
}
