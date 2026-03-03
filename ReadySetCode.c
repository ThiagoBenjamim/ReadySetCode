#include <stdio.h>
#include <stddef.h>

int menuInstall(char *langs[], int numLangs);

int ynCheck();

int main(){
    printf("Welcome to ReadySetCode\n\n");

    int ynChoice;
    
    char *langs[] = {"Quit program", "Python", "C/C++",};
    int numLangs = sizeof(langs)/sizeof(langs[0]);

    switch (menuInstall(langs, numLangs)){
        case 0:
            return 0;

        case 1:
            printf("Would you like to install python for all users? Y/N: ");
            ynChoice = ynCheck();
            if (ynChoice == 1){
                system();
            }
            else{
                system();
            }
    }
}

int menuInstall(char *langs[], int numLangs){
    int choice;
    int repeat = 1;
    printf("What programming language would you like to install?\n\n");

    for (int i = 0; i < numLangs; i++){
        printf("[%d] %s\n", i, langs[i]);
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

int ynCheck(){
    char choice;
    scanf("%c", &choice);
    while (1 == 1){
        if (choice = "Y", "y"){
            return 1;
        }
        else if (choice == "N", "n"){
            return 0;
        }
        else{
            printf("Invalid choice, try again: ");
        }
    }
}