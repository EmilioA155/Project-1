#include "reconfig.h"
#include "find.h"

void pickupCar(GarageSystem& sys, int id) {
    int g, s;
    locateCar(sys, id, g, s);

    if (g < 0) return;

    
    sys.garages[g][s] = -1;
}
