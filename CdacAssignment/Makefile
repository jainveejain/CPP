CXXFLAGS =	-O2 -g -Wall -fmessage-length=0

OBJS =		./days/day8/AZFilePrint.o

LIBS =

TARGET =	./days/day8/AZFilePrint

$(TARGET):	$(OBJS)
	$(CXX) -o $(TARGET) $(OBJS) $(LIBS)

all:	$(TARGET)

clean:
	rm -f $(OBJS) $(TARGET)
