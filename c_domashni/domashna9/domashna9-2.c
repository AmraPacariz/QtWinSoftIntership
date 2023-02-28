/*Да се реши систем од три равенки со три непознати.*/
#include <stdio.h>

double determinantOfMatrix(double mat[3][3])
{
    double ans;
    ans = mat[0][0] * (mat[1][1] * mat[2][2] - mat[2][1] * mat[1][2])
          - mat[0][1] * (mat[1][0] * mat[2][2] - mat[1][2] * mat[2][0])
          + mat[0][2] * (mat[1][0] * mat[2][1] - mat[1][1] * mat[2][0]);
    return ans;
}

void findSolution(double coeff[3][4])
{
    double d[3][3] = {
        { coeff[0][0], coeff[0][1], coeff[0][2] },
        { coeff[1][0], coeff[1][1], coeff[1][2] },
        { coeff[2][0], coeff[2][1], coeff[2][2] },
    };
    double d1[3][3] = {
        { coeff[0][3], coeff[0][1], coeff[0][2] },
        { coeff[1][3], coeff[1][1], coeff[1][2] },
        { coeff[2][3], coeff[2][1], coeff[2][2] },
    };
    double d2[3][3] = {
        { coeff[0][0], coeff[0][3], coeff[0][2] },
        { coeff[1][0], coeff[1][3], coeff[1][2] },
        { coeff[2][0], coeff[2][3], coeff[2][2] },
    };
    double d3[3][3] = {
        { coeff[0][0], coeff[0][1], coeff[0][3] },
        { coeff[1][0], coeff[1][1], coeff[1][3] },
        { coeff[2][0], coeff[2][1], coeff[2][3] },
    };

    double D = determinantOfMatrix(d);
    double D1 = determinantOfMatrix(d1);
    double D2 = determinantOfMatrix(d2);
    double D3 = determinantOfMatrix(d3);

    if (D != 0) {
        double x = D1 / D;
        double y = D2 / D;
        double z = D3 / D;
        printf("Vrednost za x e: %.2lf\n", x);
        printf("Vrednost za y e: %.2lf\n", y);
        printf("Vrednost za z e: %.2lf\n", z);
    }
    else {
        if (D1 == 0 && D2 == 0 && D3 == 0)
            printf("Beskonechno reshenija\n");
        else if (D1 != 0 || D2 != 0 || D3 != 0)
            printf("Nema reshenie\n");
    }
}

int main()
{
    double a1,a2,a3,b1,b2,b3,c1,c2,c3,d1,d2,d3;
 
    printf("a1 = ");
    scanf("%f", &a1);

    printf("b1 = ");
    scanf("%f", &b1);

    printf("c1 = ");
    scanf("%f", &c1);
    
    printf("d1 = ");
    scanf("%f", &d1);

    printf("a2 = ");
    scanf("%f", &a2);

    printf("b2 = ");
    scanf("%f", &b2);

    printf("c2 = ");
    scanf("%f", &c2);

    printf("d2 = ");
    scanf("%f", &d2);

    printf("a3 = ");
    scanf("%f", &a3);

    printf("b3 = ");
    scanf("%f", &b3);

    printf("c3 = ");
    scanf("%f", &c3);

    printf("d3 = ");
    scanf("%f", &d3);


    double coeff[3][4] = {
        { a1, b1, c1, d1 },
        { a2, b2, c2, d2 },
        { a3, b3, c3, d3 },
    };

    findSolution(coeff);
    return 0;
}