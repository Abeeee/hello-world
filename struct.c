#include <stdio.h>
#include <string.h>
int main()
{
    struct emp
    {
        char name[25];
        int age;
        float bs;
    };
    struct emp e;
    strcpy(e.name,"Hacker");
    age = 25;
    printf("\n%s %d",e.name,age);
}
