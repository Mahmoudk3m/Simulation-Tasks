# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.20

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2021.2\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2021.2\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "D:\Coding Related\C++_Projs\Simulation\SimulationAssingment"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "D:\Coding Related\C++_Projs\Simulation\SimulationAssingment\cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/Clion_Projects.dir/depend.make
# Include the progress variables for this target.
include CMakeFiles/Clion_Projects.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Clion_Projects.dir/flags.make

CMakeFiles/Clion_Projects.dir/main.cpp.obj: CMakeFiles/Clion_Projects.dir/flags.make
CMakeFiles/Clion_Projects.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="D:\Coding Related\C++_Projs\Simulation\SimulationAssingment\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Clion_Projects.dir/main.cpp.obj"
	C:\PROGRA~1\CODEBL~1\MinGW\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\Clion_Projects.dir\main.cpp.obj -c "D:\Coding Related\C++_Projs\Simulation\SimulationAssingment\main.cpp"

CMakeFiles/Clion_Projects.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Clion_Projects.dir/main.cpp.i"
	C:\PROGRA~1\CODEBL~1\MinGW\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "D:\Coding Related\C++_Projs\Simulation\SimulationAssingment\main.cpp" > CMakeFiles\Clion_Projects.dir\main.cpp.i

CMakeFiles/Clion_Projects.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Clion_Projects.dir/main.cpp.s"
	C:\PROGRA~1\CODEBL~1\MinGW\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "D:\Coding Related\C++_Projs\Simulation\SimulationAssingment\main.cpp" -o CMakeFiles\Clion_Projects.dir\main.cpp.s

# Object files for target Clion_Projects
Clion_Projects_OBJECTS = \
"CMakeFiles/Clion_Projects.dir/main.cpp.obj"

# External object files for target Clion_Projects
Clion_Projects_EXTERNAL_OBJECTS =

Clion_Projects.exe: CMakeFiles/Clion_Projects.dir/main.cpp.obj
Clion_Projects.exe: CMakeFiles/Clion_Projects.dir/build.make
Clion_Projects.exe: CMakeFiles/Clion_Projects.dir/linklibs.rsp
Clion_Projects.exe: CMakeFiles/Clion_Projects.dir/objects1.rsp
Clion_Projects.exe: CMakeFiles/Clion_Projects.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="D:\Coding Related\C++_Projs\Simulation\SimulationAssingment\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable Clion_Projects.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\Clion_Projects.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Clion_Projects.dir/build: Clion_Projects.exe
.PHONY : CMakeFiles/Clion_Projects.dir/build

CMakeFiles/Clion_Projects.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\Clion_Projects.dir\cmake_clean.cmake
.PHONY : CMakeFiles/Clion_Projects.dir/clean

CMakeFiles/Clion_Projects.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "D:\Coding Related\C++_Projs\Simulation\SimulationAssingment" "D:\Coding Related\C++_Projs\Simulation\SimulationAssingment" "D:\Coding Related\C++_Projs\Simulation\SimulationAssingment\cmake-build-debug" "D:\Coding Related\C++_Projs\Simulation\SimulationAssingment\cmake-build-debug" "D:\Coding Related\C++_Projs\Simulation\SimulationAssingment\cmake-build-debug\CMakeFiles\Clion_Projects.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/Clion_Projects.dir/depend

