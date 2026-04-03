#include<bits/stdc++.h>
using namespace std;

int main()  
{
    int t;
    cin >> t;
    for (int q = 1; q <= t; q++)
    {
        int n;
        cin>>n;
        vector<int>v(n);
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
        }
        sort(v.begin(),v.end());
        if(n==2) cout<<"Yes"<<endl;
        else if(n==3)
        {
            if(v[0]==v[1]||v[1]==v[2]) cout<<"Yes"<<endl;
            else cout<<"No"<<endl;
        }
        else 
        {
            int m=0;
            int l=0;
            for(int k=0;k<n;k++)
            {
                if(k<n/2)
                {
                    if(v[k]==v[0]) m++;
                }
                else if(k>n/2)
                {
                    if(v[k]==v[n-1] )l++;
                }
                else
                {
                    if(n%2==0&&v[k]==v[n-1])l++;
                    else
                    {if((n%2==1)&&(v[k]==v[n-1]||v[k]==v[0])) m++;}
                }
            }
            if(l+m==n) cout<<"Yes"<<endl;
            else cout<<"No"<<endl;
        }

    }
    return 0;
}