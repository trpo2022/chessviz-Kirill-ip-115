all: chessviz
    
chessviz: chessviz.c
	gcc -Wall chessviz.c -o chessviz

clean:
	rm chessviz
