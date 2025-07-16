#include<stdio.h>


      int add(int a, int b);      
      int subtract(int a, int b);    
      int multiply(int a, int b); 
	  int division(int a, int b)
	  {
	  	return a/b;
		 }   
      void showMenu(); 
      int main() {
      
	  
	  int choice;
      int num1, num2, result;
      char again;

   do {
        showMenu();

        printf("\nEnter your choice (1-4): ");
        scanf("%d", &choice);

        if (choice >= 1 && choice <= 4) 
		{
            printf("Enter first number: ");
            scanf("%d", &num1);
            printf("Enter second number: ");
            scanf("%d", &num2);
            switch (choice){
                case 1:
                    result = add(num1, num2);
                    printf("Result: %d + %d = %d\n", num1, num2, result);
                    break;
                    
                case 2:
                    result = subtract(num1, num2);
                    printf("Result: %d - %d = %d\n", num1, num2, result);
                    break;
                    
                case 3:
                    result = multiply(num1, num2);
                    printf("Result: %d * %d = %d\n", num1, num2, result);
                    break;
                    
                case 4:
                    if (num2 != 0) {
                        result = division(num1, num2);
                        printf("Result: %.2f / %.2f = %.2f\n", num1, num2, result);
                    } else {
                        printf("Error: Division by zero is not allowed!\n");
                    }
                    break;
            }
            
        } else {
      
         printf("Invalid choice! Please select a number between 1 and 4.\n");
         
        }

        printf("\nDo you want to perform another operation? (y/n): ");
        scanf(" %c", &again);

        } while (again == 'y' || again == 'Y');

         printf("\nThank you for using the calculator!\n");

         return 0;
        }

        void showMenu()
  {
    printf("\n============================\n");
    printf("     SIMPLE CALCULATOR\n");
    printf("============================\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("============================\n");
}

    int add(int a, int b) {
    return a + b;
}

    int subtract(int a, int b) {
    return a - b;
}

    int multiply(int a, int b) {
    return a * b;

}


