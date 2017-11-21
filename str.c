#include "stdio.h"
#include "string.h"

char *my_strstr(const char *haystack, const char * needle);

int main()
{
    char * s = "abcdefg";
    char *p;
    p = my_strstr(s, "cde");
    printf("%s\n", p);

    return 0;
}

char *my_strstr(const char *haystack, const char * needle)
{
    const char *h = haystack;
    const char *n = needle;

    while('\0' != *h)
    {
        int i=0;
        while('\0' != *(h+i) && '\0' != *(n+i))
        {
            if(*(h+i) != *(n+i))
                break;
            ++i;
            //printf("%c",*(h+i));
        }
        if(i == strlen(needle))
            return (char *)h;
        ++h;
    }

    return NULL;
}

