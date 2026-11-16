#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    // Seed the random number generator for occupancy simulation
    srand(time(0));

    // ==========================================
    // 1. 1D Array - Weekly Revenue Tracker
    // ==========================================
    float revenue[7];
    float totalRevenue = 0.0, averageRevenue = 0.0;

    printf("=== 1D ARRAY: WEEKLY REVENUE TRACKER ===\n");
    for (int i = 0; i < 7; i++) {
        printf("Enter revenue for Day %d: ", i + 1);
        scanf("%f", &revenue[i]);
        totalRevenue += revenue[i];
    }

    averageRevenue = totalRevenue / 7.0;
    printf("\nTotal Weekly Revenue: %.2f\n", totalRevenue);
    printf("Average Daily Revenue: %.2f\n\n", averageRevenue);

    // ==========================================
    // 2. 2D Array - Room Occupancy (One Branch)
    // ==========================================
    int occupancy[5][10]; // 5 floors, 10 rooms per floor
    int occupiedCount, vacantCount;

    printf("=== 2D ARRAY: ROOM OCCUPANCY (ONE BRANCH) ===\n");
    for (int floor = 0; floor < 5; floor++) {
        occupiedCount = 0;
        vacantCount = 0;

        for (int room = 0; room < 10; room++) {
            // Randomly assign 1 (occupied) or 0 (vacant)
            occupancy[floor][room] = rand() % 2;

            if (occupancy[floor][room] == 1) {
                occupiedCount++;
            } else {
                vacantCount++;
            }
        }
        printf("Floor %d -> Occupied: %d, Vacant: %d\n", floor + 1, occupiedCount, vacantCount);
    }
    printf("\n");

    // ==========================================
    // 3. 3D Array - Multiple Branches
    // ==========================================
    int chain[3][5][10]; // 3 branches, 5 floors, 10 rooms per floor
    int totalChainOccupied = 0;

    printf("=== 3D ARRAY: MULTIPLE BRANCHES OCCUPANCY ===\n");
    for (int branch = 0; branch < 3; branch++) {
        for (int floor = 0; floor < 5; floor++) {
            for (int room = 0; room < 10; room++) {
                // Randomly assign 1 (occupied) or 0 (vacant)
                chain[branch][floor][room] = rand() % 2;

                if (chain[branch][floor][room] == 1) {
                    totalChainOccupied++;
                }
            }
        }
    }

    printf("Total occupied rooms across all 3 branches (out of 150): %d\n", totalChainOccupied);

    return 0;
}