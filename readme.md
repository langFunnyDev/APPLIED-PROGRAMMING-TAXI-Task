# Applied Programming

## Task:

After a protracted meeting, the director of the company decided to order a taxi to take the employees home. He ordered N cars - exactly as many as his employees. However, when they arrived, it turned out that each taxi driver had his own tariff for 1 kilometer. The director knows which employee how many kilometers from work to home (unfortunately, all employees live in different directions, so you cannot send two employees in the same car). Now the director wants to determine which of the employees in which taxi should go home so that the total costs for a taxi (and they are borne by the company) are minimal.

## Program name:
Taxi task

## Description:

Input data format:

First, a natural number N (1 ≤ N ≤ 1000) is entered - the number of company employees (which coincides with the number of called taxi cars).
Next, N numbers are written down, specifying the distance in kilometers from work to the homes of company employees (the first number is for the first employee, the second is for the second, etc.). All distances are positive integers up to 1000.
Next, N more numbers are written down - the tariffs for traveling one kilometer in a taxi (the first number is in the first taxi car, the second is in the second, etc.). Tariffs are expressed in positive whole numbers not exceeding 10,000.

Output data format:

N numbers are displayed. The first number is the number of the taxi that the first employee should sit in, the second number is the number of the taxi that the second employee should sit in, etc. so that the total taxi costs are minimal. If there are several seating options for employees, at which the costs are minimal, output any of them.

## Screenshot:
![image](https://cdn.discordapp.com/attachments/719111306929635431/904727332961521704/unknown.png)

## How to use:

To use the program, you need to follow these steps:
1) Compile the executable file of the program from the source code or use the precompiled version
2) Run the program
3) Enter number
4) Get the execution result

## Comments from the developer:

To develop this program, a development environment called Clion was used.
Compilation was performed using the CMake tool. You can use any development environment to open the main.cpp source code file. For your convenience, in the cmake-build-debug folder you can find a precompiled version of the program.


## Contributing
Pull requests are welcome. For major changes, please open an issue first to discuss what you would like to change.