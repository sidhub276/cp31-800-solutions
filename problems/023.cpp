#include <iostream>
using namespace std;

int main()  
{
    int t;
    cin >> t;
    for (int q = 1; q <= t; q++)
    {
        int n;
        cin>>n;
        if (n%3==0)
        {
            cout<<"Second"<<endl;
        }
        else cout<<"First"<<endl;
        
    }
    return 0;
}