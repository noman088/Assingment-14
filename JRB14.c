

// 1. Write a program to calculate the sum of numbers stored in an array of size 10. Take
// array values from the user.
// #include<stdio.h>
// int main()
// {
//     int ar[10];
//     int i, sum = 0;
//     printf("Enter 10 numbers");
//     for (i = 0; i <= 9;i++)
//         scanf("%d", &ar[i]);
//     for (i = 0; i <= 9;i++)
//         sum = sum + ar[i];

//     printf(" sum is %d ", sum);

//     return 0;
// }

// 2. Write a program to calculate the average of numbers stored in an array of size 10.
// Take array values from the user.
// #include <stdio.h>
// int main()
// {
//     int i, sum, arr[10];
//     float avg;
//     printf("Enter 10 numbers ");
//     for (i = 0; i <= 9; i++)
//         { scanf("%d",&arr[i]);
//         sum = sum + arr[i];}
//     // for (i = 0; i <= 9; i++)

//     avg = sum / 10.0;
//     printf("avg is %.1f ", avg);
//     return 0;
// }

// 3. Write a program to calculate the sum of all even numbers and sum of all odd
// numbers, which are stored in an array of size 10. Take array values from the user.
// #include <stdio.h> 4
// int main()
// {
//     int i, se = 0, so = 0, ar[10];
//     printf("Enter 10 numbers\n ");
//     for (i = 0; i <= 9; i++)
//     {
//         scanf("%d", &ar[i]);
//         if (ar[i] % 2==0)
//             so = so + ar[i];2
//         else
//             so = so + ar[i];
//     }
//     printf("sum of all even is %d and all odd is %d", se, so);
//     return 0;
// }

// 4. Write a program to find the greatest number stored in an array of size 10. Take array
// values from the user.
// #include <stdio.h>
// int max(int[]);
// int main()
// {
//     int i, max = 0, ar[10];
//     printf("Enter an Arry");
//     for (i = 0; i <= 9; i++)
//         scanf("%d", &ar[i]);

//     for (i = 0; i <= 9; i++)
//     {
//         if (max > ar[i])
//             max = max;
//         else
//             max = ar[i];
//     }
//     printf("Maximum value is %d", max);

//     return 0;
// }

// 5. Write a program to find the small number stored in an array of size 10. Take array
// values from the user.
// #include <stdio.h>
// int main()
// {
//     int i,min;
//     int ar[10];
//     // = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
//     printf("Enter an Array of Size 10\n");
//     for (i = 0; i <= 9; i++)
//         scanf("%d",&ar[i]);
//     min = ar[0];

//     for (i = 0; i <= 9; i++)
//     {
//         if (min <= ar[i])
//             min = min;
//         else
//             min = ar[i];
//         // min = ar[i];

//     }
//     printf("Minimum Value is %d", min);

//     return 0;
// }

// 6. Write a program to sort elements of an array of size 10. Take array values from the
// user.
// #include <stdio.h>
// int main()
// {
//     int a[10];
//     int b;
//     printf("Enter Number in array");
//     for (int i = 0; i <= 9; i++)
//         scanf("%d", &a[i]);

//     printf("Array before sorting : ");
//     for (int i = 0; i <= 9; i++)
//     {
//         printf("%d ", a[i]);
//     }
//     printf("\n");
//     for (int i = 0; i <= 9; i++)
//     {
//         for (int i = 0; i <= 9; i++)
//             if (a[i] > a[i + 1])
//             {
//                 b = a[i];
//                 a[i] = a[i + 1];
//                 a[i + 1] = b;
//             }
//     }
//     printf("The array after sorting : ");
//     for (int i = 0; i <= 9; i++)
//     {
//         printf("%d ", a[i]);
//     }
//     return 0;
// }

// 7. Write a program to find second largest in an array.Take array values from the user.
// #include <stdio.h>
// int main()
// {
//     int a[10];
//     int b;
//     printf("Enter Element in array\n");
//     for (int i = 0; i <= 9; i++)
//         scanf("%d", &a[i]);
//     for (int i = 0; i <= 9; i++)
//         for (int i = 0; i <= 9; i++)
//             if (a[i] > a[i + 1])
//             {
//                 b = a[i];
//                 a[i] = a[i + 1];
//                 a[i + 1] = b;
//             }
//     printf("\n The Second Largest Element in array is : %d ", a[8]);

//         return 0;
// }

                             // OR//

// #include <stdio.h>
// int main()
// {
//     int a[10] = {10, 4, 8, 7, 6, 5, 12, 3, 2, 9};
//     int largest = 0, Second_Largest = 0;
//     for (int i = 0; i <= 9; i++)
//     {
//         if (a[i] > largest)
//             largest = a[i];
//         if (Second_Largest < a[i] && a[i] < largest)
//             Second_Largest = a[i];
//     }
//     printf("Second Largest Element is %d ", Second_Largest);

//     return 0;
// }

// 8. Write a program to find the second small number in an array.Take array values
// #include <stdio.h>
// int main()
// {
//     int a[5];
//     int small, second_small;
//     printf("Enter 5 Numbers\n");
//     for (int i = 0; i <= 4; i++)
//         scanf("%d", &a[i]);
//     int i = 0;
//     if (a[i] > a[i + 1])
//         small = a[i + 1];
//     else
//         second_small = a[i];
//     for (i = 0; i <= 4; i++)
//     {
//         if (a[i] < small)
//         {
//             second_small = small;
//             small = a[i];
//         }
//         else if (a[i] < second_small)
//         {
//             second_small = a[i];
//         }
//     }
//     printf("Second smallest ELement is %d", second_small);
//     return 0;
// }

// 9. Write a program in C to read n number of values in an array and display it in reverse
// order. Take array values from the user.
// #include <stdio.h>
// int main()
// {
//     int a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
//     printf("Values after reverse is : ");
//     for (int i = 9; i >= 0; i--)
//     {
//         printf("%d ", a[i]);
//     }
//     return 0;
// }

// 10. Write a program in C to copy the elements of one array into another array.Take array
// values from the user.
// #include <stdio.h>
// int main()
// {
//     int a[10] = {45, 46, 47, 48, 49, 50, 51, 53, 54, 55};
//     int b[10];
//     int i, j;
//     for (i = 0, j = 0; i <= 9 && j <= 9; i++, j++)
//     {
//         b[j] = a[i];
//         printf("%d ", b[j]);
//     }

//     return 0;
// }