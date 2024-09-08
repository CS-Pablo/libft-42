CC = cc
CFLAGS = -Wall -Wextra -Werror
TARGET = libft
SRCS = main.c ft_putnbr.c ft_putchar.c ft_print_reverse_alphabet.c ft_print_numbers.c ft_print_combn.c ft_print_comb2.c ft_print_comb.c ft_print_alphabet.c ft_is_negative.c

all: $(TARGET)

$(TARGET):
		$(CC) $(CFLAGS) -o $@ $(SRCS)

.PHONY: all fclean re

fclean:
		-rm -f $(TARGET)

re: fclean al