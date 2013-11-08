#ifndef __SHARED_DETAILS__
#define __SHARED_DETAILS__

#define __CL_ENABLE_EXCEPTIONS

#define PROF_MASK 0x3FFFFF // 22 bits
#define PROF_WEIGHT 0x3FFFFFF // 26 bits
#define PROF_REST_LENGTH 0x3FFFFFFFFF // 38 bits

#define THRESHOLD 0

#define BF15

#define COLLECTION_FILE "collection.raw"
#define PROFILE_FILE "profile.bin"

#ifdef BLOOM_FILTER
#define KERNEL_FILE "gpu_kernel_bloom.cl"
#define KERNEL_NAME "scoreCollectionBloom"
#else
#define KERNEL_FILE "gpu_kernel_no_bloom.cl"
#define KERNEL_NAME "scoreCollectionNoBloom"
#endif

#ifdef BF15
#define BLOOM_FILTER_FILE "bloomfilter.raw"
#define ADDR_BITS 15
#define ADDR_MASK 0x7FFF
#else
#define BLOOM_FILTER_FILE "bloomfilter_4k_17b.raw"
#define ADDR_BITS 17
#define ADDR_MASK 0x1FFFF
#endif

#endif