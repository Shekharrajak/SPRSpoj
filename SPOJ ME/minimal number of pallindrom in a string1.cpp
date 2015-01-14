/*
A string can be partitioned into some substrings, such that each substring is a palindrome. For example,
 there are a few strategies to split the string “abbab” into palindrome substrings, such as: 
 “abba”|”b”, “a”|”b”|”bab” and “a”|”bb”|”a”|”b”.

Given a string str, please get the minimal numbers of splits to partition it into palindromes. 
The minimal number of splits to partition the string “abbab” into a set of palindromes is 1.

*/

#include <stdio.h>
 
int is_palindrome(char *s, char *e)
{
        while (s < e) {
                if (*s != *e)
                        return 0;
                s++;
                e--;
        }
 
        return 1;
}
 
void myprint(char *s, char *e, int n)
{
        while (s != e) {
                putchar(*s++);
        }
        printf(": %d\n", n);
}
 
int split(char *str)
{
        char *s1, *s2;
        char *p;
        int n;
 
        n = 0;
        p = str+1;
        s1 = str;
        s2 = NULL;
        while (*p) {
                myprint(str, p, n);
                if (s2 != NULL) {
                        if (is_palindrome(s1, p)) {
                                s2 = NULL;
                                n--;
                        } else if (is_palindrome(s2, p)) {
                                /* do nothing */
                        } else {
                                s1 = s2;
                                s2 = p;
                                n++;
                        }
                } else {
                        if (is_palindrome(s1, p)) {
                                /* do nothing */
                        } else {
                                s2 = p;
                                n++;
                        }
                }
                p++;
        }
 
        return n;
}
 
int main()
{
        char str[] = "abbabccddxx";
 
        printf("str %s, splits: %d\n", str, split(str));
 
        return 0;
}
