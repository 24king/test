CC=gcc

INC+= -I.
LIB+= -pthread

CFLAGS+= -g

TARGET= main
ALL:$(TARGET)

OBJ= rte_ring.o main.o 

$(TARGET):$(OBJ)  
	$(CC) $(CFLAGS) -o $@ $^ $(LIB)

%.o: %.c
	$(CC) $(CFLAGS) $(INC) -c -o $@ $<

clean:
	rm -f *.o
	rm -f $(TARGET) 

install:
