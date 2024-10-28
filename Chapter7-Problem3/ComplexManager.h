#ifndef COMPLEXMGR_H
#define COMPLEXMGR_H

#include "Complex.h"

class ComplexManager {
public:
    Complex ComplexAdd(const Complex& a, const Complex& b); // 복소수 합
    Complex ComplexSub(const Complex& a, const Complex& b); // 복소수 차
};

#endif

