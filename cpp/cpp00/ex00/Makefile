# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: chobyounghwa <chobyounghwa@student.42.f    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/24 16:52:18 by bcho              #+#    #+#              #
#    Updated: 2023/04/25 18:30:46 by chobyounghw      ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME 						:=	megaphone

SRC_FILES				:=	megaphone

SRCS						:=	$(addsuffix .cpp, $(SRC_FILES))

OBJ_DIR					:=	obj/
OBJS						:=	$(SRCS:%.cpp=$(OBJ_DIR)%.o)

CXX							:=	c++
CXXFLAGS 				:=	-Wall -Wextra -Werror -std=c++98

ifdef DEBUG_MODE
	CXXFLAGS			:=	$(CXXFLAGS) -g
endif

ifdef D_SANI
	CXXFLAGS			:=	$(CXXFLAGS) -g -fsanitize=address
endif

.PHONY : all
all : $(NAME)

.PHONY : clean
clean :
	rm -rf $(OBJ_DIR)

.PHONY : fclean
fclean : clean
	rm -f $(NAME)

.PHONY : re
re : fclean
	make -j4

.PHONY : debug
debug : fclean
	make -j4 DEBUG_MODE=1 all

.PHONY : dsani
dsani : fclean
	make -j4 D_SANI=1 all

$(NAME) : $(OBJS)
	$(CXX) $(CXXFLAGS) -o $@ $^

$(OBJS): $(OBJ_DIR)%.o: %.cpp
	mkdir -p $(@D)
	$(CXX) $(CXXFLAGS) -c $< -o $@