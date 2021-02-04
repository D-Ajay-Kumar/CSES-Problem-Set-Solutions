#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long n;
    cin >> n;

    long long arr[n];

    for(long long i=0; i<n; i++)
    {
        cin >> arr[i];
    }

    long long diff = 0, cost = 0;

    for(int j=0; j<n-1; j++)
    {
        diff = 0;

        if(arr[j] > arr[j+1])
        {
            diff = arr[j] - arr[j+1];
            arr[j+1] += diff;
            cost += diff;
        }
    }

    cout << cost << "\n";

    return 0;
}
