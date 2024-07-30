#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef vector<int> vi;
typedef pair<int, int> pi;
int sum(int n){
    int digit_sum = 0;
    while (n)
    {
        digit_sum = digit_sum + n % 10;
        n = n /10;
    }
    return digit_sum;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int a,b;
    cin>>a>>b;
    cout<<sum(a)+sum(b);
    return 0;
}