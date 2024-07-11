#include<bits/stdc++.h>
using namespace std;

vector<int>nextPermutation(vector<int>&v)
{
    int n=v.size(),ind=-1;
    for(int i=n-2; i>=0; i--)
    {
        if(v[i]<v[i+1])
        {
            ind=i;
            break;
        }
    }
    if(ind==-1)
    {
        reverse(v.begin(),v.end());
        return v;
    }
    for(int i=n-1; i>ind; i--)
    {
        if(v[i]>v[ind])
        {
            swap(v[i],v[ind]);
            break;
        }
    }
    reverse(v.begin()+ind+1,v.end());
    return v;
}

void Solve()
{
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0; i<n; i++) cin>>v[i];
    vector<int>ans=nextPermutation(v);
    for(int i=0; i<n; i++)
        cout<<ans[i]<<" ";
    cout<<endl;
}

int main()
{
    int T=1;
    cin>>T;
    while(T--)
        Solve();
}
