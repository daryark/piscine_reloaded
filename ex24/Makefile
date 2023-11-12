NAME = libft.a
SRCS_DIR = srcs
HEADER = includes
CC = gcc
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
	$(CC) $(CFLAGS) -c $(SRCS) -I $(HEADER)
	
# 	ar rcs $@ $^ 
# 	$(CC) $(CFLAGS) -c $< -o $@ -I $(HEADER)

# $(SRCS_DIR)/%.o: $(SRCS_DIR)/%.c $(HEADER)/*.h


clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all