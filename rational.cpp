#include"rational.h"
#include<iostream>

Rational::Rational(int n, int d)
{ 
    m_numerator = n;
    m_denominator = d;
}
Rational Rational::add(const Rational &r)
{
    unsigned n  = r.n * d + r.d * n;
    unsigned d  = r.d * d;
    Rational temp(n, d);
    return temp; 
}
Rational Rational::subtract(const Rational &r)
{
    unsigned n  = r.n * d - r.d * n;
    unsigned d  = r.d * d;
    Rational temp(n, d);
    return temp;
}
Rational Rational::multiply(const Rational &r)
{
    unsigned n  = r.n * d * r.d * n;
    unsigned d  = r.d * d;
    Rational temp(n, d);
    return temp;
}
Rational Rational::divide(const Rational &r)
{
    unsigned n  = r.n * d / r.d * n;
    unsigned d  = r.d * d;
    Rational temp(n, d);
    return temp;
}
  
void Rational::print()
{
    std::cout << add(r) << std::endl;
    std::cout << subtract(r) << std::endl;
    std::cout << multiply(r) << std::endl;
    std::cout << divide(r) << std::endl;  
}
