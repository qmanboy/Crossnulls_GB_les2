# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.20

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Disable VCS-based implicit rules.
% : %,v

# Disable VCS-based implicit rules.
% : RCS/%

# Disable VCS-based implicit rules.
% : RCS/%,v

# Disable VCS-based implicit rules.
% : SCCS/s.%

# Disable VCS-based implicit rules.
% : s.%

.SUFFIXES: .hpux_make_needs_suffix_list

# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = "C:/Program Files/CMake/bin/cmake.exe"

# The command to remove a file.
RM = "C:/Program Files/CMake/bin/cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "F:/GB/C++ base/les2/crossnulls"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "F:/GB/C++ base/les2/crossnulls/build"

# Include any dependencies generated for this target.
include CMakeFiles/TTTG.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/TTTG.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/TTTG.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/TTTG.dir/flags.make

CMakeFiles/TTTG.dir/main.cpp.obj: CMakeFiles/TTTG.dir/flags.make
CMakeFiles/TTTG.dir/main.cpp.obj: ../main.cpp
CMakeFiles/TTTG.dir/main.cpp.obj: CMakeFiles/TTTG.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="F:/GB/C++ base/les2/crossnulls/build/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/TTTG.dir/main.cpp.obj"
	"C:/Program Files/LLVM/bin/clang++.exe" $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/TTTG.dir/main.cpp.obj -MF CMakeFiles/TTTG.dir/main.cpp.obj.d -o CMakeFiles/TTTG.dir/main.cpp.obj -c "F:/GB/C++ base/les2/crossnulls/main.cpp"

CMakeFiles/TTTG.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/TTTG.dir/main.cpp.i"
	$(CMAKE_COMMAND) -E cmake_unimplemented_variable CMAKE_CXX_CREATE_PREPROCESSED_SOURCE

CMakeFiles/TTTG.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/TTTG.dir/main.cpp.s"
	$(CMAKE_COMMAND) -E cmake_unimplemented_variable CMAKE_CXX_CREATE_ASSEMBLY_SOURCE

# Object files for target TTTG
TTTG_OBJECTS = \
"CMakeFiles/TTTG.dir/main.cpp.obj"

# External object files for target TTTG
TTTG_EXTERNAL_OBJECTS =

TTTG.exe: CMakeFiles/TTTG.dir/main.cpp.obj
TTTG.exe: CMakeFiles/TTTG.dir/build.make
TTTG.exe: CMakeFiles/TTTG.dir/linklibs.rsp
TTTG.exe: CMakeFiles/TTTG.dir/objects1.rsp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="F:/GB/C++ base/les2/crossnulls/build/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable TTTG.exe"
	"C:/Program Files/LLVM/bin/clang++.exe" -fuse-ld=lld-link -nostartfiles -nostdlib -g -Xclang -gcodeview -O0 -D_DEBUG -D_DLL -D_MT -Xclang --dependent-lib=msvcrtd -Xlinker /subsystem:console @CMakeFiles/TTTG.dir/objects1.rsp -o TTTG.exe -Xlinker /implib:TTTG.lib -Xlinker /pdb:"F:/GB/C++ base/les2/crossnulls/build/TTTG.pdb" -Xlinker /version:0.0  @CMakeFiles/TTTG.dir/linklibs.rsp

# Rule to build all files generated by this target.
CMakeFiles/TTTG.dir/build: TTTG.exe
.PHONY : CMakeFiles/TTTG.dir/build

CMakeFiles/TTTG.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/TTTG.dir/cmake_clean.cmake
.PHONY : CMakeFiles/TTTG.dir/clean

CMakeFiles/TTTG.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "F:/GB/C++ base/les2/crossnulls" "F:/GB/C++ base/les2/crossnulls" "F:/GB/C++ base/les2/crossnulls/build" "F:/GB/C++ base/les2/crossnulls/build" "F:/GB/C++ base/les2/crossnulls/build/CMakeFiles/TTTG.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/TTTG.dir/depend
