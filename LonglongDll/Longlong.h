#pragma once

#ifdef LONGLONGDLL_EXPORTS
#define LONGLONGDLL_API __declspec(dllexport)
#else
#define LONGLONGDLL_API __declspec(dllimport)
#endif

#include <string>
#include <iostream>

class LONGLONGDLL_API Longlong {
    long h;
    unsigned long l;

public:
    Longlong();
    Longlong(long high, unsigned long low);
    Longlong(const Longlong& other);

    void Init(long high = 0, unsigned long low = 0);
    void Read();
    void Display() const;
    std::string toString() const;

    Longlong operator+(const Longlong& o) const;
    Longlong operator-(const Longlong& o) const;
    Longlong operator*(const Longlong& o) const;
    bool operator==(const Longlong& o) const;

    Longlong add(const Longlong& o) const;
    Longlong sub(const Longlong& o) const;
    Longlong mul(const Longlong& o) const;
    bool equ(const Longlong& o) const;
    bool greater(const Longlong& o) const;
    bool less(const Longlong& o) const;
};
