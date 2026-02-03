CC = gcc
CFLAGS = -Wall -Wextra -std=c11
OBJ = menu.o index_first_negative.o index_last_negative.o multi_between_negative.o multi_before_and_after_negative.o

menu: $(OBJ)
	$(CC) $(CFLAGS) -o menu $(OBJ)

menu.o: menu.c functions.h
index_first_negative.o: index_first_negative.c functions.h
index_last_negative.o: index_last_negative.c functions.h
multi_between_negative.o: multi_between_negative.c functions.h
multi_before_and_after_negative.o: multi_before_and_after_negative.c functions.h

clean:
	rm -f *.o menu