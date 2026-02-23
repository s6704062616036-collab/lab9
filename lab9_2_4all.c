#include <stdio.h>
#include <string.h>
#include <ctype.h>
int checkLogin(char *login, char *passwd);
int checkValidPass(char *ps);

int main() {
    char login[64], password[64];
    printf("Enter login : "); 
	scanf("%s", login);
    printf("Enter password : "); 
	scanf("%s", password);
    if(checkLogin(login, password) == 1){
        printf("Welcome\n");
    }else{
        printf("Incorrect login or password\n");
    }
    if(checkValidPass(password)){
        printf("Accepted\n");
    }else{
        printf("Reject\n");
    }
    return 0;
}
int checkValidPass(char *ps){
    int len = strlen(ps);
    int upperCount = 0;
    int digitCount = 0;
    int upperSeen[26] = {0};
    int isRepeat = 0;
    int i;

    for(i = 0; i < len; i++){
        if(isdigit(ps[i])) digitCount++;
        
        if(isupper(ps[i])){
            int index = ps[i] - 'A';
            if(upperSeen[index] > 0) isRepeat = 1;
            upperSeen[index] = 1;
            upperCount++;
        }
    }
    if(len == 5 && digitCount >= 1 && upperCount < 2){
        return 1;
    }
    if(len >= 5 && len <= 8){
        if(isdigit(ps[0]) == 0 && upperCount >= 2 && digitCount >= 2 && isRepeat == 0){
            return 1;
        }
    }
    return 0;
}
int checkLogin(char *login, char *passwd){
    if(!strcmp(login, "student1") && !strcmp(passwd, "mypass"))
        return 1;
    else
        return 0;
}
