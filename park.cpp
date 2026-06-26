#include "park.h"

int assignParking(GarageSystem& sys, const Customer& c) {
    for (int g = 0; g < sys.m; g++) {
        for (int s = 0; s < sys.n; s++) {
            if (sys.garages[g][s] == -1) {
                sys.garages[g][s] = c.id;
                return g;
            }
        }
    }
    return -1;
}
