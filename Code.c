#include <stdio.h>
#include <time.h>
#include <unistd.h>

void currentdate();
void timeuntil();
void timesince();

void currentdate() {
printf("current time is :\n");
while (1) {
time_t t;
time(&t);

struct tm *local = localtime(&t);  
      
    printf("\r%04d-%02d-%02d %02d:%02d:%02d",  
        local->tm_year + 1900,  
        local->tm_mon + 1,  
        local->tm_mday,  
        local->tm_hour,  
        local->tm_min,  
        local->tm_sec);  
    fflush(stdout);  
    sleep(1);  
}  
return;

}

void timeuntil() {
int fday, fmon, fyear;
double untill;
int duntil;

time_t t;  
time(&t);  

printf("Enter future date (DD MM YYYY): ");  
scanf("%d %d %d", &fday, &fmon, &fyear);  

struct tm fdate = {0};  
fdate.tm_mday = fday;  
fdate.tm_mon = fmon - 1;  
fdate.tm_year = fyear - 1900;  

time_t cftime = mktime(&fdate);  
untill = difftime(cftime, t);  

if (untill < 0) {  
    printf("Invalid date. It must be a future date.\n");  
    return;  
}  

duntil = untill / (60 * 60 * 24);  
printf("Days until %02d-%02d-%04d: %d days\n", fday, fmon, fyear, duntil);

}

void timesince() {
int pday, pmon, pyear;
double since;
int dsince;

time_t t;  
time(&t);  

printf("Enter past date (DD MM YYYY): ");  
scanf("%d %d %d", &pday, &pmon, &pyear);  

struct tm pdate = {0};  
pdate.tm_mday = pday;  
pdate.tm_mon = pmon - 1;  
pdate.tm_year = pyear - 1900;  

time_t cptime = mktime(&pdate);  
since = difftime(t, cptime);  

if (since < 0) {  
    printf("Invalid date. It must be a past date.\n");  
    return;  
}  

dsince = since / (60 * 60 * 24);  
printf("Days since %02d-%02d-%04d: %d days\n", pday, pmon, pyear, dsince);

}

int main() {
int option;

do {  
    printf("\n\n===== MENU =====\n");  
    printf("1. Current Time (Live)\n");  
    printf("2. Days Until a Date\n");  
    printf("3. Days Since a Date\n");  
    printf("4. Exit\n");  
    printf("Choose option: ");  
    scanf("%d", &option);  

    switch (option) {  
        case 1:  
            currentdate();  
            break;  
        case 2:  
            timeuntil();  
            break;  
        case 3:  
            timesince();  
            break;  
        case 4:  
            printf("Exiting program.\n");  
            break;  
        default:  
            printf("Invalid option. Please choose 1-4.\n");  
            break;  
    }  
} while (option != 4);  
  
return 0;

}


    
