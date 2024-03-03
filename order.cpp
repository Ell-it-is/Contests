#include <bits/stdc++.h>
#include "C:\\Users\\Me\\Documents\\ClipboardXX-master\\include\\clipboardxx.hpp"
using namespace std;
typedef long long ll;
const double PI = 3.141592653589793238462643383279;
const int MOD = 998244353;


// to build .exe file: g++ order.cpp -o order
// Online judge (atcoder, codeforces) performs ~= (4 * 10^8 operaci / sec)
// -> 0.4 operaci / nanosec -> 1 operace / 2.5 nanosec
vector<pair<string, float>> get_time_to_execute(ll n) {
    float time_per_operation = 0.0000000025;
    vector<pair<string, float>> complexities;
    complexities.push_back({"O(1)", time_per_operation * 1});
    complexities.push_back({"O(logn)", time_per_operation * log2(n)});
    complexities.push_back({"O(n)", time_per_operation * n});
    complexities.push_back({"O(nlogn)", time_per_operation * n * log2(n)});
    float max = 20; // too long time
    if (n >= 100'000) { // 25s
        complexities.push_back({"O(n^2)", max});
    } else {
        complexities.push_back({"O(n^2)", time_per_operation * n * n});
    }
    if (n >= 2000) { // 20s
        complexities.push_back({"O(n^3)", max});
    } else {
        complexities.push_back({"O(n^3)", time_per_operation * n * n * n});
    }
    if (n >= 33) { // 21s
        complexities.push_back({"O(2^n)", max});
    } else {
        complexities.push_back({"O(2^n)", time_per_operation * pow(2, n)});
    }
    return complexities;
}

ll input_to_number(string input) {
    ll n = 0;
    if (input.find('k') < input.length()) {
        n = std::stoll(input.substr(0, input.length() - 1));
        n *= 1000;
    }
    else if (input.find('m') < input.length()) {
        n = std::stoll(input.substr(0, input.length() - 1));
        n *= 1'000'000;
    }
    else if (input.find('b') < input.length()) {
        n = std::stoll(input.substr(0, input.length() - 1));
        n *= 1'000'000'000;
    } else {
        n = std::stoll(input);
    }
    return n;
}

int main() {
    ios::sync_with_stdio(false);
    cout << "[thousand - k, milion - m, bilion - b]" << "\n";
    cout << "tc: ";
    string input_tt;
    cin >> input_tt;
    ll tt = input_to_number(input_tt);
    
    cout << "n: ";
    string input_n;
    cin >> input_n;
    ll n = input_to_number(input_n);

    cout << "time(s): ";
    float time;
    cin >> time;
    
    n *= tt;
    if (n <= 0) return 0;
    auto complexities = get_time_to_execute(n);
    string order = "";
    for (int i = 0; i < complexities.size(); i++) {
        if (complexities[i].second <= time) {
            if (i > 0) order += ", ";
            order += complexities[i].first;
        }
    }
    std::stringstream ss;
    ss << "// " << "tc: " << std::to_string(tt) << "\n"
    << "// " << "n: " << std::to_string(n / tt) << "\n"
    << "// " << "time(s): " << std::to_string((int)time) << "\n"
    << "// " << "order: " << order;
    std::string ans = ss.str();
    clipboardxx::clipboard clipboard;
    // copy
    clipboard << ans;
    // paste
    std::string paste_text;
    clipboard >> paste_text;
    return 0;
}