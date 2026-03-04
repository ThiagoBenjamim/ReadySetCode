#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>

int menuInstall(char *langs[], int numLangs);

int ynCheck();

void pythonInstall();

void cInstall();

int main(){
    printf("Welcome to ReadySetCode\n\n");
    
    char *langs[] = {"Quit program", "Python", "C/C++",};
    int numLangs = sizeof(langs)/sizeof(langs[0]);

    while (1 == 1){
        switch (menuInstall(langs, numLangs)){
            case 0:
                return 0;

            case 1:
                pythonInstall();
                break;

            case 2:
                cInstall();
                break;

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
    char choice = 'A';
    while (1 == 1){
        scanf(" %c", &choice);
        if (choice == 'Y' || choice == 'y'){
            return 1;
        }
        else if (choice == 'N' || choice == 'n'){
            return 0;
        }
        else{
            printf("Invalid choice, try again: ");
        }
    }
}

void pythonInstall(){
    printf("Would you like to install python for all users? Y/N: ");
                if (ynCheck() == 1){
                    printf("Installing Python for all users\n");
                    if (system("winget install python3 --scope machine >nul 2>nul") == 0){
                        printf("Python installed\n\n");
                    }
                    else{
                        printf("Installation failed\n\n");
                    }
                }
                else{
                    printf("Installing Python for current user\n");
                    if(system("winget install python3 >nul 2>nul") == 0){
                        printf("Python installed\n\n");
                    }
                    else{
                        printf("Installation failed\n\n");
                    }
                }
}

void cInstall(){
    
}