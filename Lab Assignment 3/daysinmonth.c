#include<stdio.h>
int main(){
    int num;
    char month;

    printf("\nEnter your number: ");
    scanf("%d", &num);

    switch(num){
        case 1:
            month = 'January';
            printf("%c ", month);
            break;
        case 2:
            month = 'February';
            printf("%c ", month);
            break;
        case 3:
            month = 'March';
            printf("%c ", month);
            break;
        case 4:
            month = 'April';
            printf("%c ", month);
            break;
        case 5:
            month = 'May';
            printf("%c ", month);
            break;
        case 6:
            month = 'June';
            printf("%c ", month);
            break;
        case 7:
            month = 'July';
            printf("%c ", month);
            break;
        case 8:
            month = 'August';
            printf("%c ", month);
            break;
        case 9:
            month = 'September';
            printf("%c ", month);
            break;
        case 10:
            month = 'October';
            printf("%c ", month);
            break;
        case 11:
            month = 'November';
            printf("%c ", month);
            break;
        case 12:
            month = 'December';
            printf("%c ", month);
            break;
        default:
            printf("\nInvalid number");
            break;
    }

    if (month == 'January' || month == 'March' || month == 'May' || month == 'July' || month == 'August' || month == 'October' || month == 'December')
        printf("31 days");
    else if (month == 'April' || month == 'June' || month == 'September' || month == 'November')
        printf("30 days");
    else
        printf("28 days");
}
