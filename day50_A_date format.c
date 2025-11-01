//Q99. Change the date format from dd/04/yyyy to dd-Apr-yyyy.
#include <stdio.h>

int main() {
    int d, m, y;
    char *months[] = {"Jan","Feb","Mar","Apr","May","Jun","Jul","Aug","Sep","Oct","Nov","Dec"};
    scanf("%d/%d/%d", &d, &m, &y);
    if(m < 1 || m > 12)
        printf("Invalid month");
    else
        printf("%02d-%s-%d", d, months[m-1], y);
}
