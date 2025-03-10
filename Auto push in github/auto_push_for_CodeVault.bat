@echo off

REM Change to the correct drive (C:)
C:

REM Navigate to the CodeVault directory
cd "C:\Users\User\Desktop\CodeVault"

REM Pull the latest updates from GitHub
git pull origin main

REM Stage all changes
git add .

REM Commit changes (if any)
git commit -m "Auto commit from CodeVault" 2>nul || echo "No changes to commit"

REM Push changes to GitHub
git push origin main

REM Confirm completion
echo "Process completed. Your changes have been pushed to GitHub."

REM Pause to keep the Command Prompt window open to see the output
pause
