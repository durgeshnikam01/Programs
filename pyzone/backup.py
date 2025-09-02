import shutil

# Choose a file from your repo
source = r"c:\Users\Durgesh\OneDrive\Programs\pyzone\start.py"
destination = r"c:\Users\Durgesh\OneDrive\Programs\pyzone\start_backup.py"

# Copy the file to create a backup
shutil.copy2(source, destination)