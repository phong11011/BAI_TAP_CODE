#include <stdio.h>

void ans(double *a1, double *b1, double *c1, double *a2, double *b2, double *c2);

int main()
{
    double a1, b1, c1, a2, b2, c2;
    
    scanf("%lf", &a1);
    scanf("%lf", &b1);
    scanf("%lf", &c1);
    scanf("%lf", &a2);
    scanf("%lf", &b2);
    scanf("%lf", &c2);
    ans(&a1, &b2, &c1, &a2, &b2, &c2);
    return 0;
}

void ans(double *a1, double *b1, double *c1, double *a2, double *b2, double *c2)
{
    double D, Dx, Dy, x, y;
    D = (*a1) * (*b2) - (*a2) * (*b1);
    Dx = (*c1) * (*b2) - (*c2) * (*b1);
    Dy = (*a1) * (*c2) - (*a2) * (*c1);
    if (D == 0)
    {
        if (Dx == Dy)
        {
            printf("He phuong trinh co vo so nghiem");
        }
        else
        {
            printf("He phuong trinh vo nghiem");
        }
    }
    else
    {
        x = Dx / D;
        y = Dy / D;
        printf("He phuong trinh co nghiem duy nhat\nx = %.5lf\ny = %.5lf", x, y);
    }
}