#include "DataFormats/Common/interface/Wrapper.h"
#include "Validation/PlaygroundEDProducer/interface/hgcalhit.h"

namespace {
    struct dictionary {
        DetectorId detId;
        Hit hit;
        edm::Wrapper<Hit> wra_Hit;
    };
}
