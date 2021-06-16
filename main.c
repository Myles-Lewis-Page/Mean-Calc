/* 
 * File:   Program_1
 * Author: Myles Page
 * Class: CS1120
 * Homework #4
 * Created on October 3, 2018, 1:48 PM
 * Calculates an average with entered number 
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) 
{
    int sum = 65;
    int i;
    int mean = 0;
    int divide = 0;
    int mean_final;
    
    for(i = sum; i > -1 ; i--){
        sum = sum - 1;
        printf("\nThe value of sum is %d", sum);
        //Prints the sum
        mean = mean + sum;
        divide++;
        //Adds one to the divide by variable
                             }
    
    mean_final = mean / divide;
    printf("\nThe value of the mean is %d", mean);
    //print Mean
    printf("\nThe value of divide is %d", divide);
    //Print Divide
    printf("\nThe Mean Value is %d", mean_final);
    //Print final value
}