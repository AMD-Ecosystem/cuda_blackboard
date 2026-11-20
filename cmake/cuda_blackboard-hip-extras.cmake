# The installed headers call the HIP runtime on AMD GPUs. Link only the host runtime: hip::device
# would add device-compilation flags that a plain C++ compiler does not accept.
find_package(hip CONFIG REQUIRED PATHS $ENV{ROCM_PATH} /opt/rocm)
list(APPEND cuda_blackboard_LIBRARIES hip::host)
