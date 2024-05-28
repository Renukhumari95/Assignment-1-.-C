//wap in c that takes as minutes as input, and display the total numbers of hours and minutes in (HH:MM) 

# include<stdio.h>
int main () {

    int minutes ;


    printf("enter total number of minutes:") ;

    scanf("%d",&minutes) ;

    int hours, remaining_minutes;
    hours=minutes/60;

    printf("total time:%d:%d\n", hours, remaining_minutes) ;

    return 0;

}

