# C++ Templates

## Installation

Enter to winlibs.com and download the last realease below UCRT runtime.

Unzip the file in the root folder C:\

Press Windows key and look for the Environment Variables Editor.

Click on Environment Variables, select Variables System: Path and click on edit.

Clink on New button and type: C:\mingw64\bin

Save and accept all.

## Configure Visual Studio Code

Select: View >> Command Palette >> C/C++: Edit Configurations >> Compiler Path

Choose C:/mingw64/bin/g++.exe from the list. Scroll down and select C Standard c++17

Select: Terminal >> Configure Default Build Task

This will open the file .vscode/task.jason

Modify args:

```
"args": [
  "-std=c++17",
	"-fdiagnostics-color=always",
	"-g",
	"-Wall",
	"${fileDirname}\\*.cpp",
	"-o",
	"${fileDirname}\\${fileBasenameNoExtension}.exe"
],
```

## Index

  + Hello World.
  + Variables.
  + Basic Math.
    1. Basic math.
    2. F to C.
  + Input/Output Basics.
  + Arrays and Vectors.
    1. Arrays.
    2. Vectors.
  + Decisions.
    1. If - else.
    2. If - else if - else.
    3. Switch.
  + Loops.
    1. For.
    2. While.
    3. Do while.
  + Strings.
    1. C style strings.
    2. C++ style strings.
    3. Exercise.
  + Functions.
    1. Functions.
    2. Scopes.
    3. Recursivity.
  + Pointers.
    1. Pointers.
    2. Pointers and functions.
    3. References.
    4. Exercise 1.
    5. Exercise 2.
  + Object Oriented Programming
    1. Objects.
    2. Public and private.
    3. Standard methods.
    4. Constructors.
    5. Copy constructor.
    6. Shallow and deep copy.
    7. Move constructor.
    8. Constant class.
    9. Static class members.
    10. Exercise.
  + Overloading Operators
    1. Overload constructor.
    2. Overload assignment operator (copy).
    3. Overload assignment operator (move).
    4. Overload operators as member functions.
    5. Overload operators as global functions.
    6. Overload insertion and extraction operators.
  + Inheritance.
    1. Basic inheritance.
    2. Protected members.
    3. Constructors and destructors.
    4. Passing arguments to base/derived classes.
    5. Copy and move construtors.
    6. Exercise.
  + Polymorphism.
    1. Static binding.
    2. Virtual functions.
    3. Override specifier.
    4. Base class reference.
    5. Abstract classes.
    6. Interfaces.
    7. Exercise.
  + Smart Pointers.
    1. Unique pointers.
    2. Shared pointers.
    3. Weak pointers.
    4. Custom deleters.
  + Exception Handling.
    1. Exception handling.
    2. Multiple exceptions.
    3. Stack unwinding;
    4. User defined exceptions.