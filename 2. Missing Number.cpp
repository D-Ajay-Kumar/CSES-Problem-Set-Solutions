#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long n, t;
    cin >> n;

    long long hashMap[n+1];

    for(int j=0; j<n+1; j++)
    {
        hashMap[j] = 0;
    }

    for(int i=0; i<n-1; i++)
    {
        cin >> t;
        hashMap[t] = 1;
    }

    for(int k=1; k<n+1; k++)
    {
        if(hashMap[k] == 0)
        {
            cout << k;
            break;
        }
    }
}
