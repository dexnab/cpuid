# cpuid README.md

## introduction

This is a very simple program of cpuid instruction.

You simply input the function number and optional parameter, and get the output.

Currently only compatible on Windows.

## What is cpuid?

cpuid is an instruction in x86 and x64 processors. It is used to determine whether a processor supports some functions.
The funciton you want to check is represented by the function number and optional parameter.
You can determine whether the processor supports the function from the output.

Plsease refer to programmer's manual of the architecture for more details.

### intel

Intel® 64 and IA-32 Architectures Software Developer’s Manual: <https://www.intel.com/content/www/us/en/content-details/774494/intel-64-and-ia-32-architectures-software-developer-s-manual-combined-volumes-1-2a-2b-2c-2d-3a-3b-3c-3d-and-4.html>

cpuid instruction is in volume 2 (Instruction Set Reference, A-Z), chapter 3.3 (INSTRUCTIONS (A-L)), page 813.

### amd

AMD64 Architecture Programmer’s Manual Volumes 1–5: <https://www.amd.com/system/files/TechDocs/40332.pdf>

cpuid instruction is in volume 3 (General-Purpose and System Instructions), chapter 3 (General-Purpose Instruction Reference), page 1405.

The list of function number and optional parameter is in volume 3 (General-Purpose and System Instructions),
appendix E (Obtaining Processor Information Via the CPUID Instruction), page 1837.

## build

Open the "Developer Command Prompt for Visual Studio" (or load Visual Studio environment manually).

Run `nmake`.

If build succeed, the binary should be in the "bin" directory.

## download pre-build

There are pre-build versions of this program. You can find them in the "release" directory.