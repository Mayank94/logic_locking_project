import subprocess
import os

# Run the C executable
os.chdir("G:\Padhai\Mtech\VLSI")
path =  os.getcwd()
#print(path)
os.chmod(path+"/motion.exe", 0o777)


# if(os.access(path+"/motion.exe",os.X_OK)):
#     print("Exec Permission granted")
# else:
#     print("Exec permit denied")

#input_data = b"1 2 3 4 5 6 7 8 9 10\n"

result = subprocess.run(['./motion.exe',"1","2","3","4","5","6","7","8","9","10"] , stdout=subprocess.PIPE, stderr=subprocess.PIPE)

print(type(result))

# Get the output and error messages from the C executable
output = result.stdout.decode('utf-8')
# error = result.stderr.decode('utf-8')

print(type(result.stdout))
# # Print the output and error messages
# print("Output:", output)
# print("Error:", error)

# # Get the return code of the C executable
# return_code = result.returncode

# # Print the return code
# print("Return code:", return_code)
