#include<stdio.h>
#include<math.h>

int main()
{
    int m=1;
    double theta_deg = 45.0,theta_rad,ratio;

    theta_rad = theta_deg * (M_PI / 180.0);

    ratio = m/sin(theta_rad);

    printf("The ratio of the slit width to the wavelength is: %.5f\n",ratio);

    return 0;
}
