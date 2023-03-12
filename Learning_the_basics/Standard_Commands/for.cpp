#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    if (b > a)
    {
        for ( a; b > a; a++)
        {
            cout << a << endl;
        }
    }
    else
    {
        for (b; b < a; b--)
        {
            cout << b << endl;
        }
    }
    return 0;
}