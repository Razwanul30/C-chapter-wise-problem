#include <stdio.h>
#include <string.h>

#define MAX_RECORDS 100

int main() {
    struct vehicle_record {
        char vehicle_type[50];
        char month_of_sale[10];
        int price;
    } records[MAX_RECORDS];

    int num_records = 0, i, start_value, end_value, sale_value;
    char vehicle_type[50], start_month[10], end_month[10];

    printf("Enter vehicle sale records (Enter 'STOP' for vehicle type to stop):\n");
    while (1) {
        printf("Vehicle Type: ");
        scanf(" %[^\n]s", records[num_records].vehicle_type);
        if (strcmp(records[num_records].vehicle_type, "STOP") == 0) {
            break;
        }
        printf("Month of Sale (MM/YY): ");
        scanf("%s", records[num_records].month_of_sale);
        printf("Price: ");
        scanf("%d", &records[num_records].price);
        num_records++;
        if (num_records >= MAX_RECORDS) {
            printf("Maximum number of records reached.\n");
            break;
        }
    }

    printf("\nEnter the vehicle type: ");
    scanf(" %[^\n]s", vehicle_type);
    printf("Enter the starting month (MM/YY): ");
    scanf("%s", start_month);
    printf("Enter the ending month (MM/YY): ");
    scanf("%s", end_month);

    start_value = (start_month[3] - '0') * 10 * 12 + (start_month[4] - '0') * 12 + (start_month[0] - '0') * 10 + (start_month[1] - '0');
    end_value = (end_month[3] - '0') * 10 * 12 + (end_month[4] - '0') * 12 + (end_month[0] - '0') * 10 + (end_month[1] - '0');

    printf("\nDetails of vehicles sold of type '%s' between %s and %s:\n", vehicle_type, start_month, end_month);
    for (i = 0; i < num_records; i++) {
        sale_value = (records[i].month_of_sale[3] - '0') * 10 * 12 + (records[i].month_of_sale[4] - '0') * 12 + (records[i].month_of_sale[0] - '0') * 10 + (records[i].month_of_sale[1] - '0');
        if (strcmp(records[i].vehicle_type, vehicle_type) == 0 && sale_value >= start_value && sale_value <= end_value) {
            printf("Vehicle Type: %s, Month of Sale: %s, Price: %d\n", records[i].vehicle_type, records[i].month_of_sale, records[i].price);
        }
    }

    return 0;
}