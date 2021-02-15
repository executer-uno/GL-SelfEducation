CXXFLAGS =	-O2 -g -Wall -fmessage-length=0

OBJS =		Task1-Stack.o stack.o

LIBS =

TARGET =	build/Task1-Stack

#link command
$(TARGET):	$(OBJS)
	$(CXX) -o $(TARGET) $(OBJS) $(LIBS)

all:	$(TARGET)

clean:
	rm -f $(OBJS) $(TARGET)
