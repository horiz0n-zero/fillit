
#include <fcntl.h>

typedef enum e_piece
{
  ih,
  iv,
  o,
  lr,
  lo,
  l,
  lor,
  jr,
  j,
  jo,
  jor,
  tr,
  t,
  to,
  tor,
  zr,
  z,
  s,
  sr,
  error
}         t_piece;

typedef struct s_block
{
  char c;
  t_piece piece;
}              t_block;

typedef struct s_anchor
{
  int c;
  int r;
}          t_anchor;

typedef enum e_error
{
  format,
  nil
}   t_error;

/* error function */
void ft_error(t_error error);

/* ft_extract_data.c */
int ft_get_str_size(char *path);
char *ft_get_str_from_path(char *path, int size);
t_piece		ft_is_of_type(char *str);
t_block *ft_get_block(char *content);
int			ft_n_piece(char *content);

/* ft_create_data.c */
char **ft_init_double_tab(int size);

/* ft_debug_print.c */
void ft_debug_print_grid(char **tab, int size);
void		ft_type_print(t_piece piece);
void ft_debug_print_blocks(t_block *blocks, int size);

/* ft_place_object.c */
void ft_place_o(t_anchor anchor, char ***grid, char c);
void ft_place_i_h(t_anchor anchor, char ***grid, char c);
void ft_place_i_v(t_anchor anchor, char ***grid, char c);
void ft_place_t(t_anchor anchor, char ***grid, char c);
void ft_place_t_r(t_anchor anchor, char ***grid, char c);
void ft_place_t_g(t_anchor anchor, char ***grid, char c);
void ft_place_t_d(t_anchor anchor, char ***grid, char c);
void ft_place_s(t_anchor anchor, char ***grid, char c);
void ft_place_z(t_anchor anchor, char ***grid, char c);
void ft_place_s_r(t_anchor anchor, char ***grid, char c);
void ft_place_z_r(t_anchor anchor, char ***grid, char c);
void ft_place_l_r(t_anchor anchor, char ***grid, char c);
void ft_place_n_r(t_anchor anchor, char ***grid, char c);
void ft_place_l(t_anchor anchor, char ***grid, char c);
void ft_place_n(t_anchor anchor, char ***grid, char c);
