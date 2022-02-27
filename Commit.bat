@echo off
:submit %1
git add .
git commit -m %1
git push
git fetch
echo "Press any key to finish"
pause
cls