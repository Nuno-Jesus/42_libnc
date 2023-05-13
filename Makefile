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

_CONVERSIONS 	= ft_atoi ft_itoa ft_tochar ft_tolower ft_tonum ft_toupper

_IS 			= ft_isalnum ft_isalpha ft_isascii ft_isdigit ft_isprint

_LINKED_LISTS	= ft_lstadd_back ft_lstadd_front ft_lstclear ft_lstdelone ft_lstiter \
					ft_lstlast ft_lstmap ft_lstnew ft_lstsize

_MEMORY			= ft_bzero ft_calloc ft_memchr ft_memcmp ft_memcpy ft_memmove ft_memset
_PRINT			= ft_putchar_fd ft_putendl_fd ft_putnbr_fd ft_putstr_fd

_STR			= ft_replace ft_split ft_strchr ft_strdup ft_striteri ft_strjoin ft_strlcat \
					ft_strlcpy ft_strlen ft_strmapi ft_strncmp ft_strnstr ft_strrchr ft_strtrim ft_substr

_MATRIX			= ft_matrix_new ft_matrix_delete ft_matrix_size ft_matrix_copy ft_matrix_append \
					ft_matrix_print

_PAIR 			= ft_pair_new #ft_pair_delete ft_pair_print ft_pair_copy ft_pair_swap
_FILES			= $(_CONVERSIONS) $(_IS) $(_LINKED_LISTS) $(_MATRIX) $(_MEMORY) $(_PAIR) \
					$(_PRINT) $(_STR)
OBJS			= $(_FILES:%=%.o)
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
