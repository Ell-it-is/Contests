// ------- BASE DFS ------- 
// TC: O(n + m), n: # of verticies, m: # of edges

V<V<int>> adj; // Graph representation
V<int> vis; // Keeps knowledge of verticies we already visited
auto dfs = [&](auto&& dfs, int u) -> void {
  // Says we visited vertex 'u'
  vis[u] = true;
  // Goes through all adjacent verticies of vertex 'u', let's call each 'v'
  Each(adj[u], v) {
    // If vertex 'v' was not visited yet, it is a candidate for dfs of vertex 'v'
    if (!vis[v]) {
      dfs(dfs, v);
    }
  }
};


// ------- BASE BFS -------
// TC: O(n + m), n: # of verticies, m: # of edges

V<V<int> adj; // Graph representation
V<int> vis; // Keeps knowledge of verticies we already visited
Q<int> que; // Keep queue of verticies whose neighbours we are going to visit

vis[1] = true;
que.push(1);

while (!que.empty()) {
  int u = que.front();
  que.pop();
  
  Each (adj[u], v) {
    if (!vis[v]) {
      vis[v] = true;
      que.push(v);
    }
  }
}

// ------- BFS + Parents + Lengths -------
// TC: O(n + m), n: # of verticies, m: # of edges

V<V<int>> adj;
// p -> p[vertex] tells us who is parent of 'vertex'
// d -> d[vertex] tells us how far is 'vertex' from 'source vertex'
V<int> vis, p, d;
Q<int> que;

p[1] = -1;
vis[1] = true;
que.push(1);

while (!que.empty()) {
  int u = que.front();
  que.pop();

  Each (adj[u], v) {
    if (!vis[v]) {
      vis[v] = true;
      que.push(v);
      p[v] = u;
      d[v] = d[u] + 1;
    }
  }
}


// ------- BFS - display path from some vertex 'v' to 'source vertex' -------
// You are given BFS data structures
// Some vertex 'v', you know it exists in the same tree as 'source vertex'
int v;
V<int> path;
// I know source vertex has parent -1
// Therefore this says: while 'v' is not a 'source vertex'
while (p[v] != -1) {
  // Add vertex to path
  path.pb(v);
  // Say vertex is his parent -> move closer to 'source vertex'
  v = p[v];
}
// now 'path' contains the shortest path from 'v' to 'source vertex'
// (except the source vertex itself)


// ------- BFS - draw bipartite graph -------
// A Bipartite graph is a graph, where all edges with some verticies {u, v}
// satisfy a condition: color[u] != color[v]

V<V<int>> adj;
V<int> vis, color;
Q<int> que;

vis[1] = true;
que.push(1);
color[1] = 0; // We can think of 0 as 'blue' and 1 as 'red'

while (!que.empty()) {
  int u = que.front();
  que.pop();

  Each (adj[u], v) {
    if (!vis[v]) {
      vis[v] = true;
      que.push(v);
      // make all direct neighbours of 'u' opposite color 
      color[v] = !color[u];
    } else {
      // In case we found a vertex 'v' that was previously visited
      // and we are trying to visit it again from some other vertex
      // then it means we have found a vertex with deg(v) > 1
      // and we need to check if it's color is different from current
      if (color[v] == color[u]) {
        // It is impossible to build bipartite graph :(
      }
    }
  }
}
// We can build bipartite graph!
