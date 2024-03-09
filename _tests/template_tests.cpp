#define CATCH_CONFIG_MAIN // This tells catch-mini to provide a main() - only do this in one cpp file
#define TC TEST_CASE
#define RQ REQUIRE
#include "catch.hpp"
#include "../_template/template_functions.hpp"

// Useful testing data
int N = 7;
V<int> ascending = { 1, 2, 3, 4, 5, 6, 7 };
V<int> descending = { 7, 6, 5, 4, 3, 2, 1 };
V<int> non_ascending = { 7, 7, 6, 5, 4, 4, 3, 2, 1, 1 };
V<int> non_descending = { 1, 1, 2, 3, 4, 4, 5, 6, 7, 7 };

V<pair<int, int>> test_vector_pairs = { {1, 3}, {1, 4}, {2, 5}, {5, 3}, {4, 8} };
M<string, int> test_map = { {"a", 1}, {"b", 2}, {"d", 7} };

// Special "TC" used for initialization instead of main method
TC("INIT") {
  __DEBUG__("INIT...");
  srand((unsigned) time(NULL)); 
}

// Useful testing purpose methods
int Rand(int start, int last) {
  return start + (rand() % (last - start + 1));
}


auto CheckInternalStateOfLoop(int index, int i, int pos) {
  RQ(i == index && pos == index + 1);
}

auto CheckInternalStateOfLoop(int index, int i, int pos, auto it, auto val) {
  CheckInternalStateOfLoop(index, i, pos);
  RQ(val == (*it));
}

auto CheckInternalStateOfLoop(int index, int i, int pos, auto it, auto key, auto val) {
  CheckInternalStateOfLoop(index, i, pos);
  RQ(key == it->first);
  RQ(val == it->second);
}

TC("For_Loops_Rep") {
  __DEBUG__("For_Loops_Rep...");
  int index = 0;
  bool run = false;
  // rep(cnt)
  rep (N) {
    run = true;
    CheckInternalStateOfLoop(index, i, pos);
    index++;
  }
  RQ(run);
  
  // rep_back(cnt)
  index = N - 1;
  run = false;
  rep_back (N) {
    run = true;
    CheckInternalStateOfLoop(index, i, pos);
    index--;
  }
  RQ(run);
}

TC("For_Loops_Go") {
  __DEBUG__("For_Loops_Go...");
  // Arrange
  init(int, from, to, index, 0);
  bool run = false;
  auto arrange = [&](int &from, int &to, int &index, bool &run) {
    from = 0;
    to = 6;
    index = from;
    run = false;
  };
  
  // go(from, to)
  arrange(from, to, index, run);
  go (from, to) {
    run = true;
    CheckInternalStateOfLoop(index, i, pos);
    index++;
  }
  if (from <= to) RQ(run);

  // go(from, to, x, val)
  arrange(from, to, index, run);
  go (from, to, ascending, num) {
    run = true;
    CheckInternalStateOfLoop(index, i, pos, it, num);
    index++;
  }
  if (from <= to) RQ(run);

  // go_back(from, to)
  arrange(from, to, index, run);
  go_back (from, to) {
    run = true;
    CheckInternalStateOfLoop(index, i, pos);
    index--;
  }
  if (from >= to) RQ(run);

  // go_back(from, to, x, val)
  arrange(from, to, index, run);
  go_back (from, to, ascending, num) {
    run = true;
    CheckInternalStateOfLoop(index, i, pos, it, num);
    index--;
    __DEBUG__(index, from, to, run);
  }
  __DEBUG__(index, from, to, run);
  if (from >= to) RQ(run);
}

TC("For_Loops_Each") {
  __DEBUG__("For_Loops_Each...");

  // each(x)
  int index = 0;
  bool run = false;
  each (ascending) {
    run = true;
    CheckInternalStateOfLoop(index, i, pos, it, val);
    index++;
  }
  RQ(run); 

  // each_back(x)
  index = N - 1;
  run = false;
  each_back(ascending) {
    run = true;
    CheckInternalStateOfLoop(index, i, pos, it, val);
    index--;
  }
  RQ(run);
}

