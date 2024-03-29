OBJS=scanner.o parser.o main.o
INTERM=scanner.c parser.c parser.h
PROGRAM=./parser
CFLAGS=-g -Wall -Wno-unused-function -Wno-unused-variable

all: $(PROGRAM)

scanner.c: scanner.l parser.h
	flex -o scanner.c scanner.l

parser.c parser.h: parser.y
	bison --verbose --defines=parser.h -o parser.c parser.y

$(PROGRAM): $(OBJS)
	$(CC) -o $(PROGRAM) $(OBJS) -lm

clean:
	rm -f $(PROGRAM) $(OBJS) $(INTERM) *.xml parser.output

test: tests/*
	for file in $^ ; do \
		echo $${file} ; \
		$(PROGRAM) $${file} ; \
		echo '' ; \
	done
