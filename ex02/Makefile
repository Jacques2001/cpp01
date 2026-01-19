NAME        = HI

OBJ_DIR     = objs

RED		= \033[0;31m
GREEN	= \033[0;32m
YELLOW	= \033[0;33m
BLUE	= \033[0;34m
CYAN	= \033[0;36m
RESET	= \033[0m

SRCS        = 	main.cpp

OBJS        = $(SRCS:%.c=$(OBJ_DIR)/%.o)

CC          = c++ -std=c++98
CFLAGS  	= -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJS) $(LIBS)
	@echo "$(CYAN)🔧 Linking: $(NAME)$(RESET)"
	@$(CC) $(CFLAGS) $(OBJS) -o $(NAME)
	@echo "$(GREEN)✅ Compilation terminée avec succès !$(RESET)"

$(OBJ_DIR)/%.o: %.c
	@mkdir -p $(dir $@)
	@echo "$(YELLOW)📝 Compiling: $<$(RESET)"
	@$(CC) $(CFLAGS) -c $< -o $@

clean:
	@echo "$(YELLOW)🧹 Cleaning objects...$(RESET)"
	@rm -rf $(OBJ_DIR)

fclean: clean
	@echo "$(RED)🗑️  Full clean...$(RESET)"
	@rm -f $(NAME)

re: fclean all
	@echo "$(GREEN)♻️  Rebuilding project...$(RESET)"

.PHONY: all clean fclean re