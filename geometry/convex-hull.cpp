#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long

#define LIM 1000000007

using namespace std;

// define um vetor/ponto 2D
struct PT {
    #define T long long
    T x, y;

    // construtor
    PT(T _x = 0, T _y = 0): x(_x), y(_y) {}

    // soma entre vetores
    PT operator + (const PT &p) const { return PT(x + p.x, y + p.y); }

    // subtracao entre vetores
    PT operator - (const PT &p) const { return PT(x - p.x, y - p.y); }

    // multiplicacao por escalar
    PT operator * (T c) const { return PT(c * x, c * y); }

    // produto escalar
    T operator * (const PT &p) const { return x * p.x + y * p.y; }

    // produto vetorial
    T operator % (const PT &p) const { return x * p.y - y * p.x; }

    // menor que
    bool operator < (const PT &p) const { return x == p.x ? y < p.y : x < p.x; }

    // igualdade
    bool operator == (const PT &p) const { return x == p.x && y == p.y; }

    // operator de escrita
    friend std::ostream & operator << (std::ostream &os, const PT &p) { return os << p.x << ' ' << p.y; }

    // operator de leitura
    friend std::istream & operator >> (std::istream &is, PT &p) { return is >> p.x >> p.y; }
};

vector<PT> convex_hull(vector<PT> &points) {
    if (points.size() <= 1)
        return points;

    sort(points.begin(), points.end());

    // construir upper hull e lower hull
    ll k = 0;
    vector<PT> hull;

    return hull;
}