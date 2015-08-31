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
int f[25][215][25];
int d,m;
int n,q;

void solve(int c);
int sub(int x, int y);

int main() {
    ios_base::sync_with_stdio(false);
    freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);

    int c=0;
    while (cin>>n>>q)
    {
        if (n==0 && q==0)
            break;
        For(i,1,n)
            cin>>a[i];
        c++;
        cout<<"SET "<<c<<":\n";
        rep(i,q)
        {
            cin>>d>>m;
            solve(i+1);
        }
    }
    return 0;
}

int sub (int x, int y){
    int tg=(x-y)%d;
    if (tg>=0)
        return tg;
    else
        return tg+d;
}

void solve(int c){
    For(i,0,m)
        For(j,0,n)
            For(k,0,d-1)
                f[i][j][k]=0;
    For(i,0,n)
        f[0][i][0]=1;
    For(i,1,m)
        For(j,1,n)
            For(k,0,d-1)
                f[i][j][k]=f[i][j-1][k] + f[i-1][j-1][sub(k,a[j]%d)];
    cout<<"QUERY "<<c<<": "<<f[m][n][0]<<endl;

}

