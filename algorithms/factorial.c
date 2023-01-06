#include<stdio.h>;

int iteractiveFactorial(int n){
    int fact = 1;
    for (int i = 2; i <= n; i++)
    {
        fact *=i;
    }
    return fact;
}

int recurFactorial(int n){
    if (n == 1)
    {
        return n;   
    }
   return  recurFactorial(n-1)* n;
    
    
    
}
int main()
{
    printf("%d\n",iteractiveFactorial(5));
    printf("%d\n",recurFactorial(5));

    return 0;
}
