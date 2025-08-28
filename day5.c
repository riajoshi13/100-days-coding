#include <stdio.h>
#include <math.h>

// Q9: Simple and Compound Interest
void q9() {
    double principal, rate, time, SI, CI;

    printf("Enter principal amount: ");
    scanf("%lf", &principal);

    printf("Enter rate of interest (in %%): ");
    scanf("%lf", &rate);

    printf("Enter time (in years): ");
    scanf("%lf", &time);

    // Simple Interest
    SI = (principal * rate * time) / 100.0;

    // Compound Interest
    CI = principal * pow((1 + rate / 100.0), time) - principal;

    printf("Simple Interest = %.2lf\n", SI);
    printf("Compound Interest = %.2lf\n", CI);
}

// Q10: Convert seconds to HH:MM:SS
void q10() {
    int totalSeconds, hours, minutes, seconds;

    printf("Enter time in seconds: ");
    scanf("%d", &totalSeconds);

    hours = totalSeconds / 3600;
    minutes = (totalSeconds % 3600) / 60;
    seconds = totalSeconds % 60;

    printf("Time = %02d:%02d:%02d\n", hours, minutes, seconds);
}

int main() {
    printf("Running Q9:\n");
    q9();

    printf("\nRunning Q10:\n");
    q10();

    return 0;
}
