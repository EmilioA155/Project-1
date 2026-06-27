#include "lot.h"
#include <cstring>
#include <cstdio>

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

    // initialize all spaces to empty (-1)
    for (int g = 0; g < MAX_GARAGES; g++) {
        for (int s = 0; s < MAX_SPACES; s++) {
            garages[g][s] = -1;
        }
    }

    occupancyFile[0] = '\0';
    customersFile[0] = '\0';
    interactionsFile[0] = '\0';
}


void readOccupancy(GarageSystem& sys) {
    FILE* f = fopen(sys.occupancyFile, "r");

    if (!f) {
        printf("Error opening occupancy file\n");
        return;
    }

    printf("Loading occupancy...\n");

    for (int i = 0; i < sys.m; i++) {
        for (int j = 0; j < sys.n; j++) {
            fscanf(f, "%d,", &sys.garages[i][j]);
            printf("%d ", sys.garages[i][j]);  // debug
        }
        printf("\n");
    }

    fclose(f);
}
