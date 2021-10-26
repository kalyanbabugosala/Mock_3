res:main.o search_word.o
	$(CC) $^ -o $@
%.o:%.c
	$(CC) -c $<
	
clear:
	rm -f *.o res
