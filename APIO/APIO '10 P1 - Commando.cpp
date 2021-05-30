#include <bits/stdc++.h>
using namespace std; 

#pragma GCC optimize "Ofast"
#define ll long long
#define MOD 1e9+7
#define fi first
#define se second
#define INF 0x3f3f3f3f
#define MAX 1000005
#define pb push_back
#define LSB(S) (S & (-S))
typedef pair<int, int> pii;
typedef pair<int, pii> piii;
typedef vector<int> vi;
typedef vector<pii> vii;
typedef vector<piii> viii;

int N , a , b , c;
int x[MAX];
ll sum[MAX];
ll dp[MAX];
vector <ll> M;
vector <ll> B;
bool bad(ll l1,ll l2, ll l3)
{
        return (B[l3]-B[l1])*(M[l1]-M[l2])<(B[l2]-B[l1])*(M[l1]-M[l3]);
}
void add(long long m,long long b)
{
        M.push_back(m);
        B.push_back(b);
        while (M.size()>=3&&bad(M.size()-3,M.size()-2,M.size()-1))
        {
                M.erase(M.end()-2);
                B.erase(B.end()-2);
        }
}
int pointer;
long long query(long long x)
{
        if (pointer >=M.size())
                pointer=M.size()-1;
        while (pointer<M.size()-1&&
          M[pointer+1]*x+B[pointer+1]>M[pointer]*x+B[pointer])
                pointer++;
        return M[pointer]*x+B[pointer];
}

ll adjust(ll x){
    return a * (x * x) + b * x + c;
}

ll sqr(ll x){
    return x*x;
}

/*

    dp[i] = max(dp[i], adjust(i, j-1) + dp[j-1])
          = dp[j-1] + a * sqr(sum[i]-sum[j-1]) + b * (sum[i]-sum[j-1]) + C
          = dp[]

*/

int main(){
    ios_base::sync_with_stdio(0); cin.tie(NULL);  cout.tie(NULL);
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    cin >> N >> a >> b >> c;
    for(int i=1; i<=N; i++){
        cin >> sum[i];
        if(i>1) sum[i] += sum[i-1];
    }
    dp[1] = adjust(sum[1]);
    add(-2*a*sum[1], dp[1]+(a*(sum[1]*sum[1]))-(b*sum[1]));
    for(int i=2; i<=N; i++){
        dp[i] = a*sum[i]*sum[i]+b*sum[i]+c;
        dp[i] = max(dp[i],query(sum[i]) + (a*(sum[i]*sum[i]))+(b*sum[i])+c);
        add(-2*a*sum[i], dp[i]+(a*(sum[i]*sum[i]))-(b*sum[i]));
    }
    cout << dp[N] << "\n";

    return 0;
}