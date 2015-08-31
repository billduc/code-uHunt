#include <bits/stdc++.h>

#define rep(i,n) for(int i=0; i < (int) n;++i)
#define For(i,m,n) for(int i= (int) m; i <= (int) n;++i)
#define pb push_back
#define X first
#define Y second
#define sz size()

using namespace std;
typedef long long ll;
#define N 30005

ll dp[N];
ll cc[] = {5,10,20,50,100,200,500,1000,2000,5000,10000};

void solve(){
    dp[0]=1;
    for(ll i=0;i<11;++i)
        for(ll j=cc[i];j<=30000;++j)
            dp[j]+=dp[j-cc[i]];
}
int main() {
    //ios_base::sync_with_stdio(false);
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    string  s;
    solve();
    while(cin>>s){
        if (s=="0.00")
            break;
        int n=0;
        int d=0,c =0;
        for(; s[n] != '.' ;++n)
            d=d*10+(s[n]-'0');
        n++;
        for(; n<s.size();++n)
            c=c*10+(s[n]-'0');
        //cout<<c<<"*"<<endl<<endl;
        ll k=d*100+c;
        if (d<100)
            cout<<" ";
        if (d<10)
            cout<<" ";
        cout<<d<<".";
        if (c<10)
            cout<<"0";
        cout<<c;

        ll kkk=dp[k];
        ll kk=kkk;
        //cout<<"**"<<k<<" "<<kk<<endl;
        n=17;
        while (kkk)
        {
            n--;
            kkk/=10;
        }
        for(int i=0;i<n;++i)
            cout<<" ";
        cout<<kk<<endl;

    }
    return 0;
}


