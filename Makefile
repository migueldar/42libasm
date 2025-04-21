NAME := libasm.a
TEST_NAME := libasm_test

SRCS :=	ft_strlen.s \
		ft_strcpy.s \
		ft_strcmp.s \
		ft_write.s \
		ft_read.s \
		ft_strdup.s

OBJS := $(SRCS:%.s=%.o)

ASMFLAGS := -f elf64 -g
CFLAGS := -Wall -Werror -Wextra -g

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

all: $(NAME)

main.o: main.c
	gcc $(CFLAGS) -c main.c

%.o: %.s
	nasm $(ASMFLAGS) $<

clean:
	rm -f $(OBJS) main.o

fclean: clean
	rm -f $(NAME) $(TEST_NAME)

re: fclean all

test: $(OBJS) main.o
	gcc $(CFLAGS) $(OBJS) main.o -o $(TEST_NAME)

.PHONY: all clean fclean re