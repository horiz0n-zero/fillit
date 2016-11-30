#include "fillit.h"
#include "libft.h"
#include <unistd.h>

int			ft_n_piece(char *content)
{
	int i;
	int ranger;
	int colonne;
	int result;

	result = 0;
	colonne = 0;
	ranger = 0;
	i = 0;
	while (content[i]) {
		while (ranger < 4) {
			i++;
			ranger++;
		}
		ranger = 0;
		i++;
		colonne++;
		if (colonne == 4)
		{
			colonne = 0;
			i++;
			result++;
		}
	}
	return (result);
}

t_block *ft_get_block(char *content)
{
	int i;
	int size;
	t_block *blocks;

	size = ft_n_piece(content);
	blocks = (t_block*)malloc(sizeof(t_block) * (size + 1));
	i = 0;
	while(i < size)
	{
		blocks[i].piece = ft_is_of_type(content);
		ft_type_print(blocks[i].piece);
		blocks[i].c = 'A' + i;
		content += 21;
		i++;
	}
	return (blocks);
}

int		ft_get_str_size(char *path)
{
	int		fd;
	int		readen;
	char	buff;
	int		result;

	result = 0;
	buff = '@';
	fd = open(path, O_RDONLY);
	readen = read(fd, &buff, 1);
	while (readen != 0)
	{
		result++;
		readen = read(fd, &buff, 1);
	}
	close(fd);
	return (result);
}

char	*ft_get_str_from_path(char *path, int size)
{
	char	*tab;
	char	tempo;
	int	i;
	int	fd;

	i = 0;
	tab = (char*)malloc(sizeof(char) * (size + 1));
	fd = open(path, O_RDONLY);
	while(read(fd, &tempo, 1) != 0 && tempo != '\0')
	{
		tab[i] = tempo;
		i++;
	}
	tab[i] = '\0';
	close(fd);
	return (tab);
}
