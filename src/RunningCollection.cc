#include "Validation/PlaygroundEDProducer/interface/RunningCollection.h"

inline RunningCollection::RunningCollection()
{
    Nchannels = 234;

    for(int i=0; i<Nchannels; ++i)
    {
        RunningStatistics instance;
        mVecRunningStatistics.push_back(instance);
    }
}

inline RunningCollection::~RunningCollection() {}

inline std::vector<RunningStatistics> RunningCollection::get_vector_running_statistics()
{
    return mVecRunningStatistics;
}

inline void RunningCollection::add_entry(int channleId, double value, double cm)
{
    if(channleId>=234) {
        printf("[ERROR] RunningCollection::add_entry: the channel ID is out of scope\n");
        return;
    }

    mVecRunningStatistics[channleId].add_entry(cm, value);
}

inline void RunningCollection::write_csv_file() {};

