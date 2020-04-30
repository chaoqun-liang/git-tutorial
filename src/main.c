#include <stdio.h>
#include <espl_lib.h>

int main() {
    int input_num;
    char ans;

    do{
    printf("Please enter a number:\n"); 
    scanf("%d",&input_num);
    char *returned_str = num_to_words(input_num);
    printf("The corresponding word is : %s \n",returned_str);
    printf("Do your want to run another number[Y/N]: ");
    scanf(" %c",&ans);
    }while(ans == 'Y' || ans == 'y');
}
