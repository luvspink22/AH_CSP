#AH period 6 Time of Day - C

#include <stdio.h>
#include <time.h>

int main() {
    // get the current time
    time_t t;
    struct tm *tm_info;
    time(&t);
    tm_info = localtime(&t);

    int hour = tm_info->tm_hour;

    // print the greeting depending on the hour
    if (hour >= 5 && hour <= 11) {
        printf("Good Morning!\n");
    } 
    else if (hour >= 12 && hour <= 16) {
        printf("Good Afternoon!\n");
    } 
    else if ((hour >= 17 && hour <= 23) || (hour >= 0 && hour <= 4)) {
        printf("Good Evening!\n");
    } 
    else {
        printf("Invalid hour entered.\n");
    }

    return 0;
}
