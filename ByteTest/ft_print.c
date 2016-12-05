#include "byte.h"
#include "libft.h"

char	*ft_strndup(const char *s1, size_t n)
{
	char	*ret;
	size_t	i;

	i = 0;
	if ((ret = (char *)malloc(sizeof(char) * n + 1)))
	{
		while (s1[i] && i < n)
		{
			ret[i] = s1[i];
			i++;
		}
		ret[i] = '\0';
		return (ret);
	}
	return (NULL);
}

char	*ft_itoa_base(unsigned long long n, char *base)
{
	char				*s;
	unsigned long long	i;

	i = ft_strlen(base);
	s = (char *)malloc(sizeof(char) * 2);
	if (!s)
		return (NULL);
	if (n >= i)
		s = ft_strjoin(ft_itoa_base(n / i, base), ft_itoa_base(n % i, base));
	else if (n < i)
	{
		s[0] = base[n];
		s[1] = '\0';
	}
	return (s);
}

char	*ft_unicode(int c)
{
	char	*bin;
	char	*code;
	int		i;
	int		j;

	bin = ft_itoa_base(c, "01");
	if (c < 128)
		code = ft_strdup("0xxxxxx");
	else if (c < 2048)
		code = ft_strdup("110xxxxx10xxxxxx");
	else if (c < 131072)
		code = ft_strdup("1110xxxx10xxxxxx10xxxxxx");
	else
		code = ft_strdup("11110xxx10xxxxxx10xxxxxx10xxxxxx");
	i = ft_strlen(code);
	j = ft_strlen(bin) - 1;
	while (--i > 0)
		if (code[i] == 'x')
		{
			if (j >= 0)
				code[i] = bin[j--];
			else
				code[i] = '0';
		}
	return (code);
}

int	ft_base_atoi(char c, char *base)
{
	int		i;

	i = 0;
	while (base[i])
	{
		if (base[i] == c)
			return (i);
		i++;
	}
	return (-1);
}

int			ft_atoi_base(char *str, char *base)
{
	int		tot;
	int		sign;
	int		i;

	tot = 0;
	sign = 1;
	i = 0;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' ||
			str[i] == '\r' || str[i] == '\v' || str[i] == '\f')
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while (ft_base_atoi(str[i], base) != -1)
	{
		tot = tot * ft_strlen(base) + ft_base_atoi(str[i], base);
		i++;
	}
	return (tot * sign);
}

int		ft_putwchari(int c)
{
	char	*arg;
	int		nb;
	int		i;

	arg = ft_unicode(c);
	i = 0;
	nb = 0;
	while (arg[i])
	{
		if (c < 128)
			ft_putchar(c);
		else
			ft_putchar(ft_atoi_base(ft_strndup(arg + i, 8), "01"));
		i += 8;
		nb++;
	}
	return (nb);
}

void  ft_str_unicode(wchar_t *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		ft_putchar_unicode(str[i]);
		i++;
	}
	if (i < 1)
	{
		ft_putstr("aucune donnée");
	}
}

void	ft_putchar_unicode(wchar_t c)
{
	if ((unsigned int)c < 2048)
	{
		ft_putchar(192 | ((unsigned int)c >> 6));
		ft_putchar(128 | ((unsigned int)c & 63));
	}
	else if ((unsigned int)c < 65536)
	{
		ft_putchar(224 | ((unsigned int)c >> 12));
		ft_putchar(128 | (((unsigned int)c >> 6) & 63));
		ft_putchar(128 | ((unsigned int)c & 63));
	}
	else if ((unsigned int)c < 1114112)
	{
		ft_putchar(240 | ((unsigned int)c >> 18));
		ft_putchar(128 | (((unsigned int)c >> 12) & 63));
		ft_putchar(128 | (((unsigned int)c >> 6) & 63));
		ft_putchar(128 | ((unsigned int)c & 63));
	}
}

char ft_base_hexa(int n)
{
	if (n == 10)
		return ('a');
	else if (n == 11)
		return ('b');
	else if (n == 12)
		return ('c');
	else if (n == 13)
		return ('d');
	else if (n == 14)
		return ('e');
	else if (n == 15)
		return ('f');
	return ('0' + n);
}

void ft_print_hexa(unsigned long long nb) {
	char tab[19];
	int i;

	i = 0;
	if (nb == 0)
	{
		ft_putstr("0x0");
		return ;
	}
	while (nb != 0) {
		tab[i] = ft_base_hexa(nb % 16);
		nb /= 16;
		i++;
	}
	tab[i++] = 'x';
	tab[i++] = '0';
	tab[i] = '\0';
	ft_strrev(tab);
	ft_putstr(tab);
}



void ft_print_pointer(void *pointer)
{
	ft_print_hexa((unsigned long long)pointer);
}

void ft_print_byte(unsigned char c) {
	unsigned char max;

	max = 1 << 7;
	while (max) {
		ft_putchar(((c & max) ? '1' : '0'));
		max >>= 1;
	}
}

void	ft_print_bits(unsigned int nb)
{
	unsigned int size;
	unsigned int max;
	unsigned int i;
	unsigned int x;

	i = 0;
	x = 0;
	size = sizeof(unsigned int);
	max = 1 << (size * 8 - 1);
	while (max)
	{
		ft_putchar(((nb & max) ? '1' : '0'));
		max >>= 1;
	}
}
