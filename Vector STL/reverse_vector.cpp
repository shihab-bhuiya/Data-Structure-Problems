#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    vector<int> a;
    while (t--)
    {
        int x;
        cin >> x;
        a.push_back(x);
    }
    for(int i=a.size()-1; i>=0; i--){
        cout<< a[i] <<" ";
    }
    
 
    return 0;
}