#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n; cin>>n;
    int flag = 0;

    for (int i = 1; i <=sqrt(n); i++)
    {
        if(n%i == 0){
            flag+=2;
            cout <<i << " " << n/i << " ";
        }
    }
cout << flag<<endl;
    

    return 0;
}