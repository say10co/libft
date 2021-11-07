files = $(wildcard ft_*.c)
objs = ${files:c=o}
NAME = libft.a
all : obs $(NAME)

$(NAME): $(objs)
	ar rc $@ $^
obs: $(files)
	gcc -Wall -Werror -Wextra -c $^
clean:
	rm -f $(objs)
fclean: clean
	rm -f libft.a
re: fclean clean all
