XX = gcc

#CXXFLAGS = -std=c++11
#INC_PATH = ...
#LIBS = ...

SOURCEDIR := /home/user/Desktop/LinkedinCourse/C_CodeClinic/Ch01/Problem1
SOURCES := $(wildcard $(SOURCEDIR)/*.c)
OBJDIR=$(SOURCEDIR)/obj

OBJECTS := $(patsubst $(SOURCEDIR)/%.c,$(OBJDIR)/%.o, $(SOURCES))
DEPENDS := $(patsubst $(SOURCEDIR)/%.c,$(OBJDIR)/%.d, $(SOURCES))

# ADD MORE WARNINGS!
WARNING := -Wall -Wextra

# .PHONY means these rules get executed even if
# files of those names exist.
.PHONY: all clean

# The first rule is the default, ie. "make",
# "make all" and "make parking" mean the same
all: test1 test2

clean:
    $(RM) $(OBJECTS) $(DEPENDS) test1 test2


# Linking the executable from the object files
# $^   # "src.c src.h" (all prerequisites)
test1 test2: $(OBJECTS)
    $(CXX) $(WARNING) $^ -o $@
    #$(CXX) $(WARNING) $(CXXFLAGS) $(INC_PATH) $^ -o $@ $(LIBS)

-include $(DEPENDS)

$(OBJDIR):
    mkdir -p $(OBJDIR)

$(OBJDIR)/%.o: $(SOURCEDIR)/%.c Makefile | $(OBJDIR)
    $(CXX) $(WARNING) -MMD -MP -c $< -o $@