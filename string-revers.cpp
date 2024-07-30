#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef vector<int> vi;
typedef pair<int, int> pi;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    string str;
    cin>>str;
    string rev;

    //without using push back function
    // for (int i = str.size()-1; i >= 0; i--)
    // {
    //    rev = rev + str[i]; 
    // }

    //using push_back function.
     for (int i = str.size(); i >= 0; i--)
    {
       rev.push_back(str[i]); 
    }
    if (str == rev)
    {
        cout<<"pelindrom";
    }
    else{
        cout<<"not pelindrom";
    }
    return 0;
}