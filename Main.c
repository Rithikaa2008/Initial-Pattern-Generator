#include <stdio.h>

int main() {

int rows = 7;
int cols = 7;

printf("Initial Pattern Generator\n");
printf("Initial: S\n\n");

for (int i = 0; i < rows; i++) {

for (int j = 0; j < cols; j++) {

if (i == 0 || i == 3 || i == 6) {
if (j > 0 && j < 6) {
printf("*");
} else {
printf(" ");
}
}

else if (i < 3) {
if (j == 0) {
printf("*");
} else {
printf(" ");
}
}

else {
if (j == 6) {
printf("*");
} else {
printf(" ");
}
}
}

printf("\n");
}

return 0;
}
