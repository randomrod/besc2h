#include<stdlib.h>
#include<stdio.h>
int main ()
{
    float len, wid, area, peri;
    char op, recal;
    int newcal=1;

    while (newcal==1)
    {
        printf("enter the length and width of the rectangle:\n");
        scanf("%f %f", &len, &wid);
        printf("press 'a' to calculate Area\npress 'p' to calculate Perimeter\n");
        scanf(" %c", &op);

        area=len*wid;
        peri=2*(len+wid);
        
        if (op=='a'){
           
            printf("Area: %f \n", area);
            printf("press 'p' to calculate perimeter\npress 'r' to re-enter new values\npress 'x' to exit program:\n");
            scanf(" %c", &recal);
           
            if (recal=='p'){
            printf("Perimeter: %f \n", peri);
            printf("press 'r' to re-enter new values\npress 'x' to exit program:\n");
            scanf(" %c", &recal);
            if (recal=='r')
            newcal=1;    
            
            else if (recal=='x')
            break;
            
            else
            {
            printf("input not recognised\n");
            break;
            }
           }
            else if (recal=='r')
            newcal=1;    
            
            else if (recal=='x')
            break;
            
            else
            {
            printf("input not recognised\n");
            break;
            }
        }
        
        else if (op=='p'){
          
            printf("Perimeter: %f \n", peri);
            printf("press 'a' to calculate area\npress 'r' to re-enter new values\npress 'x' to exit program:\n");
            scanf(" %c", &recal);
          
            if (recal=='a'){
            printf("Area: %f \n", area);
            printf("press 'r' to re-enter new values\npress 'x' to exit program:\n");
            scanf(" %c", &recal);
            if (recal=='r')
            newcal=1;    
            
            else if (recal=='x')
            break;
            
            else
            {
            printf("input not recognised\n");
            break;
            }
            }
          
            else if (recal=='r')
            newcal=1;    
            
            else if (recal=='x')
            break;
          
            else
            {
            printf("input not recognised\n");
            break;
            }
        }
      
        else{
        printf("input not recognised\n");  
        printf("press 'r' to re-enter new values\npress 'x' to exit program:\n");
        scanf(" %c", &recal);
        if (recal=='r')
        newcal=1;    
            
        else if (recal=='x')
        break;
            
        else
        {
            printf("input not recognised\n");
            break;
        }
        
        }
    }
system("pause");
}
