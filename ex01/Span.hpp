#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <algorithm>
#include <set>

class Span
{
    private:
       unsigned int     size;
       std::set<int> span;
    public:
        Span();
        Span(unsigned int N);
        Span(const Span &other);
        Span    &operator=(const Span &other);
        void    addNumber(int n);
        void    addNumber(int nSpan, int maxVal);
        unsigned int shortestSpan(void) const;
        unsigned int longestSpan(void) const;
        ~Span();

    class SpanException : public std::exception {

        public:
            virtual const char* what() const throw()
            {
                return ("SpanException");
            }
    };
        
};

#endif