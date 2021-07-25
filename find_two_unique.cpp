#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main() {
    int n; cin>>n;
    int i;
    int arr[n+1];
    int xi = 0;
    for(i=0; i<n; i++)
    {
        int a;
        cin>>a;
        arr[i] = a;
        xi = xi^a;
    }
    
    int temp = xi;
    int pos = 0;
    while((temp&1)!=1)
    {
        pos++;
        temp>>=1;
    }
   
    int mask = (1<<pos);
    int x = 0;
    int y = 0;
    for(i=0; i<n; i++)
    {
       if((mask & arr[i]) > 0)
       {
          x = x^arr[i]; 
       }
    }
    
    y = xi^x;
    cout<<min(x,y)<<" "<<max(x,y);

	return 0;
}
