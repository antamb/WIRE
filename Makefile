
CC	= gcc

NAME 	= fdf

SRC 	= annex.c \
	 width_case.c \
	 interval.c \
	 malloctab.c \
	 fillstring.c \
	 heightmax.c \
	 gerekey.c \
	 gerexpose.c \
	 epurstr.c \
	 drawlinecas3.c \
	 drawlinecas4.c \
	 drawline.c \
	 countnumb.c \
	 put_pixel_to_image.c \
	 fdf.c \
	 drawlinecas2.c \
	 drawlinecas1.c \
	 my_strlen.c \
	 my_get_nbr.c \
	 main.c \
	 epurspace.c \
	 chang2d.c \
	 line.c \
	 fillupbigstr.c \
	 filluplist.c \
	 nblines.c \
	 my_add_in_list.c \
	 freelist.c \
	 reset.c

OBJS 	= $(SRC:.c=.o)

RM	= rm -f

LDFLAGS	= -L. -L/usr/X11R6/lib/ -lmlx -lX11 -lXext

CFLAGS  = -I. -pedantic -ansi -pipe -Werror -W -Wall 

$(NAME) :$(OBJS)
	$(CC) -o $(NAME) $(OBJS) $(LDFLAGS)

all 	:$(NAME)

clean 	:
	$(RM) *.o *# *.out *~

fclean 	:clean
	$(RM) $(NAME)

re 	: fclean all
