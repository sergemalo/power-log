#include <stdio.h>
#include <time.h>
#include "corsair.h"


int main() {
    time_t now;
    struct tm* now_tm;
    struct timespec sleep_time;

    printf("Number of corsair: %d\n", get_nb_corsair());
    /* Find PSU list */
    /* Get PSU SN or ID */
    /* Get PSU Total Power */


    while(1)
    {
        // Get the current time
        now = time(NULL);

        // Convert to struct tm
        now_tm = localtime(&now);

        // Now you can access the fields of the struct tm
        printf("%d-%d-%d,%d:%d:%d\n", now_tm->tm_year + 1900, now_tm->tm_mon + 1, now_tm->tm_mday,now_tm->tm_hour, now_tm->tm_min, now_tm->tm_sec);

        // Sleep for 1 second
        sleep_time.tv_sec = 1;
        sleep_time.tv_nsec = 0;
        nanosleep(&sleep_time, NULL);        
    }


 
    return 0;
}