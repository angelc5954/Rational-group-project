#ifndef RATIONAL_H
#define RATIONAL_H

class Rational
{
    private:
        int m_numerator, m_denominator;
    public:
        Rational();
        Rational add(Rational);
        Rational subract(Rational);
        Rational multiply(Rational);
        Rational divide(Rational);
        void print();
};

#endif
