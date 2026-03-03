#include <stdio.h>
#include <stddef.h>

int menuInstall(char *langs[], int numLangs);

int main(){
    printf("Welcome to ReadySetCode\n\n");
    
    char *langs[] = {"Quit program", "Python", "C/C++",};
    int numLangs = sizeof(langs)/sizeof(langs[0]);

    printf("%d", menuInstall(langs, numLangs));

    return 0;
}

int menuInstall(char *langs[], int numLangs){
    int choice;
    int repeat = 1;
    printf("What programming language would you like to install?\n\n");

    for (int i = 0; i < numLangs; i++){
        printf("[%d] %s\n", i + 1, langs[i]);
    }
    printf("\n");

    printf("Select the number of your choice your choice: ");
    while (repeat == 1){
        scanf("%d", &choice);

        if (choice < 0 || choice >= numLangs){
            printf("Invalid choice, try again: ");
        }
        else{
            repeat = 0;
        }
    }

    return choice;
}