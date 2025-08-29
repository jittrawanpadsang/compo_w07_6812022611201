#include <stdio.h>

int main(){
    float score = 65;
    float final_score;

    if (score >= 50) {
        final_score = score * 1.05;
    } else {
        final_score = score;
    }
    printf("Final score: %2f\n", final_score);
    printf("End of evaluation\n");

    return 0;
}