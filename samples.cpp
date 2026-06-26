#include "samples.h"
#include "park.h"
#include "reconfig.h"
#include <cstdio>
#include <cstring>

void processSamples(GarageSystem& sys) {
    FILE* f = fopen(sys.interactionsFile, "r");
    if (!f) return;

    char line[256];

    while (fgets(line, sizeof(line), f)) {
        if (line[0] == 'P') {
            int id;
            sscanf(line, "P: %d", &id);
            pickupCar(sys, id);
        }
        else if (line[0] == 'D') {
            Customer c;
            c.id = sys.customerCount + 1;

            sscanf(line, "D: %[^,], %[^,], %s",
                   c.name, c.phone, c.arrival);

            sys.customers[sys.customerCount++] = c;

            assignParking(sys, c);
        }
    }

    fclose(f);
}
