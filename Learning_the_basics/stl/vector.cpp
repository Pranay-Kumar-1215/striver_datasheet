#include<bits/stdc++.h>
#include<vector>
using namespace std;

// vector <char> vec( vector <char> var, int a)
vector <char> varmain;
vector<char> vec( vector <char> var, int a)
{
    for (int i = 0; i < a; i++)
    {
        char b;
        cin >> b;
        var.push_back(b);
    }
    varmain = var;
    return var;
}
int main()
{
    int a;
    cin >> a;
    vector<char> v;
    vector<char> name = vec(v,a);
    for( auto & itr : name )
    {
        cout << itr;
    }
    cout << endl;
    return 0;
}