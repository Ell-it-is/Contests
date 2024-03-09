// ------- Check if string is a palindrome -------
bool IsPalindrome(string &s) {
  int n = Size(s);
  Repeat (n / 2, i) {
    if (s[i] != s[n - 1 - i]) return false;
  }
  return true;
}


// ------- Prefix and suffix of word letters -------
// This can be used for string analysis

// Ex.: s: saoamaestringsomestring
// Ex.: t: "some"
//      pre = { 0, 2, 4, 6 }
//      suf = { 13, 14, 15, 16 }

string s;
string t;
int n;
int m;
V<int> pre(m), suf(m);
{
  int j = 0;
  Each (s, ch, i) {
    if (ch == t[j]) {
      pre[j++] = i;
    }
  }

  j = m;
  EachBack(s, ch, i) {
    if (ch == t[j - 1]) {
      suf[--j] = i;
    }
  }
}






