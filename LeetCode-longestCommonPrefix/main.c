#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

char *longestCommonPrefix(char **strs, int strsSize)
{
    if (strsSize == 1)  //[""]
        return strs[0];
    else
    {
        int len = 1;
        int flag = 0;
        while (1)
        {
            int i = 0;
            for (i = 0; i < strsSize - 1; i++)
            {
                if (*strs[i] == '\0')   //["flower","","",""]
                {
                    flag = 1;
                    break;
                }
                if (strs[i][len - 1] == '\0')   //["flower","flower","flower","flower"]
                {
                    flag = 1;
                    break;
                }
                int ret = strncmp(strs[i], strs[i + 1], len);
                if (ret != 0)
                {
                    flag = 1;
                    break;
                }
            }
            if (flag == 1)
                break;
            len++;
        }
        char *str = (char *)malloc(sizeof(char) * (len));
        strncpy(str, strs[0], len - 1);
        str[len - 1] = '\0';
        return str;
    }
}

int main()
{
    char* strs[]={"flower","flow","flight"};
    char* str=longestCommonPrefix(strs,sizeof(strs)/sizeof(strs[0]));
    printf("%s\n",str);
    free(str);
    system("pause");
    return 0;
}