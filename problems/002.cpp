#include <bits/stdc++.h>
using namespace std;

int main()  
{
    int t;
    cin >> t;
    for (int q = 1; q <= t; q++)
    {
        int n,x;
        cin>>n>>x;
        vector<int>v(n);
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
        }
        int a=2*(x-v[n-1]);
        int maxi=v[0];
        for(int i=1;i<n;i++)
        { 
            maxi=max(v[i]-v[i-1],maxi);
        }
        cout<<max(maxi,a)<<endl;
    }
    return 0;
}