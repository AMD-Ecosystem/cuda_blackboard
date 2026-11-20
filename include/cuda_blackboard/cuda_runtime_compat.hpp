#ifndef CUDA_BLACKBOARD__CUDA_RUNTIME_COMPAT_HPP_
#define CUDA_BLACKBOARD__CUDA_RUNTIME_COMPAT_HPP_

// Maps the CUDA runtime names used by this package to HIP when building for AMD GPUs.
// Each name is guarded so that another compatibility header defining the same mapping,
// included before or after this one, does not conflict with it.

#if defined(__HIP_PLATFORM_AMD__)

#include <hip/hip_runtime_api.h>

// Types
#ifndef cudaStream_t
#define cudaStream_t hipStream_t
#endif
#ifndef cudaEvent_t
#define cudaEvent_t hipEvent_t
#endif
#ifndef cudaError_t
#define cudaError_t hipError_t
#endif
#ifndef cudaMemPool_t
#define cudaMemPool_t hipMemPool_t
#endif
#ifndef cudaMemPoolProps
#define cudaMemPoolProps hipMemPoolProps
#endif
#ifndef cudaMemcpyKind
#define cudaMemcpyKind hipMemcpyKind
#endif

// Constants
#ifndef cudaSuccess
#define cudaSuccess hipSuccess
#endif
#ifndef cudaStreamNonBlocking
#define cudaStreamNonBlocking hipStreamNonBlocking
#endif
#ifndef cudaStreamLegacy
#define cudaStreamLegacy hipStreamLegacy
#endif
#ifndef cudaEventDisableTiming
#define cudaEventDisableTiming hipEventDisableTiming
#endif
#ifndef cudaEventWaitDefault
#define cudaEventWaitDefault hipEventWaitDefault
#endif
#ifndef cudaMemPoolAttrReleaseThreshold
#define cudaMemPoolAttrReleaseThreshold hipMemPoolAttrReleaseThreshold
#endif
#ifndef cudaMemAllocationTypePinned
#define cudaMemAllocationTypePinned hipMemAllocationTypePinned
#endif
#ifndef cudaMemLocationTypeDevice
#define cudaMemLocationTypeDevice hipMemLocationTypeDevice
#endif
#ifndef cudaMemcpyHostToDevice
#define cudaMemcpyHostToDevice hipMemcpyHostToDevice
#endif
#ifndef cudaMemcpyDeviceToHost
#define cudaMemcpyDeviceToHost hipMemcpyDeviceToHost
#endif
#ifndef cudaMemcpyDeviceToDevice
#define cudaMemcpyDeviceToDevice hipMemcpyDeviceToDevice
#endif

// Streams and events
#ifndef cudaStreamCreate
#define cudaStreamCreate hipStreamCreate
#endif
#ifndef cudaStreamCreateWithFlags
#define cudaStreamCreateWithFlags hipStreamCreateWithFlags
#endif
#ifndef cudaStreamDestroy
#define cudaStreamDestroy hipStreamDestroy
#endif
#ifndef cudaStreamSynchronize
#define cudaStreamSynchronize hipStreamSynchronize
#endif
#ifndef cudaStreamGetDevice
#define cudaStreamGetDevice hipStreamGetDevice
#endif
#ifndef cudaStreamWaitEvent
#define cudaStreamWaitEvent hipStreamWaitEvent
#endif
#ifndef cudaEventCreateWithFlags
#define cudaEventCreateWithFlags hipEventCreateWithFlags
#endif
#ifndef cudaEventRecord
#define cudaEventRecord hipEventRecord
#endif
#ifndef cudaEventSynchronize
#define cudaEventSynchronize hipEventSynchronize
#endif
#ifndef cudaEventDestroy
#define cudaEventDestroy hipEventDestroy
#endif

// Memory
#ifndef cudaMemPoolCreate
#define cudaMemPoolCreate hipMemPoolCreate
#endif
#ifndef cudaMemPoolDestroy
#define cudaMemPoolDestroy hipMemPoolDestroy
#endif
#ifndef cudaMemPoolSetAttribute
#define cudaMemPoolSetAttribute hipMemPoolSetAttribute
#endif
#ifndef cudaMallocFromPoolAsync
#define cudaMallocFromPoolAsync hipMallocFromPoolAsync
#endif
#ifndef cudaFreeAsync
#define cudaFreeAsync hipFreeAsync
#endif
#ifndef cudaFree
#define cudaFree hipFree
#endif
#ifndef cudaMallocHost
#define cudaMallocHost hipHostMalloc
#endif
#ifndef cudaFreeHost
#define cudaFreeHost hipHostFree
#endif
#ifndef cudaMemsetAsync
#define cudaMemsetAsync hipMemsetAsync
#endif
#ifndef cudaMemcpy
#define cudaMemcpy hipMemcpy
#endif
#ifndef cudaMemcpyAsync
#define cudaMemcpyAsync hipMemcpyAsync
#endif

// Errors and devices
#ifndef cudaGetErrorName
#define cudaGetErrorName hipGetErrorName
#endif
#ifndef cudaGetErrorString
#define cudaGetErrorString hipGetErrorString
#endif
#ifndef cudaGetLastError
#define cudaGetLastError hipGetLastError
#endif
#ifndef cudaGetDeviceCount
#define cudaGetDeviceCount hipGetDeviceCount
#endif

#else

#include <cuda_runtime.h>

#endif

#endif  // CUDA_BLACKBOARD__CUDA_RUNTIME_COMPAT_HPP_
