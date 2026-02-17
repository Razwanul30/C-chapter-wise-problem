#include <stdio.h>

int main() {
    int math, physics, chemistry;

    printf("Enter marks for Mathematics, Physics, and Chemistry:\n");
    scanf("%d %d %d", &math, &physics, &chemistry);

    int total_three = math + physics + chemistry;
    int total_math_physics = math + physics;

    if ((math >= 60 && physics >= 50 && chemistry >= 40 && total_three >= 200) || total_math_physics >= 150) {
        printf("The candidate is eligible for admission.\n");
    } else {
        printf("The candidate is not eligible for admission.\n");
    }

    return 0;
}
