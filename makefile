CC=clang
CXX=clang++
RM=rm -f
CPPFLAGS=-g -Iinclude
LDFLAGS=-g -Iinclude

SRCS=components/*.cpp
OBJS=$(subst .cc,.o,$(SRCS))

all: island

island: $(OBJS)
	$(CXX) $(LDFLAGS) -o tool $(OBJS) $(LDLIBS) 

depend: .depend

.depend: $(SRCS)
	rm -f ./.depend
	$(CXX) $(CPPFLAGS) -MM $^>>./.depend;

clean:
	$(RM) $(OBJS)

dist-clean: clean
	$(RM) *~ .dependtool

include .depend
