#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int set_bits(int n)
{
    int c = 0;
    while(n>0)
    {
        c+= (n&1);
        n>>=1;
    }
    return c;
}

int main() {
     
	int q; cin>>q;
	while(q--)
	{
	    int a,b;
	    cin>>a>>b;
	    int i;
	    int c = 0;
	    for(i=a; i<=b; i++)
	    {
	        c+= set_bits(i);
	    }
	    cout<<c;
	}
	return 0;
}
