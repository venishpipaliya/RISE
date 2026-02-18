#include <stdio.h>
#include <stdlib.h>

// Function Prototypes
void inputParkingData(float *slots, int n);
void processParkingData(float *slots, int n, float *totalRevenue, float *maxHours);
float calculateCharge(float hours);

int main() {
    int n;
    float totalRevenue = 0.0, maxHours = 0.0;

    printf("--- Smart Parking Slot Management System ---\n");
    printf("Enter the number of parking slots: ");
    scanf("%d", &n);

    // Dynamic memory allocation for slots
    float *slots = (float *)malloc(n * sizeof(float));

    if (slots == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    inputParkingData(slots, n);
    processParkingData(slots, n, &totalRevenue, &maxHours);

    // Display Final Results
    printf("\n--- System Summary ---\n");
    printf("Total Revenue Generated:  INR %.2f\n", totalRevenue);
    printf("Highest Hours Parked:     %.2f hrs\n", maxHours);

    free(slots); // Clean up memory
    return 0;
}

// Function to take input using pointers
void inputParkingData(float *slots, int n) {
    for (int i = 0; i < n; i++) {
        printf("Enter hours parked for Slot %d: ", i + 1);
        scanf("%f", (slots + i)); // Using pointer arithmetic instead of slots[i]
    }
}

// Function to calculate individual charges based on rules
float calculateCharge(float hours) {
    if (hours <= 2) {
        return hours * 30;
    } else if (hours <= 5) {
        return hours * 50;
    } else {
        return hours * 100;
    }
}

// Function to process logic using pointers
void processParkingData(float *slots, int n, float *totalRevenue, float *maxHours) {
    for (int i = 0; i < n; i++) {
        float currentHours = *(slots + i);
        
        // Calculate Revenue
        *totalRevenue += calculateCharge(currentHours);

        // Find Maximum Hours
        if (currentHours > *maxHours) {
            *maxHours = currentHours;
        }

        // Over-parking Detection
        if (currentHours > 8) {
            printf("[WARNING] Slot %d: Over-parking detected (%.2f hours)!\n", i + 1, currentHours);
        }
    }
}