TC("Each_Pair") {
  __DEBUG__("Each_Pair...");

  int M = sz(test_vector_pairs);
  // each_pair(x)
  int index = 0;
  bool run = false;
  each_pair(test_vector_pairs) {
    run = true;
    CheckInternalStateOfLoop(index, i, pos, it, key, val);
    index++;
  }
  if (M > 0) RQ(run);

  // each_pair(x) - second test
  index = 0;
  run = false;
  each_pair(test_map) {
    run = true;
    CheckInternalStateOfLoop(index, i, pos, it, key, val);
    index++;
  }
  if (M > 0) RQ(run);

  // each_pair_back(x)
  index = M - 1;
  run = false;
  each_pair_back(test_vector_pairs) {
    run = true;
    CheckInternalStateOfLoop(index, i, pos, it, key, val);
    index--;
  }
  if (M > 0) RQ(run);

  // each_pair_back(x) - second_test
  index = sz(test_map) - 1;
  run = false;
  each_pair_back(test_map) {
    run = true;
    CheckInternalStateOfLoop(index, i, pos, it, key, val);
    index--;
  }
  if (M > 0) RQ(run);
}

TC("Sequence_Order") {
  __DEBUG__("Sequence_Order...");

  // Asc(vector)
  RQ(Asc(ascending) == true);
  RQ(Asc(descending) == false);
  RQ(Asc(non_ascending) == false);
  RQ(Asc(non_descending) == false);

  // Desc(vector)
  RQ(Desc(ascending) == false);
  RQ(Desc(descending) == true);
  RQ(Desc(non_ascending) == false);
  RQ(Desc(non_descending) == false);

  // NonAsc(vector)
  RQ(NonAsc(ascending) == false);
  RQ(NonAsc(descending) == true);
  RQ(NonAsc(non_ascending) == true);
  RQ(NonAsc(non_descending) == false);

  // NonDesc(vector)
  RQ(NonDesc(ascending) == true);
  RQ(NonDesc(descending) == false);
  RQ(NonDesc(non_ascending) == false);
  RQ(NonDesc(non_descending) == true);
}

TC("Vector_Sums") {
  __DEBUG__("Vector_Sums...");

  // Psum(vector)
  V<int> psum = Psum(ascending);
  int cur_sum = 0;
  each (ascending) {
    cur_sum += val;
    RQ(cur_sum == psum[i]);
  }

  // Ssum(vector)
  V<int> ssum = Ssum(ascending);
  cur_sum = 0;
  each_back (ascending) {
    cur_sum += val;
    RQ(cur_sum == ssum[i]);
  }

  // SumRange(psum, left, right)
  int left = 0;
  int right = 6;
  int sum_range_test = SumRange(psum, left, right);
  int sum_range_correct = 0;
  go (left, right, ascending, num) {
    sum_range_correct += num;
  }
  __DEBUG__(sum_range_test, sum_range_correct);
  RQ(sum_range_test == sum_range_correct);
}

TC("Vector_Adjacent") {
  __DEBUG__("Vector_Adjacent...");

  // AllAdj(v, lambda)
  bool successor_test = AllAdj(ascending, when_adj(x + 1 == y));
  RQ(successor_test);

  // AnyAdj(v, lambda)
  bool any_adj_test = AnyAdj(ascending, when_adj(x + 1 == y));
  RQ(any_adj_test);

  // NoneAdj(v, lambda)
  bool none_adj_test = NoneAdj(ascending, when_adj(x > y));
  RQ(none_adj_test);
}

TC("Second_Min_Max") {
  __DEBUG__("Second_Min_Max...");

  // SecondMin(x)
  int second_min = SecondMin(ascending);
  RQ(second_min == 2);

  // SecondMax(x)
  int second_max = SecondMax(ascending);
  RQ(second_max == 6);
}