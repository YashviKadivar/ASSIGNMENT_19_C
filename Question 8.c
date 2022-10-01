/* Given a list of words followed by two words, the task is to find the minimum distance
between the given two words in the list of words.
(Example : s = {“the”,”quick”,”brown”,”fox”,”quick”}
word1 = “the”, word2 = “fox”, OUTPUT : 1 )  */

#include<stdio.h>
#include<string.h>

int main()
{
    char words[5][20] = {"hi", "hello", "how", "are", "you"};
    char word1[] = "hi";
    char word2[] = "you";
    int i, indWord1 = -1, indWord2 = -1, min = 100000;

    for (i = 0; i < 5; i++)
    {
        if (strcmp(words[i], word1) == 0)
            indWord1 = i;
        if (strcmp(words[i], word2) == 0)
            indWord2 = i;
        if (indWord1 != -1 && indWord2 != -1)
            min = abs(indWord1 - indWord2);
    }

    printf("Minimum distance of two words is: %d", min-1);

    return 0;
}
