#include <bits/stdc++.h>
using namespace std;
int main(){
    int r;
    cin>>r;
    
    for (int i = r; i >=1; i--)
    {
        for (int j = 1; j <= r-i; j++)
        {
            cout<<" ";
        }
        for (int j = 1; j <= i; j++)
        {
            
            cout<<j<<" ";
        }
        
        cout<<"\n";
        
    }
    
}