#include <stdio.h>
#include <stddef.h>

int menuInstall(char *langs[], int numLangs);

int main(){
    printf("Welcome to ReadySetCode\n\n");
    
    char *langs[] = {"Python", "C/C++"};
    int numLangs = sizeof(langs)/sizeof(langs[0]);

    printf("%d", menuInstall(langs, numLangs));

    return 0;
}

int menuInstall(char *langs[], int numLangs){
    int choice;
    printf("What programming language would you like to install?\n\n");

    for (int i = 0; i < numLangs; i++){
        printf("[%d] %s\n", i + 1, langs[i]);
    }
    printf("Select the number of your choice your choice: ");
    scanf("%d", &choice);

    return choice;
}