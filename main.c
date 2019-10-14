//
//  main.c
//  FLITA
//
//  Created by Георгий on 14.10.19.
//  Copyright © 2019 Георгий. All rights reserved.

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(){
    printf("From Bin to Dec\n");
    printf("Enter num of elements: ");
    int a;
    scanf("%d", &a);
    
    unsigned long int *variety1, *variety2, *variety3;
    variety1 = calloc(a, sizeof(unsigned long int));
    variety2 = calloc(a, sizeof(unsigned long int));
    variety3 = calloc(a, sizeof(unsigned long int));
    
    for(int i=0;i<a;i++)
    {
        printf("Enter %d element: ",i+1);
        scanf("%lu", &variety1[i]);
        variety2[i] = variety1[i];
    }
    
    for(int i=0;i<a;i++)
    {
        int j = 0;
        while(variety2[i] != 0)
        {
            if(variety2[i]%10 == 1)
            {
                variety3[i]+= pow(2,j);
            }
            variety2[i] /= 10;
            j++;
        }
    }
    
    for(int i=0;i<a;i++)
    {
        printf("%lu : %lu\n",variety1[i], variety3[i]);
    }
    
    return 0;
}


