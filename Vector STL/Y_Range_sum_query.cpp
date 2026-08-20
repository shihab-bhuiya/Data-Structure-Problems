#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, q;
    cin >> n >> q;
    vector<ll> v(n+1);
    for (int i = 1; i <= n; i++)
    {
        cin >> v[i];
    }
    vector<ll> pre(n+1);
    pre[1] = v[1];

    for (int i = 1; i <= n; i++)
    {
        pre[i] = pre[i-1] + v[i];
    }
    
    // for(int i=1; i<=n; i++){
    //     cout << pre[i] << " ";
    // }

    while (q--)
    {
        int l,r;
        cin>> l>> r;
        ll sum =0;
          
        if(l == 1){
            sum = pre[r];
        }
        else{
            sum = pre[r] - pre[l-1];
        }
            cout << sum <<endl;
    }
    

    return 0;
}