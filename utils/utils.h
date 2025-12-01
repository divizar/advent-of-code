#ifndef UTILS_H
#define UTILS_H

#include <bits/stdc++.h>
using namespace std;

// Read all lines from stdin
static vector<string> read_lines() {
    vector<string> lines;
    string s;
    while (getline(cin, s)) {
        lines.push_back(s);
    }
    return lines;
}

// Split string by a delimiter
static vector<string> split(const string& s, char delim) {
    vector<string> result;
    string temp;
    stringstream ss(s);
    while (getline(ss, temp, delim)) {
        result.push_back(temp);
    }
    return result;
}

// Convert string to int
static int to_int(const string& s) {
    return stoi(s);
}

// Convert string to long long
static long long to_ll(const string& s) {
    return stoll(s);
}

#endif
