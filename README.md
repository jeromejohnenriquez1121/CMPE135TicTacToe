# CMPE135TicTacToe

----

## How to Build and Compile Tic Tac Toe

You will need to build wxwidgets and you need CMake to build and compile Tic Tac Toe. It is helpful to have
an IDE such as Eclipse, CLion, etc when building, compiling, and running the project.
Download CMake from here: https://cmake.org/download/

To build wxwidgets, we can use vcpkg. It is a C/C++ package manager from Microsoft. You can install different
libraries easily to your system. 
Clone the github and install to your system from here: https://github.com/microsoft/vcpkg

In the directory that you cloned vcpkg, run the shell comand to install wxwidgets: 
```cmd
> ./vcpkg install wxwidgets
```

If you are experiencing problems, check the README.md from the GitHub link above for more information. This 
build and install process may take a while. At the end of the installation, it will say which lines to add
to your CMakeList.txt file.

Add these to your CMakeList.txt file(I replaced main with TicTacToe because project is named TicTacToe):
```cmd
> find_package(wxWidgets REQUIRED)
> target_compile_definitions(TicTacToe PRIVATE ${wxWidgets_DEFINITIONS} "$<$<CONFIG:DEBUG>:${wxWidgets_DEFINITIONS_DEBUG}>")
> target_include_directories(TicTacToe PRIVATE ${wxWidgets_INCLUDE_DIRS})
> target_link_libraries(TicTacToe PRIVATE ${wxWidgets_LIBRARIES})
```

One last step, in line 149, delete or comment out *SetIcon(wxICON(sample));* as samples.xml isn't included in package.