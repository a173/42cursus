#include <unistd.h>

int ft_check(char c, char *str, int k)
{
    int i;

    i = -1;
    while (++i < k)
      if (str[i] == c)
         return(0);
    return(1);
}

void ft_inter(char *str1, char *str2)
{
  int i;
  int j;

  i = -1;
  while (str1[++i] && (j = -1))
    if (ft_check(str1[i], str1, i))
      while (str2[++j])
       if (str2[j] == str1[i] && write(1, &str1[i], 1))
         break;
}

void ft_union(char *str1, char *str2)
{
  int i;
  int j;

  i = -1;
  j = -1;
  while (str1[++i])
    if (ft_check(str1[i], str1, i))
      write(1, &str1[i], 1);
  while (str2[++j])
    if (ft_check(str2[j], str1, i) && ft_check(str2[j], str2, j))
      write(1, &str2[j], 1);
}

int main(int argc, char **argv) {
  if (argc == 3)
  {
    write(1, "inter:", 6);
    ft_inter(argv[1], argv[2]);
    write(1, "\nunion:", 7);
    ft_union(argv[1], argv[2]);
  }
  write(1, "\n", 1);
  return (0);
}
