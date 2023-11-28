#include <stdio.h>
#include <conio.h>

int main()
{
int a[5][5];
for (int n = 0; n < 5; n++, printf("\n"))
for (int m = 0; m < 5; m++)
{
if ((n + m) % 2 == 0) a[n][m] = 0;
else a[n][m] = 1;
printf(" %d", a[n][m]);
}
getch();
}