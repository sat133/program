#include<bits/stdc++.h>
using namespace std;

#define wt while(true)
vector<int>subset;
int n=7;

void search_(int first = 0, subset)
{
    if(k == n+1)
    {
        for(auto x: subset)
            cout<<x;
    }
    else
    {
        subset.push_back(k);
        search_(k+1);
        
    }
}
int main()
{
    freopen("input.txt", "r", stdin);
    freopen("op.txt", "w", stdout);
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin>>n;
    for(int i=0; i<n; i++)
    {
        int a;
        cin>>a;
        arr[i]=a;
    }

    while(n--)
        search_(n);
    for(auto x: subset)
            cout<<x<<" ";
    return 0;

}
