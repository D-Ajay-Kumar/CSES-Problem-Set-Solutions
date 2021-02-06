#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()
{
    ll n;
    cin >> n;

    set<ll> arr1, arr2;
    ll sum1 = 0, sum2 = 0;

    for(ll i=n; i>0; i--)
    {
        if(sum1 <= sum2)
        {
            arr1.insert(i);
            sum1 += i;
        }
        else
        {
            arr2.insert(i);
            sum2 += i;
        }
    }

    if(sum1 == sum2)
    {
        cout << "YES" << "\n";
        cout << arr1.size() << "\n";
        for(auto itr=arr1.begin(); itr!=arr1.end(); itr++)
            cout << *itr << " ";
        cout << "\n";
        cout << arr2.size() << "\n";
        for(auto itr=arr2.begin(); itr!=arr2.end(); itr++)
            cout << *itr << " ";
        cout << "\n";
    }
    else
    {
        cout << "NO" << "\n";
    }

    return 0;
}
