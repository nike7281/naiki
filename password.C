#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MIN_LENGTH 8

void evaluatePassword(const char *password) {
    int hasUpper=0,hasLower=0,hasDigit=0;
    int length=strlen(password);
    
    for(int i=0; i <length; i++) {
        if(isupper(password[i])) {
            hasUpper=1;
        }else if(islower(password[i])) {
            hasUpper=1;
        }else if(isdigit(password[i])) {
            hasDigit=1;
        }
    }
    
}

int isStrong= (isupper && islower && isdigit);

if(isStrong) {
    printf("このパスワードは強いです。\n");
} else {
    printf("このパスワードは強くありません。改善点\n");
    if(!hasUpper) {
        print("-パスワードに大文字を含めてください。\n");
    }
    if(!hasLower) {
        printf("-パスワードに小文字を含めて下さい。\n");
    }
    if (!hasDigit) {
        printf("-パスワードに数字を含めてください。\n");
    }
}

int main() {
    char password[100];
    
    printf("パスワードを入力してください(8文字以上):");
    scanf("%99s", password);
    
    evaluatePassword(password);

    return 0;
}