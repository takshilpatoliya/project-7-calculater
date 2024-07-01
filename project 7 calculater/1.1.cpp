#include <stdio.h>

float add(float a, float b)
{
    return a + b;
}

float subtract(float a, float b)
{
    return a - b;
}
float modul(int a, int b)
{
    return a % b;
}

float multiply(float a, float b)
{
    return a * b;
}

float divide(float a, float b)
{
	 if (b != 0)
	{
        return a / b;
    } 
	else
	{
        printf("that numbers cannot divide\n");
        return 0; 
    }
}

  


int main() 
{
    int choice;
    float a, b, ans;

      do
	 {
	
        printf("Press 1 for +\n");
        printf("Press 2 for -\n");
        printf("Press 3 for %%\n");
        printf("Press 4 for *\n");
        printf("Press 5 for /\n");
        printf("Press 0 to exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);
    
	 
        if (choice == 0)
		{
            printf("please try again we are exiting the calculater\n");
            break;
        }

        printf("enter your first number: ");
        scanf("%f", &a);

        printf("enter your second number: ");
        scanf("%f", &b);

        switch (choice)
		{
            case 1:
                ans = add(a, b);
                break;
            case 2:
                ans = subtract(a, b);
                break;
            case 3:
            	ans = modul(a, b); 
                break;
            case 4:
            	ans = multiply(a, b);
                break;
            case 5:
                ans = divide(a, b);
                break;
            default:
                printf("Invalid choice! Please select a valid option.\n");
            break;
			
        }

        printf("ans is : %.2f\n\n", ans);  
    }while(1);
    
    return 0;
}
