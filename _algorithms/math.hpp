// ------- Get all divisors of a number -------
V<int> GetAllDivisors(int n) {
  V<int> divs;

  // Let's go through divisors 'd', 1...sqrt(n)
  Repeat ((int)sqrt(n), i, d) {
    // if d | n, then numbers 'd' and 'n / d' are divisors of 'n'
    if (n % d == 0) {
      divs.pb(d);
      // handle case when 'd' == 'n / d', to not count same divisor twice
      if (d == n / d) continue;
      divs.pb(n / d);
    }
  }

  return divs;
}


// ------- Count all divisors of a number -------
int CountDivisors(int n) {
  int cnt = 0;

  Repeat ((int)sqrt(n), i, d) {
    if (n % d == 0) {
      cnt += 2;
      if (d == n / d) --cnt;
    }
  }

  return cnt;
}


// ------- Get gcd of a list of numbers -------
int GetGcdOfNumbers(V<int> &numbers) {
  int n = Size(numbers);
  int gcd = numbers.front();
  
  Go (1, n - 1, numbers, x, i) {
    gcd = std::gcd(gcd, x);
  }

  return gcd;
}


// ------- Euclid Algorithm -------
// Based on the fact that common divisors of 'a' and 'b'
// are the same as common divisors of 'a - b' and 'b', where a > b
int GcdSlow(int a, int b) {
  while (a != b) {
    if (a < b) swap(a, b);
    a -= b;
  }

  return a;
}


// ------- Euclidean Algorithm -------
int Gcd (int a, int b) {
  // make condition a >= b, always true
  if (a < b) swap(a, b);
  
  // As long as 'b' (the "smaller" value) is positive
  while (b) {
    // Take remainder of ('a' / 'b') and make 'a' that remainder
    a %= b;
    // effectively making 'a' smaller than 'b' each time
    // since 'a' can get values in [0...b - 1]
    // -> swap them to keep our initial condition
    swap(a, b);
  }
  // Now 'b' is 0, we found our gcd that is stored in 'a'
  
  return abs(a);
}


// ------- LCM -------
int Lcm (int a, int b) {
  return a / Gcd(a, b) * b;
}


// ------- Is number a prime? -------
int IsPrime (int n) {
  Go (2, (int)sqrt(n), d) {
    if (n % d == 0) {
      return false;
    }
  }
  
  return n >= 2;
}


// ------- Sieve of Eratosthenes -------
// Pretty but slow, should learn better techniques later
// Prob smth like segmented sieve
V<int> Sieve(int n) {
  V<int> primes;
  V<bool> crossed(n + 1);
  crossed[1] = true;
  int last_prime_idx = 1;

  auto next_prime = [&] {
    while (last_prime_idx <= n && crossed[last_prime_idx]) {
      last_prime_idx++;
    }
    if (last_prime_idx <= n) {
      primes.pb(last_prime_idx);
    }
  };
  
  auto cross_multiples_of = [&](int prime) {
    int k = 1;
    while (k * prime <= n) {
      crossed[k * prime] = true;
      k++;
    }
  };

  while (last_prime_idx <= n) {
    next_prime();
    cross_multiples_of(primes.back());
  }

  return primes;
}


// ------- Prime Factorization -------
V<int> PrimeFact(int n) {
  vector<int> prime_factors;
  // Primes that divide 'n' can be at most sqrt(n)
  Go (2, (int)sqrt(n), d) {
    // For each divisor 'd' I try to divide n as many times as I can
    while (n % d == 0) {
      // Why am I sure 'd' is always a prime?
      // I already know I divided 'n' by some prime as many times as possible
      // so it cannot be divisible later on by any multiple of said prime
      // it is kind of the idea of sieve
      prime_factors.pb(d);
      n /= d;
    }
  }
  // if 'n' is already a prime, the only prime factor is itself
  if (n >= 2) {
    prime_factors.pb(n);
  }

  return prime_factors;
}


// ------- Euler's totient -------
// How many integers are relatively prime to 'n'?
// don't really get this stolen implementation... R.I.P, brain too dead atm
int Phi(int n) {
  // 1 <= k <= n, where Gcd(n, k) = 1
  int k = n;
  Go (2, (int) sqrt(n), d) {
    if (n % d == 0) {
      while (n % d == 0) {
        n /= d;
      }
      k -= k / d;
    }
  }

  if (n >= 2) {
    k -= k / n;
  }
  
  return k;
}


// ------- Get Nth number in Fibonacci sequence -------
int NthFib(int n) {
  int a = 0;
  int b = 1;
  if (n == 0) return a;
  if (n == 1) return b;
  
  int c = -1;
  Repeat (n - 1) {
    c = a + b;
    a = b;
    b = c;
  }
  
  return c;
}