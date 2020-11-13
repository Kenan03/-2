#include <stdio.h>

int main() {
char x[1000];
int i = 0, H;
int k = 0;
printf("Enter the words: ");
fgets(x, 1000, stdin);
printf("Enter the length word: ");
scanf("%d", &H);
while (x[i] != '\0') {
if (((x[i]) >= 'A' && x[i] <= 'Z') || (x[i] >= 'a' && x[i] <= 'z'))
k++;
else {
if (k == H) {
int c = i;
for (i = i - k ; i < c; i++) {
printf("%c", x[i]);
}
printf("\n");
}
k=0;
}
i++;
}
return 0;
}
