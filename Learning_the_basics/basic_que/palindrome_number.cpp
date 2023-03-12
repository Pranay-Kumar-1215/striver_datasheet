#include<bits/stdc++.h>
using namespace std;
class Solution
{
	public:
		string is_palindrome(int n)
		{
		    int i = 0;
		    int m = n;
		    while(m>0)
		    {
		        i = 10*(i +  m%10);
		        m = m/10;
		    }
		    if ( i/10 == n)
		    {
		        return "Yes";
		    }
		    else
		    {
		        return "No";
		    }
		}
};