# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.11

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /opt/local/bin/cmake

# The command to remove a file.
RM = /opt/local/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/zhenggu.xwt/Projects/antflash

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/zhenggu.xwt/Projects/antflash/build

# Include any dependencies generated for this target.
include CMakeFiles/single_request_example.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/single_request_example.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/single_request_example.dir/flags.make

sample.pb.cc: ../example/sample.proto
sample.pb.cc: /usr/local/bin/protoc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/Users/zhenggu.xwt/Projects/antflash/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Running C++ protocol buffer compiler on example/sample.proto"
	/usr/local/bin/protoc --cpp_out=/Users/zhenggu.xwt/Projects/antflash/build -I /Users/zhenggu.xwt/Projects/antflash/example /Users/zhenggu.xwt/Projects/antflash/example/sample.proto

sample.pb.h: sample.pb.cc
	@$(CMAKE_COMMAND) -E touch_nocreate sample.pb.h

CMakeFiles/single_request_example.dir/sample.pb.cc.o: CMakeFiles/single_request_example.dir/flags.make
CMakeFiles/single_request_example.dir/sample.pb.cc.o: sample.pb.cc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/zhenggu.xwt/Projects/antflash/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/single_request_example.dir/sample.pb.cc.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/single_request_example.dir/sample.pb.cc.o -c /Users/zhenggu.xwt/Projects/antflash/build/sample.pb.cc

CMakeFiles/single_request_example.dir/sample.pb.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/single_request_example.dir/sample.pb.cc.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/zhenggu.xwt/Projects/antflash/build/sample.pb.cc > CMakeFiles/single_request_example.dir/sample.pb.cc.i

CMakeFiles/single_request_example.dir/sample.pb.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/single_request_example.dir/sample.pb.cc.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/zhenggu.xwt/Projects/antflash/build/sample.pb.cc -o CMakeFiles/single_request_example.dir/sample.pb.cc.s

CMakeFiles/single_request_example.dir/example/single_request_example.cpp.o: CMakeFiles/single_request_example.dir/flags.make
CMakeFiles/single_request_example.dir/example/single_request_example.cpp.o: ../example/single_request_example.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/zhenggu.xwt/Projects/antflash/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/single_request_example.dir/example/single_request_example.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/single_request_example.dir/example/single_request_example.cpp.o -c /Users/zhenggu.xwt/Projects/antflash/example/single_request_example.cpp

CMakeFiles/single_request_example.dir/example/single_request_example.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/single_request_example.dir/example/single_request_example.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/zhenggu.xwt/Projects/antflash/example/single_request_example.cpp > CMakeFiles/single_request_example.dir/example/single_request_example.cpp.i

CMakeFiles/single_request_example.dir/example/single_request_example.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/single_request_example.dir/example/single_request_example.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/zhenggu.xwt/Projects/antflash/example/single_request_example.cpp -o CMakeFiles/single_request_example.dir/example/single_request_example.cpp.s

# Object files for target single_request_example
single_request_example_OBJECTS = \
"CMakeFiles/single_request_example.dir/sample.pb.cc.o" \
"CMakeFiles/single_request_example.dir/example/single_request_example.cpp.o"

# External object files for target single_request_example
single_request_example_EXTERNAL_OBJECTS =

single_request_example: CMakeFiles/single_request_example.dir/sample.pb.cc.o
single_request_example: CMakeFiles/single_request_example.dir/example/single_request_example.cpp.o
single_request_example: CMakeFiles/single_request_example.dir/build.make
single_request_example: libbolt-rpc-client.a
single_request_example: /usr/local/lib/libprotobuf.dylib
single_request_example: /usr/local/lib/libprotobuf.dylib
single_request_example: CMakeFiles/single_request_example.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/zhenggu.xwt/Projects/antflash/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Linking CXX executable single_request_example"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/single_request_example.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/single_request_example.dir/build: single_request_example

.PHONY : CMakeFiles/single_request_example.dir/build

CMakeFiles/single_request_example.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/single_request_example.dir/cmake_clean.cmake
.PHONY : CMakeFiles/single_request_example.dir/clean

CMakeFiles/single_request_example.dir/depend: sample.pb.cc
CMakeFiles/single_request_example.dir/depend: sample.pb.h
	cd /Users/zhenggu.xwt/Projects/antflash/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/zhenggu.xwt/Projects/antflash /Users/zhenggu.xwt/Projects/antflash /Users/zhenggu.xwt/Projects/antflash/build /Users/zhenggu.xwt/Projects/antflash/build /Users/zhenggu.xwt/Projects/antflash/build/CMakeFiles/single_request_example.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/single_request_example.dir/depend

