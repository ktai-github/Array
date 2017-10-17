//
//  main.c
//  Array
//
//  Created by Kevin T on 2017-10-08.
//  Copyright © 2017 Kevin T. All rights reserved.
//
//Ask Google why array's start from the position 0.
//There are many explanations. One of the most common explanations is that programmers in history have accepted that memory addresses start at 0.

#include <stdio.h>

//the main function of the program returning an integer
int main () {
    
    // n is an array of 10 integers
    int n[ 10 ];
    
    //integer index of the loop, which correspond to array element location
    int i;
//    int i,j
    
    // initialize elements of array n to 0
    //start at location 0 of the array n, as well as set the index to 0 for first iteration of loop
    //go through each of the 10 elements of the array from location 0 to 9 by increment of 1
    for ( i = 0; i < 10; i++ ) {
        
        //add 100 to the index value each time through the loop
        //store the sum into each array element
        n[ i ] = i + 100;
        
        //print the array element value each time through the loop
        printf("n[%d] = %d\n", i, n[i]);
        
    }
    
    // output each array element's value /
//    for (j = 0; j < 10; j++ ) { printf("Element[%d] = %d\n", j, n[j] ); }
    
    //output the value of street[6] which is the 7th character of the "street" array of characters
    //character array to store a string of values
    char *street = "123 Fake Street.";
    
    //character variable to store a single character
    char k;
    
    //store the value at an array element in variable k
    k = street[6];
    
    //print the value of k
    printf("street[6] = %c\n", k);
    
    //output 4th character of September
    //character array to store a string of values
    char *September = "September";
    
    //character variable to store a single character
    char l;
    
    //store the value at an array element in variable l
    l = September[3];
    
    //print the value of l
    printf("September[3] = %c\n", l);
    
    //return value of 0 for the main function
    return 0;
    
}
