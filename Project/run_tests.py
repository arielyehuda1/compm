#!/usr/bin/env python3
import os

# Define the directories
testsuit_dir = "testsuit"
rx_cc_executable = "./rx-cc"
rx_linker_executable = "./rx-linker"
rx_vm_executable = "./rx-vm"

# Function to run commands
def run_command(command):
    print("Running command: {}".format(command))
    os.system(command)

# Function to run tests
def run_tests():
    # Traverse through directories in testsuit
    for root, dirs, files in os.walk(testsuit_dir):
        for dir_name in dirs:
            cmm_file = os.path.join(root, dir_name, dir_name + ".cmm")
            rsk_file = os.path.join(root, dir_name, dir_name + ".rsk")
            out_file = os.path.join(root, dir_name, "myout.txt")
            expected_out_file = os.path.join(root, dir_name, "a.exp")
            input_file = os.path.join(root, dir_name, "a.input")
            
            # Run rx-cc
            rx_cc_command = "{} {}".format(rx_cc_executable, cmm_file)
            run_command(rx_cc_command)
            
            # Run rx-linker
            rx_linker_command = "{} {}".format(rx_linker_executable, rsk_file)
            run_command(rx_linker_command)
            
            # Run rx-vm with input file
            rx_vm_command = "{} out.e < {} > {}".format(rx_vm_executable, input_file, out_file)
            run_command(rx_vm_command)
            
            # Diff check
            diff_command = "diff {} {}".format(out_file, expected_out_file)
            diff_result = os.system(diff_command)
            if diff_result == 0:
                print("Test {}: PASSED".format(dir_name))
            else:
                print("Test {}: FAILED".format(dir_name))

if __name__ == "__main__":
    run_tests()