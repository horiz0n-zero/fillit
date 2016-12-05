
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

typedef struct s_anchor
{
  int c;
  int r;
}          t_anchor;

typedef struct s_block
{
  char c;
  t_piece piece;
  t_anchor anchor;
  int index;
}              t_block;

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
int  ft_verif(int size, int n_piece, int save);
int  ft_got_error(t_block *array, int size);
int  ft_count_hashtag(char *content, int n);
int ft_get_main_size(char **grid);

/* ft_debug_print.c */
void ft_debug_print_grid(char **tab, int size);
void		ft_type_print(t_piece piece);
void ft_debug_print_blocks(t_block *blocks, int size);

/* solve.c */
void (*ft_get_func(t_piece piece))(t_anchor, char***, char);
int   ft_get_check(t_piece piece, t_anchor anchor, char **grid);
void   ft_place_piece(t_block **blocks, char ***grid, int size);

/* ft_place_object.c */
void ft_place_o(t_anchor anchor, char ***grid, char c);
void ft_place_ih(t_anchor anchor, char ***grid, char c);
void ft_place_iv(t_anchor anchor, char ***grid, char c);
void ft_place_t(t_anchor anchor, char ***grid, char c);
void ft_place_tr(t_anchor anchor, char ***grid, char c);
void ft_place_to(t_anchor anchor, char ***grid, char c);
void ft_place_tor(t_anchor anchor, char ***grid, char c);
void ft_place_s(t_anchor anchor, char ***grid, char c);
void ft_place_z(t_anchor anchor, char ***grid, char c);
void ft_place_sr(t_anchor anchor, char ***grid, char c);
void ft_place_zr(t_anchor anchor, char ***grid, char c);
void ft_place_j(t_anchor anchor, char ***grid, char c);
void ft_place_jr(t_anchor anchor, char ***grid, char c);
void ft_place_jo(t_anchor anchor, char ***grid, char c);
void ft_place_jor(t_anchor anchor, char ***grid, char c);
void ft_place_l(t_anchor anchor, char ***grid, char c);
void ft_place_lr(t_anchor anchor, char ***grid, char c);
void ft_place_lo(t_anchor anchor, char ***grid, char c);
void ft_place_lor(t_anchor anchor, char ***grid, char c);

/* ft_check_place */
int ft_check_ih(t_anchor anchor, char **grid);
int ft_check_iv(t_anchor anchor, char **grid);
int ft_check_o(t_anchor anchor, char **grid);
int ft_check_t(t_anchor anchor, char **grid);
int ft_check_tr(t_anchor anchor, char **grid);
int ft_check_to(t_anchor anchor, char **grid);
int ft_check_tor(t_anchor anchor, char **grid);
int ft_check_s(t_anchor anchor, char **grid);
int ft_check_sr(t_anchor anchor, char **grid);
int ft_check_z(t_anchor anchor, char **grid);
int ft_check_zr(t_anchor anchor, char **grid);
int ft_check_j(t_anchor anchor, char **grid);
int ft_check_jr(t_anchor anchor, char **grid);
int ft_check_jo(t_anchor anchor, char **grid);
int ft_check_jor(t_anchor anchor, char **grid);
int ft_check_l(t_anchor anchor, char **grid);
int ft_check_lr(t_anchor anchor, char **grid);
int ft_check_lo(t_anchor anchor, char **grid);
int ft_check_lor(t_anchor anchor, char **grid);
