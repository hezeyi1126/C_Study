@echo off
color 0E
echo compiling
gcc %1 -o %~p1%~n1
echo results:
echo -------------------------------------------------------------------------
%~n1
pause