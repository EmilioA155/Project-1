#include <cstdio>
#include "config.h"
#include "samples.h"
#include "status.h"
#include  "lot.h"

int main() {
    char configFile[64];
    printf("Enter configuration filename: ");
    scanf("%s", configFile);

    GarageSystem sys;

    printf("Reading config...\n");
    readConfig(sys, configFile);
    printf("Loading occupancy...\n");
    readOccupancy(sys);

    printf("Processing samples...\n");
    processSamples(sys);

    printf("Writing output...\n");
    outputLot(sys, "final_output.txt");

    printf("Done.\n");

    return 0;
}
