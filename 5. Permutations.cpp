#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()
{
    ll n;
    cin >> n;

    if(n == 1)
    {
        cout << 1;
    }
    else if(n <= 3)
    {
        cout << "NO SOLUTION";
    }
    else
    {
        for(ll i=2; i<=n; i += 2)
        {
            cout << i << " ";
        }
        for(ll j=1; j<=n; j += 2)
        {
            cout << j << " ";
        }
    }

    return 0;
}
