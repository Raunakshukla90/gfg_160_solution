class Solution {
	public:
	void dfs(int node,
	vector<int>& visited,
	vector<vector<int>> & adj)
	{
		visited[node] = 1;

		for (int neigh : adj[node])
			{
			if (visited[neigh] == -1)
				{
				dfs(neigh, visited, adj);
			}
		}
	}

	int countConnected(int V, vector<vector<int>> & edges) {
		// code here
		vector<vector<int>> adj(V);
		int n = edges.size();
		for (auto e:edges) {
			int u = e[0];
			int v = e[1];
			adj[u].push_back(v);
			adj[v].push_back(u);
		}
		vector<int> visited(V, -1);
		dfs(0, visited, adj);
		int count = 1;
		for (int i = 0; i<V; i++) {
			if (visited[i] == -1) {
				count++;
				dfs(i, visited, adj);
			}
		}
		return count;
	}
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna