##
## EPITECH PROJECT, 2023
## EverydayEpic [WSL: Ubuntu]
## File description:
## Makefile
##

GCC 	=	g++

NAME	=	EverydayEpic

SRC 	=	src/button.cpp			\
			src/Character.cpp		\
			src/event.cpp			\
			src/main.cpp			\
			src/Perso.cpp			\
			src/Request.cpp			\
			src/Story.cpp			\
			src/StoryCreator.cpp	\
			src/text.cpp

OBJ 	=	$(SRC:.cpp=.o)

CPPFLAGS 	=	-I./src -std=c++20

LFLAGS		=	-lsfml-graphics -lsfml-window -lsfml-system -lcurl

all:	$(NAME)

$(NAME):	$(OBJ)
	$(GCC) -o $(NAME) $(OBJ) $(CPPFLAGS) $(LFLAGS)

clean:
	rm -f $(OBJ)

fclean:	clean
	rm -f $(NAME)

re:	fclean all

.PHONY: all clean fclean re
