#include "pch.h" 
#include "Longlong.h"

using namespace std;

Longlong::Longlong() : h(0), l(0) {}
Longlong::Longlong(long high, unsigned long low) : h(high), l(low) {}
Longlong::Longlong(const Longlong& other) : h(other.h), l(other.l) {}

void Longlong::Init(long high, unsigned long low) { h = high; l = low; }

void Longlong::Read() {
    cout << "h, l: ";
    cin >> h >> l;
}

void Longlong::Display() const {
    cout << "(" << h << ", " << l << ")\n";
}

string Longlong::toString() const {
    return "(" + to_string(h) + ", " + to_string(l) + ")";
}

Longlong Longlong::operator+(const Longlong& o) const {
    Longlong r;
    r.l = l + o.l;
    r.h = h + o.h + (r.l < l ? 1 : 0);
    return r;
}

Longlong Longlong::operator-(const Longlong& o) const {
    Longlong r;
    if (l >= o.l) {
        r.l = l - o.l;
        r.h = h - o.h;
    }
    else {
        r.l = l - o.l;
        r.h = h - o.h - 1;
    }
    return r;
}

Longlong Longlong::operator*(const Longlong& o) const {
    Longlong r;
    unsigned long long t = (unsigned long long)l * o.l;
    r.l = t;
    r.h = t >> 32;
    t = (long long)h * o.l + (long long)o.h * l;
    r.h += t;
    return r;
}

bool Longlong::operator==(const Longlong& o) const {
    return h == o.h && l == o.l;
}

Longlong Longlong::add(const Longlong& o) const { return *this + o; }
Longlong Longlong::sub(const Longlong& o) const { return *this - o; }
Longlong Longlong::mul(const Longlong& o) const { return *this * o; }
bool Longlong::equ(const Longlong& o) const { return *this == o; }

bool Longlong::greater(const Longlong& o) const { return h > o.h || (h == o.h && l > o.l); }
bool Longlong::less(const Longlong& o) const { return h < o.h || (h == o.h && l < o.l); }