#include <stdlib.h>
#include <string.h>

/**
 * count_words - Counts the number of words in a string
 * @str: The string to count words in
 *
 * Return: The number of words in the string
 */
int count_words(char *str);

/**
 * strtow - Splits a string into words
 * @str: The string to split
 *
 * Return: A pointer to an array of strings (words)
 *         Each element of the array contains a single word, null-terminated
 *         The last element of the array is NULL
 *         Returns NULL if str == NULL or str == ""
 *         Returns NULL if memory allocation fails
 */
char **strtow(char *str)
{
	if (str == NULL || *str == '\0')
	return NULL;

	int num_words = count_words(str);
	if (num_words == 0)
	return NULL;

	char **words = malloc(sizeof(char *) * (num_words + 1));
	if (words == NULL)
	return NULL;

	int word_index = 0;
	while (*str != '\0')
	{
	while (*str == ' ')
	str++;

	if (*str == '\0')
            break;

        char *word_start = str;
        while (*str != ' ' && *str != '\0')
            str++;

        int word_length = str - word_start;
        char *word = malloc(sizeof(char) * (word_length + 1));
        if (word == NULL)
            return NULL;

        strncpy(word, word_start, word_length);
        word[word_length] = '\0';

        words[word_index] = word;
        word_index++;
    }

    words[num_words] = NULL;
    return words;
}

/**
 * count_words - Counts the number of words in a string
 * @str: The string to count words in
 *
 * Return: The number of words in the string
 */
int count_words(char *str)
{
	int count = 0;
	int in_word = 0;

	while (*str != '\0')
	{
	if (*str == ' ')
	{
		in_word = 0;
	}
	else if (in_word == 0)
	{
		in_word = 1;
		count++;
	}

	str++;
	}

	return count;
}
