# MiniTest
To solve Implicit dependency `.pio\build\native\None' not found, needed by target `.pio\build\native\program.exe'.

This minimalistic project aims to help solve the unit test problem. The error message is:

`Implicit dependency .pio\build\native\None' not found, needed by target .pio\build\native\program.exe'.`

The project has:
* a service class calc\CalcService.hpp which provides an add and a subtract service
* a main class src\main.cpp which uses the service and prints results on the monitor
* two test classes test\test_desktop\test_CalcService.cpp and test_main.cpp with which the tests are run. The test_main.cpp collects all unit tests and test_CalcService.cpp runs the actual unit test.



The project can easily be compiled and uploaded to the ESP32. Execution:

`PlatformIO → Project Tasks → esp32doit-devkit-v1 → Upload and Monitor`

However, if the project is to be tested, the above error message is generated. This error message has recently been generated for every project that could previously be tested without any problems. Execution:

`PlatformIO → Project Tasks → native → Advanced → Test`

The question is what is broken on the system?

-------------------------------------------------------------

After PIO was fixed, the tests of the MiniTest project work properly.

Some projects still show the same original error message. I had suspected that it might have something to do with the libraries used.
For this reason I have extended the MiniTest project with libraries but the error message cannot be provoked.
