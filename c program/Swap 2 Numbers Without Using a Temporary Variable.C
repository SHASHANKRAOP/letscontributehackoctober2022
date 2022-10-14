#include < stdio.h >  
  
int main()  
{  
    int x = 10, y = 5;  
  
    printf("Before swapping x = %d and y = %d\n", x, y);  
  
    x = x + y - ( y = x );  
  
    printf("After swapping x = %d and y = %d\n", x, y);  
  
    return 0;  
}  
