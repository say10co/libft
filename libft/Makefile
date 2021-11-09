files = $(wildcard ft*.c)
objs = ${files:c=o}
NAME = libft.a
FBONUS = $(wildcard *bonus.c)

all : obs $(NAME)

$(NAME): $(objs)
	ar rc $@ $^
obs: $(files)
	gcc -Wall -Werror -Wextra -c $^
bonus:	$(FBONUS)
	ar rc $(NAME) $^
obj: $(FBONUS) 
	gcc -Wall -Werror -Wextra -c $^
clean:
	rm -f $(objs)
fclean: clean
	rm -f libft.a
re: fclean clean all
