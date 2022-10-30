#include <stdio.h>
int main()
{
    /* Usages of Symbols in pointers  : */

    // Symbol 01 => & Symbol is Used to get the memory Adress of the Variable .

    // Symbol 01 => * Symbol is Used to get the value of the VAriable that the Pointer is Pointing to.

    int x = 5;
    int *ptr;
    ptr = &x;

    printf("Value of x : %d\n", x);
    // x  ভেরিয়েবল এর ভ্যালু প্রিন্ট করবে।

    printf("Memory Location/Adress of x : %d\n", &x);
    // x ভেরিয়েবল এর মেমোরি এড্রেস প্রিন্ট করবে।

    printf("Memory Location/Adress of x : %d\n", ptr);
    // ptr ভেরিয়েবল এর ভিতরে যেহেতু আমরা &x Assign করে রেখেছি তাই এটি  x ভেরিয়েবল এর মেমোরি এড্রেস প্রিন্ট করবে।

    printf("Content of x : %d\n", *ptr);
    // ptr পয়েন্টারটি যে ভেরিয়েবল এর মেমোরি এড্রেস কে নির্দেশ করছে ওই ভেরিয়েবল এর ভ্যালুটা প্রিন্ট করে দেখাবে। That means * ব্যাবহার করে আমরা মেমোরিএড্রেস নয় বরং ভ্যালু খুজে বের করতে পারবো।

    printf("Adress of ptr Variable: %d\n", &ptr);
    // ptr ভেরিয়েবল এর নিজের একটি মেমোরি এড্রেস রয়েছে। &ptr ব্যবহার করে আমরা তার নিজের মেমোরি এড্রেস টা খুজে বের করতে পারবো।

    return 0;
}