#CC=g++
#CXXFLAGS += pkg-config opencv --cflags
#LDFLAGS += pdk-config opencv --libs

#SOURCE += test1.cpp

#all:
	#$(CC) '$(CXXFLAGS) $(LDFLAGS)' $(SOURCE) -o test.bin 
	


CC=g++
#CFLAGS+=-g
CFLAGS+=`pkg-config --cflags opencv`
LDFLAGS+=`pkg-config --libs opencv`

PROG=test_OF
OBJS=$(PROG).o

.PHONY:	all clean
$(PROG): $(OBJS)
	$(CC) -o $(PROG) $(OBJS) $(LDFLAGS)

%.o: %.cpp
	$(CC) -c $(CFLAGS) $<

all: $(PROG)

clean_all:
	rm -f $(OBJS) $(PROG) *.o
