#include <stdio.h>
#include <math.h>

// Function to calculate the mean of an array
double calculate_mean(double data[], int n) {
    double sum = 0.0;
    for (int i = 0; i < n; i++) {
        sum += data[i];
    }
    return sum / n;
}

// Function to calculate the sum of squares within groups
double calculate_ss_within(double data[], int n, double mean) {
    double ss_within = 0.0;
    for (int i = 0; i < n; i++) {
        ss_within += pow(data[i] - mean, 2);
    }
    return ss_within;
}

// Main function for ANOVA one-way
int main() {
    int n1, n2, n3;
    printf("Enter the number of samples in group 1: ");
    scanf("%d", &n1);
    printf("Enter the number of samples in group 2: ");
    scanf("%d", &n2);
    printf("Enter the number of samples in group 3: ");
    scanf("%d", &n3);

    double group1[n1], group2[n2], group3[n3];

    printf("Enter the data for group 1:\n");
    for (int i = 0; i < n1; i++) {
        scanf("%lf", &group1[i]);
    }

    printf("Enter the data for group 2:\n");
    for (int i = 0; i < n2; i++) {
        scanf("%lf", &group2[i]);
    }

    printf("Enter the data for group 3:\n");
    for (int i = 0; i < n3; i++) {
        scanf("%lf", &group3[i]);
    }

    // Calculate means for each group
    double mean1 = calculate_mean(group1, n1);
    double mean2 = calculate_mean(group2, n2);
    double mean3 = calculate_mean(group3, n3);

    // Calculate overall mean
    double overall_mean = (mean1 * n1 + mean2 * n2 + mean3 * n3) / (n1 + n2 + n3);

    // Calculate sum of squares between groups (SSB)
    double ssb = n1 * pow(mean1 - overall_mean, 2) +
                 n2 * pow(mean2 - overall_mean, 2) +
                 n3 * pow(mean3 - overall_mean, 2);

    // Calculate sum of squares within groups (SSW)
    double ssw = calculate_ss_within(group1, n1, mean1) +
                 calculate_ss_within(group2, n2, mean2) +
                 calculate_ss_within(group3, n3, mean3);

    // Degrees of freedom
    int df_between = 2; // Number of groups - 1
    int df_within = (n1 + n2 + n3) - 3; // Total number of observations - number of groups

    // Mean squares
    double msb = ssb / df_between;
    double msw = ssw / df_within;

    // Calculate F-statistic
    double f_statistic = msb / msw;

    // Output the results
    printf("Sum of Squares Between Groups (SSB): %.2f\n", ssb);
    printf("Sum of Squares Within Groups (SSW): %.2f\n", ssw);
    printf("Mean Square Between (MSB): %.2f\n", msb);
    printf("Mean Square Within (MSW): %.2f\n", msw);
    printf("F-Statistic: %.2f\n", f_statistic);

    return 0;
}
