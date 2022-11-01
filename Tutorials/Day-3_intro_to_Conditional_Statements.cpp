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

    if (n % 2 != 0)
        cout << "Weird" << ed;
    else if (n % 2 == 0 and (n >= 2 and n <= 5))
        cout << "Not Weird" << ed;
    else if (n % 2 == 0 and (n >= 6 and n <= 20))
        cout << "Weird" << ed;
    else 
        cout << "Not Weird" << ed;

    
    return 0;
}

//github.com/talha4t (Talha Mahmud)
