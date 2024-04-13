#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool isPalindrome(char *str) {
    int length = strlen(str);
    for (int i = 0; i < length / 2; i++)
	{
        if (str[i] != str[length - i - 1])
		{
            return false;
        }
    }
    return true;
}

int main(void)
{
    char arr[100];
	
	printf("Enter the string : ");
	scanf(" %s", &arr);
	
	if(isPalindrome(arr))
	{
		printf(" \"%s\" is Palindrome.", arr);
	}
	else
	{
		printf(" \"%s\" isn't Palindrome.", arr);

	}
	
    return 0;
}