#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main() {
    
    int t; cin>>t;
    while(t--)
    {
        string s1, s2;
        cin>>s1>>s2;
        int n = s1.length();
        int i;
        int arr[n];
        for(i=0; i<n; i++)
        {
          int x = (int)(s1[i]) ;
          int y = (int)(s2[i]) ;
          int xori = x^y;
          arr[i] = xori;
        }
        for(i=0; i<n; i++)
        {
            cout<<arr[i];
        }
        
    }
	return 0;
}
