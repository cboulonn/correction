#include "../get_next_line.h"

int		main(int argc, char **argv)
{
	int i;
	int fd;
	int ret;
	char *line;

	i = 0;
	line = NULL;
	if (argc == 1)
		while (get_next_line(0, &line))
		{
			ft_putendl(line);
			free(line);
		}
	while (i + 1 < argc)
	{
		fd = open(argv[i + 1], O_RDONLY);
		while ((ret = get_next_line(fd, &line)) > 0)
		{
			ft_putendl(line);
			free(line);
		}
		if (ret == -1)
			ft_putendl("Bad opening ok");
		i++;
	}
	return (0);
}
