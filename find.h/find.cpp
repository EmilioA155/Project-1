#include "find.h"

void locateCar(const GarageSystem& sys, int id, int& garage, int& slot) {
    for (int g = 0; g < sys.m; g++) {
        for (int s = 0; s < sys.n; s++) {
            if (sys.garages[g][s] == id) {
                garage = g;
                slot = s;
                return;
            }
        }
    }
    garage = -1;
    slot = -1;
}
