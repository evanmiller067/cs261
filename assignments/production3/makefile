CC = g++
CFLAGS = -std=c++11 -Wall -g
DEPS = reporter.h entry.h productiondb.h yeardata.h stationdata.h resourcecount.h monthdata.h
OBJS = showreport.cpp reporter.o entry.o productiondb.o stationdata.o yeardata.o monthdata.o resourcecount.o
TARGET = production

%.o: %c $(DEPS)
		$(CC) $(CFLAGS) -c -o $@
$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) -o $@ $^

clean:
	rm *.o
