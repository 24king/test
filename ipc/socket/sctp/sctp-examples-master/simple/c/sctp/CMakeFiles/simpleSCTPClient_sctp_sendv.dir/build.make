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
CMAKE_SOURCE_DIR = /work/workspace/sctp-examples-master/simple/c/sctp

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /work/workspace/sctp-examples-master/simple/c/sctp

# Include any dependencies generated for this target.
include CMakeFiles/simpleSCTPClient_sctp_sendv.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/simpleSCTPClient_sctp_sendv.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/simpleSCTPClient_sctp_sendv.dir/flags.make

CMakeFiles/simpleSCTPClient_sctp_sendv.dir/client_sendv/simpleSCTPClient_sctp_sendv.c.o: CMakeFiles/simpleSCTPClient_sctp_sendv.dir/flags.make
CMakeFiles/simpleSCTPClient_sctp_sendv.dir/client_sendv/simpleSCTPClient_sctp_sendv.c.o: client_sendv/simpleSCTPClient_sctp_sendv.c
	$(CMAKE_COMMAND) -E cmake_progress_report /work/workspace/sctp-examples-master/simple/c/sctp/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building C object CMakeFiles/simpleSCTPClient_sctp_sendv.dir/client_sendv/simpleSCTPClient_sctp_sendv.c.o"
	/usr/bin/cc  $(C_DEFINES) $(C_FLAGS) -o CMakeFiles/simpleSCTPClient_sctp_sendv.dir/client_sendv/simpleSCTPClient_sctp_sendv.c.o   -c /work/workspace/sctp-examples-master/simple/c/sctp/client_sendv/simpleSCTPClient_sctp_sendv.c

CMakeFiles/simpleSCTPClient_sctp_sendv.dir/client_sendv/simpleSCTPClient_sctp_sendv.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/simpleSCTPClient_sctp_sendv.dir/client_sendv/simpleSCTPClient_sctp_sendv.c.i"
	/usr/bin/cc  $(C_DEFINES) $(C_FLAGS) -E /work/workspace/sctp-examples-master/simple/c/sctp/client_sendv/simpleSCTPClient_sctp_sendv.c > CMakeFiles/simpleSCTPClient_sctp_sendv.dir/client_sendv/simpleSCTPClient_sctp_sendv.c.i

CMakeFiles/simpleSCTPClient_sctp_sendv.dir/client_sendv/simpleSCTPClient_sctp_sendv.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/simpleSCTPClient_sctp_sendv.dir/client_sendv/simpleSCTPClient_sctp_sendv.c.s"
	/usr/bin/cc  $(C_DEFINES) $(C_FLAGS) -S /work/workspace/sctp-examples-master/simple/c/sctp/client_sendv/simpleSCTPClient_sctp_sendv.c -o CMakeFiles/simpleSCTPClient_sctp_sendv.dir/client_sendv/simpleSCTPClient_sctp_sendv.c.s

CMakeFiles/simpleSCTPClient_sctp_sendv.dir/client_sendv/simpleSCTPClient_sctp_sendv.c.o.requires:
.PHONY : CMakeFiles/simpleSCTPClient_sctp_sendv.dir/client_sendv/simpleSCTPClient_sctp_sendv.c.o.requires

CMakeFiles/simpleSCTPClient_sctp_sendv.dir/client_sendv/simpleSCTPClient_sctp_sendv.c.o.provides: CMakeFiles/simpleSCTPClient_sctp_sendv.dir/client_sendv/simpleSCTPClient_sctp_sendv.c.o.requires
	$(MAKE) -f CMakeFiles/simpleSCTPClient_sctp_sendv.dir/build.make CMakeFiles/simpleSCTPClient_sctp_sendv.dir/client_sendv/simpleSCTPClient_sctp_sendv.c.o.provides.build
.PHONY : CMakeFiles/simpleSCTPClient_sctp_sendv.dir/client_sendv/simpleSCTPClient_sctp_sendv.c.o.provides

CMakeFiles/simpleSCTPClient_sctp_sendv.dir/client_sendv/simpleSCTPClient_sctp_sendv.c.o.provides.build: CMakeFiles/simpleSCTPClient_sctp_sendv.dir/client_sendv/simpleSCTPClient_sctp_sendv.c.o

# Object files for target simpleSCTPClient_sctp_sendv
simpleSCTPClient_sctp_sendv_OBJECTS = \
"CMakeFiles/simpleSCTPClient_sctp_sendv.dir/client_sendv/simpleSCTPClient_sctp_sendv.c.o"

# External object files for target simpleSCTPClient_sctp_sendv
simpleSCTPClient_sctp_sendv_EXTERNAL_OBJECTS =

bin/simpleSCTPClient_sctp_sendv: CMakeFiles/simpleSCTPClient_sctp_sendv.dir/client_sendv/simpleSCTPClient_sctp_sendv.c.o
bin/simpleSCTPClient_sctp_sendv: CMakeFiles/simpleSCTPClient_sctp_sendv.dir/build.make
bin/simpleSCTPClient_sctp_sendv: CMakeFiles/simpleSCTPClient_sctp_sendv.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking C executable bin/simpleSCTPClient_sctp_sendv"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/simpleSCTPClient_sctp_sendv.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/simpleSCTPClient_sctp_sendv.dir/build: bin/simpleSCTPClient_sctp_sendv
.PHONY : CMakeFiles/simpleSCTPClient_sctp_sendv.dir/build

CMakeFiles/simpleSCTPClient_sctp_sendv.dir/requires: CMakeFiles/simpleSCTPClient_sctp_sendv.dir/client_sendv/simpleSCTPClient_sctp_sendv.c.o.requires
.PHONY : CMakeFiles/simpleSCTPClient_sctp_sendv.dir/requires

CMakeFiles/simpleSCTPClient_sctp_sendv.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/simpleSCTPClient_sctp_sendv.dir/cmake_clean.cmake
.PHONY : CMakeFiles/simpleSCTPClient_sctp_sendv.dir/clean

CMakeFiles/simpleSCTPClient_sctp_sendv.dir/depend:
	cd /work/workspace/sctp-examples-master/simple/c/sctp && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /work/workspace/sctp-examples-master/simple/c/sctp /work/workspace/sctp-examples-master/simple/c/sctp /work/workspace/sctp-examples-master/simple/c/sctp /work/workspace/sctp-examples-master/simple/c/sctp /work/workspace/sctp-examples-master/simple/c/sctp/CMakeFiles/simpleSCTPClient_sctp_sendv.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/simpleSCTPClient_sctp_sendv.dir/depend

