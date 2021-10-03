#include <stdio.h>
void input_userID(char *userID)
{
    printf("Enter your User ID : \n");
    scanf("%s", userID);
}
void encrypt(char *userID)
{
    while (*userID != '\0')
    {
        *userID = *userID + 2;
        userID++;
    }
}
void decrypt(char *userID)
{
    while (*userID != '\0')
    {
        *userID = *userID - 2;
        userID++;
    }
}
void setPassword(int *password)
{
    printf("Enter your password:\n");
    scanf("%d", password);

}
void passwordCheck(int *ptr)
{
    
    printf("Enter your password to decrypt your UserID \n");
    scanf("%d", ptr);
    
}


int main()
{
    char userID[100];
    int password;
    int Entered_password;
    input_userID(userID);
    setPassword(&password);
    encrypt(userID);
    printf("encrypted userid: %s \n",userID);

    passwordCheck(&Entered_password);
    if(password==Entered_password)
    {
        decrypt(userID);
        printf("your user id is: %s \n", userID);

    }
    else
    {
        printf("Sorry,your password is wrong so you can't decrypt userID");
    }
    
    return 0;
}