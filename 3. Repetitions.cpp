#include<bits/stdc++.h>

using namespace std;

int main()
{
    string dna;
    cin >> dna;

    long long length = dna.length();

    vector<long long> record;

    int temp = 0;

    for(int i=0; i<length; i++)
    {
        if (dna[i] == dna[i+1])
        {
            temp += 1;
        }
        else
        {
            record.push_back(temp+1);
            temp = 0;
        }
    }

    cout << *max_element(record.begin(), record.end());
}
