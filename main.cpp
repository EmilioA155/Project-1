#include <cstdio>
#include "config.h"
#include "samples.h"
#include "status.h"

int main() {
    char configFile[64];
    printf("Enter configuration filename: ");
    scanf("%s", configFile);

    GarageSystem sys;
    readConfig(sys, configFile);

    processSamples(sys);

    outputLot(sys, "final_output.txt");

    return 0;
}
