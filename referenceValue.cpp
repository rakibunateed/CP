#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef vector<int> vi;
typedef pair<int, int> pi;
void increment(int &n,int n1){
    n++;
    n1++;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int a= 3;
    int b =4;
    cout<<a<<" "<<b<<endl;
    increment(a,b);
     cout<<a<<" "<<b<<endl;
    return 0;
}