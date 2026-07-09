#include <bits/stdc++.h>
using namespace std;

int ans = 0;

void dfs(int src, vector<vector<int>> &adj, vector<bool> &visited,
         vector<int> &cats, int m, int cnt)
{
    visited[src] = true;

    if (cats[src])
        cnt++;
    else
        cnt = 0;

    if (cnt > m)
        return;

    bool leaf = true;

    for (int child : adj[src])
    {
        if (!visited[child])
        {
            leaf = false;
            dfs(child, adj, visited, cats, m, cnt);
        }
    }

    if (leaf)
        ans++;
}

int main()
{
    int n, m;
    cin >> n >> m;

    vector<int> cats(n + 1);

    for (int i = 1; i <= n; i++)
        cin >> cats[i];

    vector<vector<int>> adj(n + 1);

    for (int i = 0; i < n - 1; i++)
    {
        int u, v;
        cin >> u >> v;

        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    vector<bool> visited(n + 1, false);

    dfs(1, adj, visited, cats, m, 0);

    cout << ans << endl;

    return 0;
}