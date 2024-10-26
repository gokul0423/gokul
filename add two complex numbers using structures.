#include <stdio.h>

struct Complex 
{
    float real;  
    float imag;  
};

void inputComplex(struct Complex *c) 
{
    printf("Enter the real part: ");
    scanf("%f", &c->real);
    printf("Enter the imaginary part: ");
    scanf("%f", &c->imag);
}

struct Complex addComplex(struct Complex c1, struct Complex c2)
{
    struct Complex result;
    result.real = c1.real + c2.real;    
    result.imag = c1.imag + c2.imag;     
    return result;
}

void displayComplex(struct Complex c) 
{
    if (c.imag >= 0)
{
        printf("Result: %.2f + %.2fi\n", c.real, c.imag);
    } 
else
{
        printf("Result: %.2f - %.2fi\n", c.real, -c.imag);
    }
}

int main()
{
    struct Complex num1, num2, sum;

    printf("Enter the first complex number:\n");
    inputComplex(&num1);

    printf("Enter the second complex number:\n");
    inputComplex(&num2);

    sum = addComplex(num1, num2);

    displayComplex(sum);

    return 0;
}
