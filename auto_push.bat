@echo off
cd "G:\My Drive\Programming"  # Change to your project directory

git add .
git commit -m "Auto commit"  # You can customize the commit message
git pull origin main  # Fetch the latest changes from GitHub
git push origin main  # Push your changes to GitHub
