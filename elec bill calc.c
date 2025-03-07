
int main() {
    char name[30];
    int id;
    int units;
    float bill = 100, surcharge = 0;
    printf("Enter customer name: ");
    scanf("%s", name);
    printf("Enter units consumed: ");
    scanf("%d", &units);

    if (units <= 100) bill += units * 5;
    else if (units <= 300) bill += 100 * 5 + (units - 100) * 7;
    else bill += 100 * 5 + 200 * 7 + (units - 300) * 10;
    if (bill > 1000) surcharge = bill * 0.05;
    printf("\nName: %s\nUnits: %d\nBill: Rs. %.2f\nSurcharge: Rs. %.2f\nTotal: Rs. %.2f\n",
           name, units, bill, surcharge, bill + surcharge);

    return 0;
}
