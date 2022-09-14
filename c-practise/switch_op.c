#include<stdio.h>
int main(){
    char day;
    printf("enter the day");
    scanf("%s", &day);

    switch(day){
        // case 1:
        //     printf("monday");
        //     break;
        // case 2:
        //     printf("Tuesday");
        //     break;
        // case 3:
        //     printf("Wednesday");
        //     break;
        // case 4:
        //     printf("Thursday");
        //     break;
        // case 5:
        //     printf("Friday");
        //     break;
        // case 6:
        //     printf("Saturday");
        //     break;
        // case 7:
        //     printf("Sunday");
        //     break;
        // default:
        //     printf("not a valid number...");
        case 'm':
            printf("monday");
            break;
        case 't':
            printf("tuesday");
            break;
        case 'w':
            printf("wednesday");
            break;
        case 'T':
            printf("thursday");
            break;
        case 'f':
            printf("friday");
            break;
        case 's':
            printf("saturday");
            break;
        case 'S':
            printf("Sunday");
            break;
        default:
            printf("invalid number");
        
    }
}