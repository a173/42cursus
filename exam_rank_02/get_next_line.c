# include "get_next_line.h"

int get_next_line(char **line)
{
    char    buf[10000];
    int     b_read;
    int     i;

    if (((i = 0) && read(0, &buf[i], 0) < 0) || !(line))
        return (-1);
    while ((b_read = read(0, &buf[i], 1)) > 0 && buf[i] != '\n')
        i++;
    buf[i] = '\0';
    if (b_read != -1 && (*line = malloc(i * sizeof(char))) && (i = -1))
    {
        while (buf[++i])
            (*line)[i] = buf[i];
        (*line)[i] = '\0';
    }
    return (b_read > 0 ? 1 : b_read);
}

int	main()
{
	int		a;
	char	*line;

	line = NULL;
	while ((a = get_next_line(&line) > 0))
	{
		printf("Функция возвращает:|%d|\nСчитанная строка:|%s|\n", a, line);
		printf("_______________________________________________________\n");
        free(line);
	}
    printf("Функция возвращает:|%d|\nСчитанная строка:|%s|\n", a, line);
    free(line);
	return (0);
}
