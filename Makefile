#_/=\_/=\_/=\_/=\_/=\_/=\_/=\_/=\_/=\_/=\_ COLORS _/=\_/=\_/=\_/=\_/=\_/=\_/=\_/=\_/=\_/=\_
RESET	= \033[0m
BLACK 	= \033[1;30m
RED 	= \033[1;31m
GREEN 	= \033[1;32m
YELLOW 	= \033[1;33m
BLUE	= \033[1;34m
PURPLE 	= \033[1;35m
CYAN 	= \033[1;36m
WHITE 	= \033[1;37m

#_/=\_/=\_/=\_/=\_/=\_/=\_/=\_/=\_/=\_/=\_ COMMANDS _/=\_/=\_/=\_/=\_/=\_/=\_/=\_/=\_/=\_/=\_
CC = cc
RM = rm -rf
AR = ar -rcs

#_/=\_/=\_/=\_/=\_/=\_/=\_/=\_/=\_/=\_/=\_ FLAGS _/=\_/=\_/=\_/=\_/=\_/=\_/=\_/=\_/=\_/=\_
CFLAGS	= -Wall -Wextra -Werror #-fsanitize=address
MK		= --no-print-directory

#_/=\_/=\_/=\_/=\_/=\_/=\_/=\_/=\_/=\_/=\_ FOLDERS _/=\_/=\_/=\_/=\_/=\_/=\_/=\_/=\_/=\_/=\_
DEPS			= includes 
SRCS			= .
_SUBFOLDERS		= conversions is linked_list matrix memory pair print str
VPATH			= srcs $(addprefix $(SRCS)/ft_, $(_SUBFOLDERS))
OBJ_DIR			= bin

#_/=\_/=\_/=\_/=\_/=\_/=\_/=\_/=\_/=\_/=\_ FILES _/=\_/=\_/=\_/=\_/=\_/=\_/=\_/=\_/=\_/=\_
NAME			= libnc.a

_CONVERSIONS 	= atoi itoa tochar tolower tonum toupper

_IS 			= isalnum isalpha isascii isdigit isprint

_LINKED_LISTS	= lstadd_back lstadd_front lstclear lstdelone lstiter \
					lstlast lstmap lstnew lstsize

_MEMORY			= bzero calloc memchr memcmp memcpy memmove memset
_PRINT			= putchar_fd putendl_fd putnbr_fd putstr_fd

_STR			= replace replace_all split strchr strdup striteri strjoin strlcat \
					strlcpy strlen strmapi strncmp strnstr strrchr strtrim substr

_MATRIX			= matrix_new matrix_delete matrix_size matrix_copy matrix_append \
					matrix_print

_PAIR 			= pair_new pair_print pair_copy pair_swap pair_delete pair_tostring
_FILES			= $(_CONVERSIONS) $(_IS) $(_LINKED_LISTS) $(_MATRIX) $(_MEMORY) $(_PAIR) \
					$(_PRINT) $(_STR)
OBJS			= $(_FILES:%=ft_%.o)
TARGET			= $(addprefix $(OBJ_DIR)/, $(OBJS))

#_/=\_/=\_/=\_/=\_/=\_/=\_/=\_/=\_/=\_/=\_ RULES _/=\_/=\_/=\_/=\_/=\_/=\_/=\_/=\_/=\_/=\_
all: $(NAME)

$(NAME): $(OBJ_DIR) $(TARGET)
	echo "[$(CYAN) Linking $(RESET)] $(GREEN)$(NAME)$(RESET)"
	$(AR) $(NAME) $(TARGET)
	
	echo "$(GREEN)Done.$(RESET)"
	
$(OBJ_DIR)/%.o : $(SRCS)/%.c 
	echo "[$(CYAN)Compiling$(RESET)] $(CFLAGS) $(GREEN)$<$(RESET)"
	$(CC) $(CFLAGS) -c $< -o $@ -I $(DEPS)

$(OBJ_DIR) :
	mkdir -p $(OBJ_DIR)

clean:	
	echo "[$(RED) Deleted $(RESET)] $(GREEN)$(OBJ_DIR)$(RESET)"
	$(RM) $(OBJ_DIR)

fclean: clean
	echo "[$(RED) Deleted $(RESET)] $(GREEN)$(NAME)$(RESET)"
	$(RM) $(NAME)

re: fclean all

.SILENT:
