#include <stdio.h>
#include <stdlib.h> 
#include <stdbool.h>
#define DAYS 7
#define SAMPLE 3

int main(){
    int samples[DAYS][SAMPLE];
    int eff_row;
    int eff_col[DAYS];
    printf("how many days");
    int day=validate(DAYS);
    for (int i=0; i< day; i++) {
        eff_col[i]=validate(SAMPLE);
        for (int j=0; j<eff_col[i]; j++) {
            printf("give me a temperature for day %d, sample %d", i+1, j+1);            samples[i][j]=validate(100);
        }
    }
    display(samples, eff_col, eff_row);
    return 0;
}



int validate() {

    int collected_val;
    bool valid=false;
    do {
        printf("Enter a value between 1 and %d "), start, end;
        scanf(%d, &collected_val);
        if (collected_val >=start && collected_val <= end)
            valid=true;
        else
            printf ("try again");;
    } while (!valid);
        return collected_val;
}

void display(int samples[][3], int eff_col[], int eff_row) {
    for (int i = 0; i<eff_row; i++)
        for(j = 0; j<eff_col[i]; j++)
            printf("day %d sample %d: \n", i+1, j+1, samples[i][j]);

}