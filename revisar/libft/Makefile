NAME		= libft.a
CFLAGS		= -Wall -Werror -Wextra -I. -c
FILES		= 	ft_isalnum.c \
				ft_isalpha.c \
				ft_isascii.c \
				ft_isdigit.c \
				ft_isprint.c \
				ft_tolower.c \
				ft_toupper.c \
				ft_strchr.c	 \
				ft_strrchr.c \
				ft_strlen.c  \
				ft_strcmp.c  \
				ft_strncmp.c \
				ft_memset.c  \
				ft_memchr.c  \
				ft_memcpy.c  \
				ft_bzero.c   \
				ft_memcmp.c  \
				ft_memmove.c \
				ft_strnstr.c \
				ft_strlcpy.c \
				ft_strlcat.c \
				ft_atoi.c	 \
				ft_calloc.c	 \
				ft_strdup.c  \
				ft_substr.c  \
				ft_strjoin.c \
				ft_strtrim.c

OBJ			= $(FILES:%.c=%.o)

all: $(NAME)

copy:
	cp -f lib_code/*.c .

# This won't run if the .o files don't exist or are not modified
$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

# This won't run if the source files don't exist or are not modified
$(OBJ): $(FILES)
	gcc $(CFLAGS) $(FILES)

clean:
	rm -f $(OBJ)
# rm -f $(FILES) # comment this line if you don't want it to remove the source files from the root

fclean: clean
	rm -f $(NAME)

re: fclean all

# I use .PHONY to make sure that gnu make will still run even if files called
#clean / fclean / all and re already exist in the directory
.PHONY: clean fclean all re