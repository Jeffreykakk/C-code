#include <stdio.h>
#include <stdbool.h>
#include <windows.h>

// 我们定义，在以下情况时，单词的大写用法是正确的：
// 全部字母都是大写，比如 "USA"
// 单词中所有字母都不是大写，比如 "leetcode"
// 如果单词不只含有一个字母，只有首字母大写， 比如 "Google"
// 给你一个字符串 word 。如果大写用法正确，返回 true ；否则，返回 false

bool detectCapitalUse(char *word)
{
    char *begin = word;
    int count = 0;
    int len = strlen(word);
    while (*word != '\0')
    {
        if (isupper(*word))
            count++;
        word++;
    }
    if (count == 0 || count == len) // 全大写或全小写
        return true;
    else if (count == 1)
    {
        if (isupper(*begin)) // 只有首字母大写
            return true;
        else
            return false;
    }
    else
        return false;
}

int main()
{
    char word[] = "FlaaG";
    int ret = detectCapitalUse(word);
    printf("%d\n", ret);
    system("pause");
    return 0;
}