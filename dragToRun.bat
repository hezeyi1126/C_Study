@echo off
color 0E
<<<<<<< HEAD:dragToRun.bat
echo compiling
=======
echo compiling..
>>>>>>> b7e5dc05a3950bec2ea833509bdec4efc818dd50:dragToRun.bat
gcc %1 -o %~p1%~n1
echo results:
echo -------------------------------------------------------------------------
%~n1
pause