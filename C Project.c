#include<stdio.h>
#include<Windows.h>
#include<stdlib.h>
#include<time.h>

void divide(int a, int b)
	{
		printf("Select the Appropiate Option from the Following: \n1 for Multiplying %d on Both Sides", b);
		printf("\n2 for Dividing %d by %d\n\n", b, a);
		float g;
		int f;
		scanf("%d", &f);
		system("cls");
		if (f==2)
		{
			Sleep(2300);
			printf("Dividing %d on Both Sides to Isolate x from constants\n\n", b);
			Sleep(2300);
			printf("So, %dx/ %d = %d / %d\n\n", b, b, a, b);
			Sleep(2300);
		}
		else
		{
			Sleep(2300);
			printf("Your Answer is Incorrect...\n");
			Sleep(1000);
			printf("Now, We will Divide %d on Both Sides to Isolate x from constants\n\n", b);
			Sleep(2300);
			printf("So, %dx / %d = %d / %d\n\n", b, b, a, b);
		}
//		return g;
	}

int main()
{
	int l = 100, n;

	for (int i=1; i <l; i++)
	{
	    srand(time(NULL));
		int rand();
		int x = rand() % 25;

		int rand();
		int y = rand() % 23;

		int rand();
		int z = rand() % 37;

		if(x!=0 && y!=0 && z!=0)
		{
		printf("Solve the Following Equation using Appropriate Steps: \n\n\n");
		Sleep(1000);
		printf("LINEAR EQUATION %d: \n\n\n", i);
		Sleep(1500);

		printf("%dx + %d = %d\n",x, y, z);

		Sleep(1000);

		printf("\n\nSelect The Appropriate Step:\n1 for Removing %d and Then Solving\n2 for Subtracting both side with ", x);
		printf("%d\n3 for Eliminating %d to get the Solution\n4 to Exit\n\n", y, z);
		scanf("%d",&n);

		Sleep(1200);
		system("cls");

		if (n==2)
		{
			printf("Subtracting %d on Both Sides...\n\n", y);
			printf("So, the EQUATION is of the Form: %dx + %d - %d  = %d - %d\n\n", x,y,y,z,y);
			Sleep(2300);
			float c = z-y;
			printf("We Get: %dx = %.2f\n\n", x, c);
			Sleep(2300);
			divide(c,x);
			Sleep(2300);
			float g = c/x;
			printf("We Get: x = %.2f\n\n",g);
			Sleep (0700);
			printf("|| x = %.2f ||\n\n", g);
			Sleep(3000);
		}
		else if(n==4)
		{
			i=l;
		}
		else
		{
			printf("Your Answer is Incorrect...\n");
			Sleep(1000);
			printf("The Solution to LINEAR EQUATION %d is:\n\n", i);
			Sleep(1000);
			printf("STEP 1: ");
			Sleep(0700);
			printf("Subtract %d on Both Sides...\n\n", y);
			printf("So, the EQUATION is of the Form: %dx + %d - %d = %d - %d \n\n", x,y,y,z,y);
			Sleep(2300);
			float c = z-y;
			printf("We Get: %dx = %.2f \n\n", x,c);
			Sleep(3300);
			printf("Now, We will Divide %d on Both Sides to Isolate x from constants\n\n", x);
			Sleep(3300);
			printf("So, %dx/ %d = %.2f / %d\n\n", x,x,c,x);
			Sleep(2300);
			float g = c/x;
			printf("We Get: x = %.2f",g);
			Sleep (0700);
			printf("|| x = %.2f ||\n\n", g);
			Sleep(7000);

		}

		system("cls");
        }
	}
	printf("Closing The Application");
	Sleep(0700);
	printf(".");
	Sleep(0700);
	printf(".");
	Sleep(0700);
	printf(".\n\n");
	Sleep(1000);
	printf("Thank You For Using Our Application...!!!\n");
	Sleep(2500);
	Beep (2000,1500);

    return 0;
	system("pause");
}
