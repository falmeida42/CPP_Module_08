#include "Span.hpp"

Span::Span() : size(0) {

}

Span::Span(unsigned int N) : size(N) {

}

Span::Span(const Span &other) : span(other.span), size(other.size) {

}

Span    &Span::operator=(const Span &other) {

    if (this != &other) {
        span.clear();
        span = other.span;
        size = other.size;
    }
    return (*this);
}

void    Span::addNumber(int n) {
    if (span.size() < size)
        span.insert(n);
    else
        throw Span::SpanException();
}

void    Span::addNumber(int nSpan, int maxVal) {

    unsigned int space = size - span.size();
    
    if (nSpan > space)
        throw Span::SpanException();
    
    for (int i = 0; i <= nSpan; i++) {
        span.insert(maxVal);
        maxVal--;
    }

}

unsigned int    Span::shortestSpan() const {
    
    unsigned int shortSpan = span.size();

    if (span.size() < 2)
        throw Span::SpanException();
    for (std::set<int>::const_iterator it = span.begin(); it != span.end();) {
        int i = *it;
        if (++it != span.end())
            i = *it - i;
        shortSpan = shortSpan < i ? shortSpan : i;
    }
    return shortSpan;
}

unsigned int    Span::longestSpan() const {
    if (span.size() < 2)
        throw Span::SpanException();
    return *span.rbegin() - *span.begin();
}

Span::~Span() {

}