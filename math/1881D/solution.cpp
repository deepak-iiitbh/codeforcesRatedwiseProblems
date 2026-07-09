#include<bits/stdc++.h>
using namespace std;
#define int long long
#define PI 3.1415926535897932384626
#define mod 1000000007
#define endl "\n"
#define mset(m, v) memset(m, v, sizeof(m))
#define FAST_IO                 \
  ios_base::sync_with_stdio(0); \
  cin.tie(NULL);                \
  cout.tie(NULL)
const int N = 1000001;

bool c[N];
vector<int> v;
void sieve()
{
  for(int i = 2; i <= N; i++) {
    if(!c[i]) {
      v.push_back(i);
      for(int j = i*i; j < N; j+=i) c[j] = true;
    }
  }
}

void solve()
{
  int n;
  cin >> n;
  vector<int> a(n);
  map<int, int> mp;

  for (int i = 0; i < n; i++){
    cin >> a[i];
  }

  for (int i = 0; i < n; i++){
    for (int j = 0; v[j] * v[j] <= a[i]; j++) {
      while (a[i] % v[j] == 0) {
        mp[v[j]]++;
        a[i] /= v[j];
      }
    }
    if (a[i] > 1) {
      mp[a[i]]++;
    }
  }
  
  for (auto it: mp) {
    if (it.second % n != 0) {
      cout << "NO" << endl;
      return;
    }
  }
  cout << "YES" << endl;
}

int32_t main()
{
  FAST_IO;
  #ifndef ONLINE_JUDGE
  freopen("input.txt","r",stdin);
  freopen("output.txt","w",stdout);
  #endif
  sieve();
  int t=1;cin>>t;
  for(int i=1;i<=t;i++){solve();}
  return 0;
}
