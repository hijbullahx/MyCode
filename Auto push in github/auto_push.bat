@echo off

REM Change to the correct drive (G:)
G:

REM Navigate to your project directory on G: drive
cd "G:\My Drive\Programming"

REM Check if the directory is a Git repository
git status
if errorlevel 1 (
    echo This is not a Git repository. Please initialize Git in this directory.
    pause
    exit /b
)

REM Ensure you're on the main branch
git checkout main

REM Stage all changes
git add .

REM Commit the changes (if there are any changes)
git commit -m "Auto commit" 2>nul || echo "No changes to commit"

REM Fetch the latest changes from GitHub (if any) and merge them
git pull origin main

REM Push changes to GitHub
git push origin main

REM Confirm completion
echo "Process completed. Your changes have been pushed to GitHub."

REM Pause to keep the Command Prompt window open to see the output
pause
