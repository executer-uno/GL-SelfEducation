CXXFLAGS =	-O2 -g -Wall -fmessage-length=0

OBJS =		Task3-Linux.o

LIBS =

TARGET =	build/Task3-Linux

#link command
$(TARGET):	$(OBJS)
	$(CXX) -o $(TARGET) $(OBJS) $(LIBS)

all:	$(TARGET)

clean:
	rm -f $(OBJS) $(TARGET)
