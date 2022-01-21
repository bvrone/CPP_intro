NAME		= a.out
CC			= clang++
CFLAGS		= -Wall -Wextra -Werror -g

SRC_MAIN	= main.cpp
SRC_HEADERS	= Karen.hpp
SRC_EXEC	= Karen.cpp

OBJ_MAIN	= $(SRC_MAIN:.cpp=.o)
OBJ_EXEC	= $(SRC_EXEC:.cpp=.o)

SRCS = $(SRC_MAIN) $(SRC_EXEC)
OBJS = $(OBJ_MAIN) $(OBJ_EXEC)

.PHONY:			all clean fclean re 

all:			$(NAME)

$(NAME): 		$(SRCS) $(OBJS)
				$(CC) $(OBJS) -o $(NAME)

$(OBJ_EXEC): 	%.o: %.cpp $(SRC_HEADERS)
				$(CC) $(CFLAGS) -I. -c $< -o $@

$(OBJ_MAIN):	%.o: %.cpp $(SRC_HEADERS)
				$(CC) $(CFLAGS) -I. -c $< -o $@

clean:
				@rm -rf $(OBJS)
				@echo Objects files deleted!

fclean:			clean
				rm -rf $(NAME)

re:				fclean all
