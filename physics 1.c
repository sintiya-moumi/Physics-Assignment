#include<stdio.h>
#include<math.h>
int main()
{
    int m;
    double lambda, theta_deg,theta_rad, d;

    printf("Enter the wavelength (in nm): ");
    scanf("%lf",&lambda);

    if (lambda<380 || lambda>750)
    {
        printf("Out of the range.Please enter a valid number.\n");
        return 0;
    }

    printf("Enter the value of theta (in degree): ");
    scanf("%lf",&theta_deg);

    theta_rad=theta_deg*(M_PI/180.0);

    printf("Enter the slit separation (in micrometers): ");
    scanf("%lf",&d);

    d=d*1e-6;
    lambda=lambda*1e-9;

    m=(d*sin(theta_rad))/lambda;

    printf("The order of maxima is: %d",m);

    return 0;
}
