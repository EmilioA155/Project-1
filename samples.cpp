#include "park.h"
#include "samples.h"
#include "reconfig.h"
#include "lot.h"
#include <cstdio>
#include <cstring>

void processSamples(GarageSystem& sys) {
    FILE* f = fopen(sys.interactionsFile, "r");

    if (!f) {
        printf("Error opening interactions file\n");
        return;
    }

    printf("Processing interactions...\n");

    char line[256];

    while (fgets(line, sizeof(line), f)) {
     printf("Line: %s" , line);
      
        if (line[0] == 'P') {
            int id;

            sscanf(line, "P: %d", &id);

            printf("Pickup request for ID: %d\n", id);

            pickupCar(sys, id);
        }

        
        else if (line[0] == 'D') {
            Customer c;

            c.id = sys.customerCount + 1;

            sscanf(line, "D: %[^,], %[^,], %s",
                   c.name, c.phone, c.arrival);

            sys.customers[sys.customerCount++] = c;

            printf("Drop-off: %s ID=%d\n", c.name, c.id);

            assignParking(sys, c);
        }
    }

    fclose(f);
}
