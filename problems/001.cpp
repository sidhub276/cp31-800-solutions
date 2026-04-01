#include <bits/stdc++.h>
using namespace std;

int main()  
{
    int t;
    cin >> t;
    for (int q = 1; q <= t; q++)
    {
        int n,k;
        cin>>n>>k;
        vector<int>v(n);
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
        }
        if(k>1) cout<<"YES"<<endl;
        else
        {
            vector<int>v1(v);
            sort(v.begin(),v.end());
            int l=0;
            for(int i=0;i<n;i++)
            {
                if(v1[i]==v[i])
                {
                    l+=1;
                }
            }
            if(l==n) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
    }
    return 0;
}