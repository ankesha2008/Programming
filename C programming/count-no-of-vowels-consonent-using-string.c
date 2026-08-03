#include<stdio.h>

int main() {
	int i=0,len,vowels=0,consonants=0;
	char ch,str[100];
	printf("Enter a string: ");
	gets(str);
	while( str[i]!='\n' && str[i]!='\0' ) 
		i++;	
	len=i;
	i=0;
	while (i<=len) {
        ch = str[i];

        // Convert uppercase letters to lowercase
        if (ch >= 'A' && ch <= 'Z') {
            ch = ch + 32;
        }

        // Check if the character is an alphabet
        if (ch >= 'a' && ch <= 'z') {
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
                vowels++;
            else
                consonants++;
        }

        i++;
    }

    printf("Number of vowels = %d\n", vowels);
    printf("Number of consonants = %d\n", consonants);

	return 0;
}