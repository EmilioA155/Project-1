#ifndef LOT_H
#define LOT_H

#define MAX_GARAGES 20
#define MAX_SPACES  50
#define MAX_CUSTOMERS 200
#define MAX_STR 64

class Customer {
public:
    int id;
    char name[MAX_STR];
    char phone[MAX_STR];
    char arrival[MAX_STR];
    char departure[MAX_STR];

    Customer();
};

class GarageSystem {
public:
    int m; // number of garages
    int n; // spaces per garage

    int garages[MAX_GARAGES][MAX_SPACES];

    Customer customers[MAX_CUSTOMERS];
    int customerCount;

    char occupancyFile[MAX_STR];
    char customersFile[MAX_STR];
    char interactionsFile[MAX_STR];

    GarageSystem();
};

#endif
