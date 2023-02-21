#ifndef __RUNNING_STATISTICS__
#define __RUNNING_STATISTICS__

#include <stdio.h>
#include <cmath>

struct statistics {
    double nevents;
    double mean_x; // CM mode adc
    double mean_y; // normal channel adc
    double variance_x;
    double variance_y;
    double covariance;
    double correlation;
    double slope;
    double intercept;
};

class RunningStatistics {
    public:
        inline RunningStatistics();
        inline ~RunningStatistics(){};

        inline void add_entry(double x, double y);
        inline void print_statistics();
        inline double get_correlation();
        inline double get_slope();
        inline double get_intercept();
        inline double get_mean_adc(); // return mean_y

    private:
        statistics current;
        statistics next;
};

#endif
