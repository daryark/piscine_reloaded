NAME = ft_display_file.a
SRCS_DIR = srcs
HEADER = includes
CFLAGS += -Wall \
	-Wextra \
	-Werror


SRCS = $(wildcard $(SRCS_DIR)/*.c) 
#  wildcard can find all the .c files in the directory like this

OBJS = $(SRCS:.c=.o)
# $(HEADER)/*.h

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)
	gcc $(CFLAGS) -c $(SRCS) -I $(HEADER)


clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all