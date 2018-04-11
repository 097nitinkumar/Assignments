#include <bits/stdc++.h>
//
using namespace std;

int main() {
    int q;//no. of different 1 digit number.
    cin >> q;
    string s(q);
    for(int i=0;i<q;i++)
    {
      cin>>s[i];
    }
    sort(s.begin(),s.end());
    vector <int> curr_position(q,0);
    vector <int> display(q,0);
    long long temp=pow(q,q);
    for(int  i=0;i<temp;i++)
    {
      for(int  j=0;j<=q;j++)
      {
        cout<<s[curr_position[j]];
      }
    }
    return 0;
}
