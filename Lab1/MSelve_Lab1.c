/*  Problem: Write a program to create a customer's bill for a company 
that sells 5 products (TV, Monitor, Flash Drive, Hard Drive, Deskjet Printer).
The program reads quantities, calculates totals, applies tax, 
and displays a formatted bill.

    Algorithm: BEGIN
    SET constants for unit prices and tax rate
    DECLARE integer variables for quantities
    DECLARE real variables for totals, subtotal, tax, final total

    PROMPT user for quantities of each product
    CALCULATE total price for each product
    CALCULATE subtotal = sum of all totals
    CALCULATE tax = subtotal * TAX_RATE
    CALCULATE final total = subtotal + tax

    DISPLAY results in tabular format
END

    Developed by: Michael Selve
    Date: 03/03/2026

*/

#include <stdio.h>

int main(){

//Step 1: Define constants
const double TV_PRICE = 400.00;
const double MONITOR_PRICE = 220.00;
const double FLASHDRIVE_PRICE = 35.20;
const double HARDDRIVE_PRICE = 150.00;
const double PRINTER_PRICE = 300.00;
const double TAX_RATE = 0.0835;

// Step 2: Declare variables
int qtyTV, qtyMonitor, qtyFlash, qtyHard, qtyPrinter;
double totalTV, totalMonitor, totalFlash, totalHard, totalPrinter;
double subtotal, tax, total;

// Step 3: Input quantities
printf("How many TVs were sold? ");
scanf("%d", &qtyTV);
printf("How many Monitors were sold? ");
scanf("%d", &qtyMonitor);
printf("How many Flash Drives were sold? ");
scanf("%d", &qtyFlash);
printf("How many Hard Drives were sold? ");
scanf("%d", &qtyHard);
printf("How many Deskjet Printers were sold? ");
printf("How many Deskjet Printers were sold? ");

// Step 4: Perform calculations
totalTV = qtyTV * TV_PRICE;
totalMonitor = qtyMonitor * MONITOR_PRICE;
totalFlash = qtyFlash * FLASHDRIVE_PRICE;
totalHard = qtyHard * HARDDRIVE_PRICE;
totalPrinter = qtyPrinter * PRINTER_PRICE;

subtotal = totalTV + totalMonitor + totalFlash + totalHard + totalPrinter;
tax = subtotal * TAX_RATE;
total = subtotal + tax;

// Step 5: Display output
printf("\nQTY\tDESCRIPTION\tUNIT PRICE\tTOTAL PRICE\n");
printf("%d\tTV\t\t%.2f\t\t%.2f\n", qtyTV, TV_PRICE, totalTV);
printf("%d\tMonitor\t\t%.2f\t\t%.2f\n", qtyMonitor, MONITOR_PRICE, totalMonitor);
printf("%d\tFlash Drive\t%.2f\t\t%.2f\n", qtyFlash, FLASHDRIVE_PRICE, totalFlash);
printf("%d\tHard Drive\t%.2f\t\t%.2f\n", qtyHard, HARDDRIVE_PRICE, totalHard);
printf("%d\tDeskjet Printer\t%.2f\t\t%.2f\n", qtyPrinter, PRINTER_PRICE, totalPrinter);

printf("\nSubtotal:\t%.2f\n", subtotal);
printf("Tax:\t\t%.2f\n", tax);
printf("Total:\t\t%.2f\n", total);

return 0;
}