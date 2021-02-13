#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()
{
    ll n, x, elem, gondolas = 0;
    cin >> n >> x;

    vector<ll> v;

    for(ll i=0; i<n; i++)
    {
        cin >> elem;
        v.push_back(elem);
    }

    sort(v.begin(), v.end());

    ll i = 0;
    ll j = (v.size()-1);

    while(i <= j)
    {
        if(i == j)
        {
            if(v[i] <= x)
            {
                gondolas += 1;
                break;
            }
        }

        if(v[i] + v[j] <= x)
        {
            gondolas += 1;
            i += 1;
            j -= 1;
            continue;
        }
        else if(v[j] <= x)
        {
            gondolas += 1;
            j -= 1;
        }
        else
        {
            j -= 1;
        }
    }

    cout << gondolas << "\n";

    return 0;
}
