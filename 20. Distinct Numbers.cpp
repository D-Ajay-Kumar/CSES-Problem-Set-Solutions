#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()
{
    ll n;
    cin >> n;

    set<ll> s;
    ll elem;

    for(ll i=0; i<n; i++)
    {
        cin >> elem;
        s.insert(elem);
    }

    cout << s.size() << "\n";

    return 0;
}
