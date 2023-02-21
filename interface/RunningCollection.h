#ifndef __RUNNING_COLLECTION__
#define __RUNNING_COLLECTION__

#include <vector>
#include "RunningStatistics.h"

class RunningCollection{
    public:
        inline RunningCollection();
        inline ~RunningCollection();

        inline void add_entry(int channleId, double value, double cm);
        inline std::vector<RunningStatistics> get_vector_running_statistics();
        inline void write_csv_file();

    private:
        int Nchannels;
        std::vector<RunningStatistics> mVecRunningStatistics;
};

#endif
