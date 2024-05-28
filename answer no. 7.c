//write a c program that convers kilo meters per hour to miles per hour

# include<stdio.h>
int main () {

float kmph;
float mph;

printf("enter kmph:") ;
scanf("%f", &kmph) ;
mph=kmph*0.621371;
printf("speed in miles per hour:%f\n", mph) ;

    return 0;
    
}

    