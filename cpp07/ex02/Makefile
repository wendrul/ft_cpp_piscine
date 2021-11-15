SRCS		=	main.cpp

NAME		=	genericArray

# **************************************************************************** #

MKDIR_P		=	mkdir -p
RM			=	rm -f

# Directories
OBJ_DIR		=	obj
LIB			=
# **************************************************************************** #

OBJS		=	$(patsubst %.cpp, $(OBJ_DIR)/%.o, $(SRCS))
OBJS_NODIR	=	$(patsubst %.o, $(OBJ_DIR)/%.o, $(notdir $(OBJS)))


# COLORS
RED			=	\033[0;31m
GREEN		= 	\033[0;32m
YELLOW		=	\033[0;33m
BLUE		=	\033[0;34m
MAGENTA		=	\033[0;35m
CYAN		=	\033[0;36m
RESET		=	\033[0m
# **************************************************************************** #
CFLAGS		=	-Wall -Wextra -Werror -std=c++98

CC			=	clang++

all:			${NAME}


$(OBJ_DIR)/%.o:	%.cpp
				@$(MKDIR_P) $(OBJ_DIR)
				@$(CC) $(CFLAGS) -c -o $(OBJ_DIR)/$(notdir $@) $< $(INC)
				@printf "\r                                                  \r"
				@printf "$(CYAN)Compiling $(MAGENTA)$<$(RESET)\r"

$(NAME):		$(OBJS)
				@printf "$(CYAN)Done creating $(NAME) object files!\n$(RESET)"
				@$(CC) $(CFLAGS) $(OBJS_NODIR) -o $@ $(INC) $(LIB)
				@echo "$(CYAN)Created $(GREEN)$(NAME)$(CYAN)!! $(RESET)"

clean:
				@${RM} ${OBJS_NODIR}
				@$(MKDIR_P) $(OBJ_DIR)
				@rmdir -p $(OBJ_DIR)
				@echo "$(CYAN)CLEANING$(RESET)"

fclean:			clean
				@${RM} ${NAME}
				@echo "$(CYAN)Everything is $(RED)c $(YELLOW)l $(GREEN)e $(CYAN)a $(MAGENTA)n $(RESET)"

re:				clean all

bonus:			$(NAME)

.PHONY: all clean fclean re bonus
