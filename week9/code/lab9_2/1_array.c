#include <stdio.h>

double get_array_avg(int values[], int n) {
    int i;
    double sum = 0.0;
    for (i = 0; i < n; i++)
        sum += values[i];
    return sum / n;
}

void print_array(int values[], int n) {
    int i;
    printf("[ ");
    for (i = 0; i < n; i++)
        printf("%d ", values[i]);
    printf("]\n");
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int arrSize = sizeof(arr) / sizeof(arr[0]);

    printf("%lf\n", get_array_avg(arr, arrSize));
    print_array(arr, arrSize);
}