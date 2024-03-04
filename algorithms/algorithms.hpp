// TC: O(2^n * n)
void AllSubsets(int n) {
  // go through all numbers -> 0...(2^n - 1)
  // Ex.: for n = 3
  // Ex.: [0...7] -> [000...111] in base 2
  rep (1 << n, mask) {
    // go through all bit positions where 'mask' could have bit set on
    // Ex.: [0, 2]
    rep (n) {
      // if bit at the i-th position is set on
      // Ex.: i-th position = 2
      // Ex.: mask:        101
      //      (1 << 2):  & 100
      //                 = 100 (result is always positive, if bit was set on)
      if (mask & (1 << i)) {
        
      }
    }
  }
}

V<V<int>> adj_list; // Graph representation
V<int> vis; // Keeps knowledge of verticies we already visited
// TC: O(n + m), n: # of verticies, m: # of edges
auto dfs = [&](auto&& dfs, int u) -> void {
  // Says we visited vertex 'u'
  vis[u] = true;
  // Goes through all adjacent verticies of vertex 'u', let's call each 'v'
  Each(adj_list[u], v) {
    // If vertex 'v' was not visited yet, it is a candidate for dfs of vertex 'v'
    if (!vis[v]) {
      dfs(dfs, v);
    }
  }
};

