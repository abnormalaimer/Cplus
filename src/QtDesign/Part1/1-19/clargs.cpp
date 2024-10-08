//
// Created by 25149 on 24-8-3.
//
#include <iostream>
#include "clargs.h"
#include <stdio.h>
#include <stdlib.h>

int main() {
    char str1[] = "123";
    char str2[] = " -123abc";
    char str3[] = "12a34";

    int num1 = atoi(str1);
    int num2 = atoi(str2);
    int num3 = atoi(str3);

    printf("num1: %d \n", num1);  // 输出: num1: 123
    printf("num2: %d\n", num2);  // 输出: num2: -123
    printf("num3: %d\n", num3);  // 输出: num3: 12

    return 0;
}
