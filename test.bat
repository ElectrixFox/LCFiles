@echo off
:: Stops all of the useless echoing

:: The file to search for the version
set file=G:\Protramming\C\FileManager\README.md

:: Sets the version
set ver=1

:: Looks for where the version is in the readme
findstr /I "Version" README.md

pause