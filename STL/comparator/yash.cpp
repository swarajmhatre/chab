//YashS
#include <bits/stdc++.h>
using namespace std;
#define test              int T;cin>>T;while(T--)
#define int               long long
#define pb                push_back
#define all(x)            (x).begin(),(x).end()
#define pii               pair<int,int>
#define rep(i,a,b)        for(int i=a;i<b;i++)
#define pVec(v)           for(auto e:v)cout<<e<<" ";cout<<"\n"
const int MOD = 1e9 + 7;
const int N = 1e5 + 7;
inline int gcd(int a, int b)          {if (b == 0) return a;    return gcd(b, a % b);}

int fpow(int x, int y, int p = MOD) {
  x = x % p; int sum = 1; while (y) {
    if (y & 1)sum = sum * x; sum %= p; y = y >> 1; x = x * x; x %= p;
  } return sum;
}
int lcm(int a, int b) {
  return (a * b) / __gcd(a, b);
}
int mod_add(int a, int b, int m) {a = a % m; b = b % m; return (((a + b) % m) + m) % m;}
int mod_mul(int a, int b, int m) {a = a % m; b = b % m; return (((a * b) % m) + m) % m;}
int mod_sub(int a, int b, int m) {a = a % m; b = b % m; return (((a - b) % m) + m) % m;}

void init_code() {
#ifndef ONLINE_JUDGE
  freopen("inputf.txt", "r", stdin);
  freopen("outputf.txt", "w", stdout);
#endif // ONLINE_JUDGE
}

void yash()
{
  int n;
  cin >> n;
  int ans[n][n];
  if (n == 2) {
    rep(i, 0, 2) {
      rep(j, 0, 2) {
        cout << "-1 ";
      }
      cout << "\n";
    }
    return;
  }
  rep(i, 0, n) {
    rep(j, 0, n) {
      if ( i == j ) {
        ans[i][j] = -1;
      } else {
        ans[i][j] = 1;
      }
    }
  }
  rep(i, 0, n) {
    rep(j, 0, n) {
      cout << ans[i][j] << " ";
    }
    cout << endl;
  }

}

signed main()
{
  init_code();
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);
  test
  yash();
  return 0;
}