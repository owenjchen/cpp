#ifndef INLINE_H
#define INLINE_H

inline float max_function(float a, float b)
{
    if (a > b)
        return a;
    else
        return b;
}

//#define MAX_MACRO(a, b) a>b ? a : b

#define MAX_MACRO(a, b) (a)>(b) ? (a) : (b)

#endif