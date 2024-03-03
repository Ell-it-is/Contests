// TC: 2^n * n
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