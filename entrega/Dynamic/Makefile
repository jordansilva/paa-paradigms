#############
## DYNAMIC ##
#############


WORKDIR = `pwd`

CC = gcc
CXX = g++
AR = ar
LD = g++
WINDRES = windres

INC = 
CFLAGS = -Wall
RESINC = 
LIBDIR = 
LIB = 
LDFLAGS = 

INC_RELEASE = $(INC)
CFLAGS_RELEASE = $(CFLAGS) -O3 -std=c++11
RESINC_RELEASE = $(RESINC)
RCFLAGS_RELEASE = $(RCFLAGS)
LIBDIR_RELEASE = $(LIBDIR)
LIB_RELEASE = $(LIB)
LDFLAGS_RELEASE = $(LDFLAGS)
OBJDIR_RELEASE = obj
OUTDIR_RELEASE = bin
DEP_RELEASE = 
OUT_RELEASE = $(OUTDIR_RELEASE)/dynamic

OBJ_RELEASE = $(OBJDIR_RELEASE)/dynamic.o $(OBJDIR_RELEASE)/src/domain/Level.o $(OBJDIR_RELEASE)/src/helper/Settings.o $(OBJDIR_RELEASE)/src/algorithms/Dynamic.o

all: release

clean: clean_release

before_release: 
	test -d $(OUTDIR_RELEASE) || mkdir -p $(OUTDIR_RELEASE)
	test -d $(OBJDIR_RELEASE) || mkdir -p $(OBJDIR_RELEASE)
	test -d $(OBJDIR_RELEASE)/src || mkdir -p $(OBJDIR_RELEASE)/src
	test -d $(OBJDIR_RELEASE)/src/algorithms || mkdir -p $(OBJDIR_RELEASE)/src/algorithms
	test -d $(OBJDIR_RELEASE)/src/helper || mkdir -p $(OBJDIR_RELEASE)/src/helper
	test -d $(OBJDIR_RELEASE)/src/domain || mkdir -p $(OBJDIR_RELEASE)/src/domain

after_release: 

release: before_release out_release after_release

out_release: before_release $(OBJ_RELEASE) $(DEP_RELEASE)
	$(LD) $(LIBDIR_RELEASE) -o $(OUT_RELEASE) $(OBJ_RELEASE)  $(LDFLAGS_RELEASE) $(LIB_RELEASE)

$(OBJDIR_RELEASE)/src/helper/Settings.o: src/helper/Settings.cpp
	$(CXX) $(CFLAGS_RELEASE) $(INC_RELEASE) -c src/helper/Settings.cpp -o $(OBJDIR_RELEASE)/src/helper/Settings.o

$(OBJDIR_RELEASE)/src/domain/Level.o: src/domain/Level.cpp
	$(CXX) $(CFLAGS_RELEASE) $(INC_RELEASE) -c src/domain/Level.cpp -o $(OBJDIR_RELEASE)/src/domain/Level.o

$(OBJDIR_RELEASE)/src/algorithms/Dynamic.o: src/algorithms/Dynamic.cpp
	$(CXX) $(CFLAGS_RELEASE) $(INC_RELEASE) -c src/algorithms/Dynamic.cpp -o $(OBJDIR_RELEASE)/src/algorithms/Dynamic.o

$(OBJDIR_RELEASE)/dynamic.o: dynamic.cpp
	$(CXX) $(CFLAGS_RELEASE) $(INC_RELEASE) -c dynamic.cpp -o $(OBJDIR_RELEASE)/dynamic.o

clean_release: 
	rm -f $(OBJ_RELEASE) $(OUT_RELEASE)
	rm -rf $(OUTDIR_RELEASE)
	rm -rf $(OBJDIR_RELEASE)

.PHONY: before_release after_release clean_release

