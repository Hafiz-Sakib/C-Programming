#include <stdio.h>
int main()
{

    // Number of Elements = rows * columns;

    // data_type array_name[row_size][col_size]

    int Array1[3][4];

    // Method1 to Declare a two Dimensional Array

    Array1[0][0] = 1;
    Array1[0][1] = 2;
    Array1[0][2] = 3;
    Array1[0][3] = 4;
    Array1[1][0] = 5;
    Array1[1][1] = 6;
    Array1[1][2] = 7;
    Array1[1][3] = 8;
    Array1[2][0] = 9;
    Array1[2][1] = 10;
    Array1[2][2] = 11;
    Array1[2][3] = 12;

    // Method2 to Declare a two Dimensional Array

    int TwoDimensionalArray[3][4] = {

        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}};

    //প্রথমে সবকিছুকে একটা মেইন সেকেন্ড ব্রাকেটের ভিতরে রাখতে হবে,ওই মেইন সেকেন্ড ব্রাকেটের ভিতরে নেস্টেড সেকেন্ড ব্রাকেটের সংখ্যা হবে যতটা রো সংখ্যা ঠিক ততটা,প্রতিটা নেস্টেড সেকেন্ড ব্রাকেটের ভিতরে এলিমেন্ট সংখ্যা হবে কলাম সংখ্যার সমান।

    return 0;
}