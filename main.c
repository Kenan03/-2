#include <stdio.h>

int main() {
char x[1000];
long int i = 0, H;
long int k = 0;
printf("Enter the words: ");
fgets(x, 1000, stdin);
printf("Enter the length word: ");
scanf("%ld", &H);
while (x[i] != '\0') {
if (((x[i]) >= 'A' && x[i] <= 'Z') || (x[i] >= 'a' && x[i] <= 'z'))
k++;
else {
if (k == H) {
long int c = i;
for (i = i - k ; i < c; i++) {
printf("%lc", x[i]);
}
printf("\n");
}
k=0;
}
i++;
}
return 0;
}