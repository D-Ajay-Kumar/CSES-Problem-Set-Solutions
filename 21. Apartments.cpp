#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()
{
    ll matched = 0;

    ll n, m, k;
    cin >> n >> m >> k;

    vector<ll> rSize, aSize;
    ll elem;

    for(ll i=0; i<n; i++)
    {
        cin >> elem;
        rSize.push_back(elem);
    }

    for(ll i=0; i<m; i++)
    {
        cin >> elem;
        aSize.push_back(elem);
    }

    sort(rSize.begin(), rSize.end());
    sort(aSize.begin(), aSize.end());

    for(ll i=0, j=0; i<n && j<m;)
    {
        if( (rSize[i]-k <= aSize[j]) && (rSize[i]+k >= aSize[j]) )
        {
            matched += 1;
            i += 1;
            j += 1;
        }
        else if(rSize[i] > aSize[j])
        {
            j += 1;
        }
        else
        {
            i += 1;
        }
    }

    cout << matched << "\n";

    return 0;
}
