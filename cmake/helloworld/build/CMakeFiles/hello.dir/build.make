# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 2.8

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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The program to use to edit the cache.
CMAKE_EDIT_COMMAND = /usr/bin/ccmake

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/rongtao/test/cmake/helloworld

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/rongtao/test/cmake/helloworld/build

# Include any dependencies generated for this target.
include CMakeFiles/hello.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/hello.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/hello.dir/flags.make

CMakeFiles/hello.dir/hello.c.o: CMakeFiles/hello.dir/flags.make
CMakeFiles/hello.dir/hello.c.o: ../hello.c
	$(CMAKE_COMMAND) -E cmake_progress_report /home/rongtao/test/cmake/helloworld/build/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building C object CMakeFiles/hello.dir/hello.c.o"
	/usr/bin/cc  $(C_DEFINES) $(C_FLAGS) -o CMakeFiles/hello.dir/hello.c.o   -c /home/rongtao/test/cmake/helloworld/hello.c

CMakeFiles/hello.dir/hello.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/hello.dir/hello.c.i"
	/usr/bin/cc  $(C_DEFINES) $(C_FLAGS) -E /home/rongtao/test/cmake/helloworld/hello.c > CMakeFiles/hello.dir/hello.c.i

CMakeFiles/hello.dir/hello.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/hello.dir/hello.c.s"
	/usr/bin/cc  $(C_DEFINES) $(C_FLAGS) -S /home/rongtao/test/cmake/helloworld/hello.c -o CMakeFiles/hello.dir/hello.c.s

CMakeFiles/hello.dir/hello.c.o.requires:
.PHONY : CMakeFiles/hello.dir/hello.c.o.requires

CMakeFiles/hello.dir/hello.c.o.provides: CMakeFiles/hello.dir/hello.c.o.requires
	$(MAKE) -f CMakeFiles/hello.dir/build.make CMakeFiles/hello.dir/hello.c.o.provides.build
.PHONY : CMakeFiles/hello.dir/hello.c.o.provides

CMakeFiles/hello.dir/hello.c.o.provides.build: CMakeFiles/hello.dir/hello.c.o

CMakeFiles/hello.dir/src/show.c.o: CMakeFiles/hello.dir/flags.make
CMakeFiles/hello.dir/src/show.c.o: ../src/show.c
	$(CMAKE_COMMAND) -E cmake_progress_report /home/rongtao/test/cmake/helloworld/build/CMakeFiles $(CMAKE_PROGRESS_2)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building C object CMakeFiles/hello.dir/src/show.c.o"
	/usr/bin/cc  $(C_DEFINES) $(C_FLAGS) -o CMakeFiles/hello.dir/src/show.c.o   -c /home/rongtao/test/cmake/helloworld/src/show.c

CMakeFiles/hello.dir/src/show.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/hello.dir/src/show.c.i"
	/usr/bin/cc  $(C_DEFINES) $(C_FLAGS) -E /home/rongtao/test/cmake/helloworld/src/show.c > CMakeFiles/hello.dir/src/show.c.i

CMakeFiles/hello.dir/src/show.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/hello.dir/src/show.c.s"
	/usr/bin/cc  $(C_DEFINES) $(C_FLAGS) -S /home/rongtao/test/cmake/helloworld/src/show.c -o CMakeFiles/hello.dir/src/show.c.s

CMakeFiles/hello.dir/src/show.c.o.requires:
.PHONY : CMakeFiles/hello.dir/src/show.c.o.requires

CMakeFiles/hello.dir/src/show.c.o.provides: CMakeFiles/hello.dir/src/show.c.o.requires
	$(MAKE) -f CMakeFiles/hello.dir/build.make CMakeFiles/hello.dir/src/show.c.o.provides.build
.PHONY : CMakeFiles/hello.dir/src/show.c.o.provides

CMakeFiles/hello.dir/src/show.c.o.provides.build: CMakeFiles/hello.dir/src/show.c.o

CMakeFiles/hello.dir/vos/vos.c.o: CMakeFiles/hello.dir/flags.make
CMakeFiles/hello.dir/vos/vos.c.o: ../vos/vos.c
	$(CMAKE_COMMAND) -E cmake_progress_report /home/rongtao/test/cmake/helloworld/build/CMakeFiles $(CMAKE_PROGRESS_3)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building C object CMakeFiles/hello.dir/vos/vos.c.o"
	/usr/bin/cc  $(C_DEFINES) $(C_FLAGS) -o CMakeFiles/hello.dir/vos/vos.c.o   -c /home/rongtao/test/cmake/helloworld/vos/vos.c

CMakeFiles/hello.dir/vos/vos.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/hello.dir/vos/vos.c.i"
	/usr/bin/cc  $(C_DEFINES) $(C_FLAGS) -E /home/rongtao/test/cmake/helloworld/vos/vos.c > CMakeFiles/hello.dir/vos/vos.c.i

CMakeFiles/hello.dir/vos/vos.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/hello.dir/vos/vos.c.s"
	/usr/bin/cc  $(C_DEFINES) $(C_FLAGS) -S /home/rongtao/test/cmake/helloworld/vos/vos.c -o CMakeFiles/hello.dir/vos/vos.c.s

CMakeFiles/hello.dir/vos/vos.c.o.requires:
.PHONY : CMakeFiles/hello.dir/vos/vos.c.o.requires

CMakeFiles/hello.dir/vos/vos.c.o.provides: CMakeFiles/hello.dir/vos/vos.c.o.requires
	$(MAKE) -f CMakeFiles/hello.dir/build.make CMakeFiles/hello.dir/vos/vos.c.o.provides.build
.PHONY : CMakeFiles/hello.dir/vos/vos.c.o.provides

CMakeFiles/hello.dir/vos/vos.c.o.provides.build: CMakeFiles/hello.dir/vos/vos.c.o

# Object files for target hello
hello_OBJECTS = \
"CMakeFiles/hello.dir/hello.c.o" \
"CMakeFiles/hello.dir/src/show.c.o" \
"CMakeFiles/hello.dir/vos/vos.c.o"

# External object files for target hello
hello_EXTERNAL_OBJECTS =

hello: CMakeFiles/hello.dir/hello.c.o
hello: CMakeFiles/hello.dir/src/show.c.o
hello: CMakeFiles/hello.dir/vos/vos.c.o
hello: CMakeFiles/hello.dir/build.make
hello: /usr/lib64/libconfig.so
hello: /usr/lib64/mysql/libmysqlclient.so
hello: /usr/local/lib/libnetsnmp.so
hello: CMakeFiles/hello.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking C executable hello"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/hello.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/hello.dir/build: hello
.PHONY : CMakeFiles/hello.dir/build

CMakeFiles/hello.dir/requires: CMakeFiles/hello.dir/hello.c.o.requires
CMakeFiles/hello.dir/requires: CMakeFiles/hello.dir/src/show.c.o.requires
CMakeFiles/hello.dir/requires: CMakeFiles/hello.dir/vos/vos.c.o.requires
.PHONY : CMakeFiles/hello.dir/requires

CMakeFiles/hello.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/hello.dir/cmake_clean.cmake
.PHONY : CMakeFiles/hello.dir/clean

CMakeFiles/hello.dir/depend:
	cd /home/rongtao/test/cmake/helloworld/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/rongtao/test/cmake/helloworld /home/rongtao/test/cmake/helloworld /home/rongtao/test/cmake/helloworld/build /home/rongtao/test/cmake/helloworld/build /home/rongtao/test/cmake/helloworld/build/CMakeFiles/hello.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/hello.dir/depend

