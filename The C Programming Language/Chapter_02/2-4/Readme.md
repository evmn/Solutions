# Exercise 2-4

Write an alternate version of squeeze(s1, s2) that deletes each characters in s1 that matches any character in the string s2.


```c
#include <stdio.h>
#include <stdbool.h>
void squeeze(char s[], char t[]);

int main()
{
    char s1[] = "abcdefghijklmnopqrstuvwxyz";
    char s2[] = "aeiou";
    printf("s1 = %s\ns2 = %s\n", s1, s2);

    squeeze(s1,s2);
    printf("After squeeze\ns1 = %s\n", s1);
    return 0;
}

void squeeze(char s[], char t[])
{
    int i, j, k;
    bool bingo = false;
    k = 0;
    for(i=0; s[i] != '\0'; i++)
    {
        for(j = 0; t[j] != '\0'; j++)
        {
            if(s[i] == t[j])
            {
                bingo = true;
                break;
            }
        }
        if(!bingo)
            s[k++] = s[i];
        bingo = false;
    }
    s[k] = '\0';
}
```
