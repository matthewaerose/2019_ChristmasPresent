# Source directories separated by space
# Example ./ src1/ src2/
SRCDIR   = ./ src/
# Directory where object files will be placed
OBJDIR   = obj/
# Include directories separated by space
# Example: include1/ include2/
INCDIR   = include/
# Directory where binary file will be placed
BINDIR   = bin/
# Name of the result file
TARGET   = app
# Compiler
CXX      = g++

# Retrive list of the source files
SRC      = $(wildcard $(addsuffix *.cpp,$(SRCDIR)))
# Generate list of the object files
OBJ      = $(addprefix $(OBJDIR), $(patsubst %.cpp, %.o, $(notdir $(SRC))))

VPATH    = $(SRCDIR)

# Compilation flags
CXXFLAGS = -std=c++11 -pthread

$(TARGET) : $(OBJ)
	@echo Linking...
	@mkdir -p $(BINDIR)
	@$(CXX) $(CXXFLAGS) -o $(BINDIR)$@ $(OBJ)

$(OBJDIR)%.o : %.cpp
	@echo Compiling $< in $@...
	@mkdir -p $(OBJDIR)
	@$(CXX) $(CXXFLAGS) $(addprefix -I,$(INCDIR)) -c -o $@ $<

clean :
	@$(RM) -r $(OBJDIR)
	@$(RM) -r $(BINDIR)

