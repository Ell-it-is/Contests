#include <bits/stdc++.h>
using namespace std;
using llong = long long;

int Rand(int start, int last) {
  return start + (rand() % (last - start + 1));
}

int main() {
  srand((unsigned) time(NULL));

  vector<string> pick_one;
  pick_one.reserve(10'000);
  
  vector<string> graphs = {
    "BASE BFS", "BASE DFS", "BFS + parents + lengths", "BFS - display path",
    "BFS - bipartite graph"
  };
  pick_one.insert(pick_one.end(), graphs.begin(), graphs.end());
  
  vector<string> binary = {
    "AllSubsets"
  };
  pick_one.insert(pick_one.end(), binary.begin(), binary.end());

  vector<string> strings = {
    
  };
  pick_one.insert(pick_one.end(), strings.begin(), strings.end());

  vector<string> math = {
    
  };
  pick_one.insert(pick_one.end(), math.begin(), math.end());

  vector<string> searching = {
    
  };
  pick_one.insert(pick_one.end(), searching.begin(), searching.end());

  vector<string> sorting = {
    
  };
  pick_one.insert(pick_one.end(), sorting.begin(), sorting.end());


  int rand_idx = Rand(0, (int) pick_one.size() - 1);
  string picked = pick_one[rand_idx];
  cout << picked << "\n";
  
  return 0;
}

// ------- IMPLEMENT DOWN HERE -------


























