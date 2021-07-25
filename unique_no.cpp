#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;


int main() {
     int n; cin>>n;
     int i;
     int x = 0;
     for(i=0; i<n; i++)
     {
         int a;
         cin>>a;
         x = x^a;
     }
     cout<<x;
	
	return 0;
}
