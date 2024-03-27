# Import libraries
import time

# Factorial number
n = 10
# n = 20

# Start counter
start_time = time.time()

# Compute factorial
factorial = 1
for i in range(1, n + 1):
    factorial *= i

# Stop counter
end_time = time.time()

# Execution time
duration = end_time - start_time
print("Factorial result:", factorial)
print("Execution time:", duration, "seconds")