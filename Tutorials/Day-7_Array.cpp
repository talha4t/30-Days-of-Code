#include <bits/stdc++.h>
using namespace std;

#define ed '\n'
#define ll long long int

int a[10007];

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) 
        cin >> a[i];

    for (int i = n - 1; i >= 0; i--) 
        cout << a[i] << " ";
    
    return 0;
}

//github.com/talha4t (Talha Mahmud)
