#include "Mapset.h"

Mapset::Mapset()
{
    id = 0;
}

bool Mapset::isBlocked() {
    if(id == '1') {
        return true;
    } else {
        return false;
    }
}
