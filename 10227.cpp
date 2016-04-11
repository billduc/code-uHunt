#include <bits/stdc++.h>

using namespace std;

#define X first
#define Y second
#define pb push_back
#define mp make_pair
#define sz(a) ((int)(a).size())
#define all(a) (a).begin(),(a).end()
#define DEBUG(x) {cout<< #x <<" = " << x <<endl;}

typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> ii;

char buff[123];
int p,t;
bool a[123][123];
vector<int> pset;

int find_set(int u){
    return (pset[u] == u ? u : pset[u] = find_set(pset[u]));
}

void union_set(int u, int v){
    pset[find_set(u)] = find_set(v);
}


bool same_set(int u, int v){
    for(int k = 1; k <= t; ++k)
        if (a[u][k] != a[v][k])
            return false;
    return true;
}

int main(){
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    //ios::sync_with_stdio(false);
    int test;
    gets(buff);
    sscanf(buff,"%d",&test);
    gets(buff);
    //cout<<"ok1"<<endl;
    while (test--){
        gets(buff);
        sscanf(buff,"%d %d",&p, &t);
        int u,v;
        memset(a,false,sizeof(a));
        while (gets(buff) && sscanf(buff,"%d %d", &u, &v) == 2){
            a[u][v] = true;
        }
        //cout<<"ok2" <<endl;
        int res = p;
        pset.assign(p+2,0);
        for(int i = 1; i <= p; ++i)
            pset[i] = i;
        for(int i = 1; i <= p-1; ++i)
            for(int j = i + 1; j <= p; ++j)
                if (same_set(i,j))
                {
                    int u,v;
                    u = find_set(i);
                    v = find_set(j);
                    if (u != v)
                    {
                        union_set(i,j);
                        res--;
                    }
                }
        printf("%d\n",res);
        if (test)
            putchar('\n');
        pset.clear();
    }
    return 0;
}
