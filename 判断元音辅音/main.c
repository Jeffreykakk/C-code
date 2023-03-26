
#include <stdio.h>
int main()
{
	char c;
    int isLowercaseVowel,isUppercaseVowel;
    printf("input:");
    scanf("%c",&c);
	isLowercaseVowel = (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
	isUppercaseVowel = (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');
	printf("isLowercaseVowel=%d\nisUppercaseVowel=%d\nisLowercaseVowel || isUppercaseVowel=%d\n",isLowercaseVowel,isUppercaseVowel,isLowercaseVowel || isUppercaseVowel);
	if (isLowercaseVowel || isUppercaseVowel)
	printf("%c is vowel", c);
    else
	printf("%c is consonant", c);
    return 0;
}