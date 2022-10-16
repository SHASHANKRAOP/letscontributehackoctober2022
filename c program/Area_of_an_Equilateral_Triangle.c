#include <stdio.h>
#include <math.h>

int main()
{
    double sides, area, p;

    printf("Enter value for side of Equilateral Triangle\n");
    scanf("%lf", &sides);

    p    = 3 * sides;
    area = ( (sqrt(3)/4) * sides * sides );

    printf("Perimeter is %lf\n", p);
    printf("Area is %.2lf\n", area);

    return 0;
}
