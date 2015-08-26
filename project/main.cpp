#include <bits/stdc++.h>

#define rep(i,n) for(int i=0; i < (int) n;++i)
#define For(i,m,n) for(int i= (int) m; i <= (int) n;++i)
#define pb push_back
#define X first
#define Y second
#define sz size()

using namespace std;
typedef long long ll;
#define N 100005

int a[300];


int main() {
    ios_base::sync_with_stdio(false);
    freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    int n,q;
    int c=0;
    while (cin>>n>>q)
    {
        if (n==0 && q==0)
            break;
        rep(i,n)
            cin>>a[i];
        c++;
        cout<<"SET "<<c<<":\n";
    }
    return 0;
}
