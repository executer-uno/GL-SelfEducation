CXXFLAGS =	-O2 -g -Wall -fmessage-length=0

OBJS =		Task2-Fibonacci.o

LIBS =

TARGET =	build/Task2-Fibonacci

#link command
$(TARGET):	$(OBJS)
	$(CXX) -o $(TARGET) $(OBJS) $(LIBS)

all:	$(TARGET)

clean:
	rm -f $(OBJS) $(TARGET)
