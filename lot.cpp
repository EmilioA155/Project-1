#include "lot.h"
#include <cstring>

Customer::Customer() {
    id = -1;
    name[0] = '\0';
    phone[0] = '\0';
    arrival[0] = '\0';
    departure[0] = '\0';
}

GarageSystem::GarageSystem() {
    m = 0;
    n = 0;
    customerCount = 0;

    //all garage spaces to -1
    for (int g = 0; g < MAX_GARAGES; g++) {
        for (int s = 0; s < MAX_SPACES; s++) {
            garages[g][s] = -1;
        }
    }

    occupancyFile[0] = '\0';
    customersFile[0] = '\0';
    interactionsFile[0] = '\0';
}
