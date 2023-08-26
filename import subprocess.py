import subprocess
import os

# Run the C executable
os.chdir("G:\Padhai\Mtech\VLSI")
path =  os.getcwd()
#print(path)

result = subprocess.run(['./motion 1 2 3 4 5 6 7 8 9 10'], stdout=subprocess.PIPE, stderr=subprocess.PIPE)

# Get the output and error messages from the C executable
output = result.stdout.decode('utf-8')
error = result.stderr.decode('utf-8')

# Print the output and error messages
print("Output:", output)
print("Error:", error)

# Get the return code of the C executable
return_code = result.returncode

# Print the return code
print("Return code:", return_code)
