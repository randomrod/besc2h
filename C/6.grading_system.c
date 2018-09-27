#include<stdio.h>
#include<stdlib.h>
int main()
{
    int marks;
    printf("enter your marks:");
    scanf("%d", &marks);
    if (marks>100)
    printf("invalid marks\n");
    else
    {
        if (marks>90)
        printf("You have secured Grade A\n");
        else if (marks>80)
        printf("You have secured Grade B\n");
        else if (marks>70)
        printf("You have secured Grade C\n");
        else if (marks>60)
        printf("You have secured Grade D\n");
        else if (marks>50)
        printf("You have secured Grade E\n");
        else
        printf("You have failed\n");
    }
system("pause");
}
