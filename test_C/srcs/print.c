#include "test.h"

void ft_putchar(char c)
{
	const void *cc;

	cc = &c;
	write(0, cc, sizeof(char));
}

void ft_putstr(char *str)
{
	int i;

	i = 0;
	while(str[i])
		ft_putchar(str[i++]);
}

void ft_putendl(char *str)
{
	ft_putstr(str);
	ft_putchar('\n');
}

void ft_putchar_fd(char c, int fd)
{
	const void *cc;
	
	cc = &c;
	write(fd, cc, sizeof(char));
}

void ft_putstr_fd(char *str, int fd)
{
	int i;

	i = 0;
	while (str[i])
		ft_putchar_fd(str[i++], fd);
}
void ft_putendl_fd(char *str, int fd)
{
	ft_putstr_fd(str, fd);
	ft_putchar_fd('\n', fd);
}
