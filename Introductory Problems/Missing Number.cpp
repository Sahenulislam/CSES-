#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define yes "YES"
#define no "NO"
#define pb push_back
#define si size()
#define in " "
#define mone "-1"
#define zero "0"
#define one "1"
#define PI acos(-1)
int main()
{
    ll n;
    cin>>n;
    ll a[n+10]={0};
    for(ll i=1;i<n;i++)
        cin>>a[i];
    sort(a,a+n);
    for(ll i=1;i<=n;i++)
    {
        if(i!=a[i])
        {
            cout<<i<<endl;
            break;
        }
    }
    return 0;
}




