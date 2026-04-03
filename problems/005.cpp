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
        vector<int>v1(n);
        for(int i=0;i<n;i++)
        {
            v1[i]=i+1;
        }
        int x=0;        
        while(x==0)
        {
            int y=0;
            for(int i=1;i<n-1;i++)
            {
                if(v[i]>v[i-1]&&v[i]>v[i+1])
                {
                    int k=v[i];
                    v[i]=v[i+1];
                    v[i+1]=k;
                    y+=1;
                }
            }
            if(v==v1)
            {
                x=1;
                cout<<"Yes"<<endl;
            }
            else if(y==0) 
            {
                x=1;
                cout<<"No"<<endl;
            }
        }
    }
    return 0;
}