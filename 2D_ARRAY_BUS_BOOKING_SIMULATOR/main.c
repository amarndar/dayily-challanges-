#include <stdio.h>

#define ROWS 5
#define COLS 3

void displaySeats(int seats[ROWS][COLS]) {
printf("\nSeat Layout (0 = Free, 1 = Booked)\n");
printf(" A B C\n");
for (int i = 0; i < ROWS; i++) {
printf("%d ", i + 1);
for (int j = 0; j < COLS; j++) {
printf("%d ", seats[i][j]);
}
printf("\n");
}
}

int main() {
char loc[5][20] = {
    "Kukatpally",
    "Balanagar",
    "Ameerpet",
    "Lakdikapool",
    "Hyderabad"
};
char dt[5][10] = {
    "06:30",
    "06:40",
    "06:50",
    "07:00",
    "07:10"
};
int seats[ROWS][COLS] = {
    {0, 0, 0},
    {0, 1, 0},
    {0, 0, 1},
    {1, 1, 0},
    {0, 0, 0}
};
int dep, des;
int row, col;
char collector;

printf("---- BUS BOOKING MENUE ----\n");
printf("open stops:\n");

for (int i = 0; i < 5; i++) {
    printf("%d. %s\n", i + 1, loc[i]);
}

printf("\nEnter departure location number (1-5): ");
scanf("%d", &dep);
dep--;

printf("Enter destination number (1-5): ");
scanf("%d", &des);
des--;

printf("\nYou are traveling from %s to %s.\n",
       loc[dep], loc[des]);

printf("Departure time: %s\n", dt[dep]);

// DISPLAYING SEATS HERE
displaySeats(seats);

printf("\nSelect seat row (1-5): ");
scanf("%d", &row);
row--;

printf("Select seat column (A/B/C): ");
scanf(" %c", &collector);

if (collector == 'A' || collector == 'a')
    col = 0;
else if (collector == 'B' || collector == 'b')
    col = 1;
else
    col = 2;

if (seats[row][col] == 1) {
    printf("\nSeat already booked! Please try again.\n");
} else {
    int cost = 500;
    if (col == 0 || col == 2) {
        cost += 50; 
    }
    seats[row][col] = 1;

    printf("\nSeat %d%c booking confirmed\n", row + 1, collector);
    printf("total seating cost: Rs. %d\n", cost);
}

displaySeats(seats);

return 0;

}
