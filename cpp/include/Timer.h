#include <iostream>
#include <chrono>

namespace utils{


class Timer
{
public:
    Timer() : beg_(clock_::now()) {std::cout << "Reset Timer2" << std::endl;}
    void reset() { beg_ = clock_::now(); std::cout << "Reset Timer" << std::endl; }
    double elapsed() const { 
        return std::chrono::duration_cast<second_>
            (clock_::now() - beg_).count(); }

private:
    typedef std::chrono::high_resolution_clock clock_;
    typedef std::chrono::duration<double, std::ratio<1> > second_;
    std::chrono::time_point<clock_> beg_;
};
};