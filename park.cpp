#include "park.h"
#include <cstdio>

void assignParking(GarageSystem& sys, const Customer& c) {
    for (int g = 0; g < sys.m; g++) {
        for (int s = 0; s < sys.n; s++) {
            if (sys.garages[g][s] == -1) {
                printf("Parking car %d in garage %d spot %d\n", c.id, g, s);
                sys.garages[g][s] = c.id;
                return;  
            }
        }
    }

    // If no space found
    printf("No available parking space for car %d\n", c.id);
}
