#include<bits/stdc++.h>
using namespace std;

int main()  
{
    int t;
    cin >> t;
    for (int q = 1; q <= t; q++)
    {
        int n,m;
        string x,s;
        cin>>n>>m>>x>>s;
        if (x.find(s) != string::npos) 
        {
        cout<<"0"<<endl;
        } 
        else 
        {
            x=x+x;
            if (x.find(s) != string::npos) 
            {
                cout<<"1"<<endl;
            } 
            else
            {
                x=x+x;
                if (x.find(s) != string::npos) 
                {
                    cout<<"2"<<endl;
                }
                else
                {
                    x=x+x;
                    if (x.find(s) != string::npos) 
                    {
                        cout<<"3"<<endl;
                    } 
                    else
                    {
                        x=x+x;
                        if (x.find(s) != string::npos) 
                        {
                            cout<<"4"<<endl;
                        } 
                        else
                        {
                            x=x+x;
                            if (x.find(s) != string::npos) 
                            {
                                cout<<"5"<<endl;
                            } 
                            else 
                            {
                                x=x+x;
                                if (x.find(s) != string::npos) 
                                {
                                    cout<<"6"<<endl;
                                } 
                                else cout<<"-1"<<endl;

                            }
                            
                        }
                    }
                }
            }
        }
        

    }
    return 0;
}