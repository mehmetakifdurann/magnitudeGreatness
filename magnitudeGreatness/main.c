//
//  main.c
//  magnitudeGreatness
//
//This program takes 2 numbers from the user and compares their magnitude greatness.
//
//  Created by Akif Duran
//

#include <stdio.h>
#include <math.h>

int main (){
    
    //defining and taking the inputs from user
    int number1, number2;
    
    printf("Please enter the numbers that you want to compare \n");
    scanf("%d%d", &number1, &number2);
    
    if(number1>number2){
        printf("Number1 is bigger than Number2 \n");
    }else if (number2 > number1){
        printf("Number2 is bigger than Number1. \n");
    }else {
        printf("These two numbers are equal.\n ");
    }
    
    
    return 0;
}
