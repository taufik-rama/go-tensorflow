#include "../tensorflow/c/tf_tensor.h"

extern "C"
{
    TF_CAPI_EXPORT extern TF_Tensor *TF_NewTensor(
        TF_DataType dt, const int64_t *dims, int num_dims, void *data, size_t len,
        void (*deallocator)(void *data, size_t len, void *arg),
        void *deallocator_arg) {}
    TF_CAPI_EXPORT extern TF_Tensor *TF_AllocateTensor(TF_DataType dt,
                                                       const int64_t *dims,
                                                       int num_dims, size_t len) {}
    TF_CAPI_EXPORT extern TF_Tensor *TF_TensorMaybeMove(TF_Tensor *tensor) {}
    TF_CAPI_EXPORT extern void TF_DeleteTensor(TF_Tensor *tensor) {}
    TF_CAPI_EXPORT extern TF_DataType TF_TensorType(const TF_Tensor *tensor) {}
    TF_CAPI_EXPORT extern int TF_NumDims(const TF_Tensor *tensor) {}
    TF_CAPI_EXPORT extern int64_t TF_Dim(const TF_Tensor *tensor, int dim_index) {}
    TF_CAPI_EXPORT extern size_t TF_TensorByteSize(const TF_Tensor *tensor) {}
    TF_CAPI_EXPORT extern void *TF_TensorData(const TF_Tensor *tensor) {}
    TF_CAPI_EXPORT extern int64_t TF_TensorElementCount(const TF_Tensor *tensor) {}
    TF_CAPI_EXPORT extern void TF_TensorBitcastFrom(const TF_Tensor *from,
                                                    TF_DataType type, TF_Tensor *to,
                                                    const int64_t *new_dims,
                                                    int num_new_dims,
                                                    TF_Status *status) {}
    TF_CAPI_EXPORT extern size_t TF_StringEncode(const char *src, size_t src_len,
                                                 char *dst, size_t dst_len,
                                                 TF_Status *status) {}
    TF_CAPI_EXPORT extern size_t TF_StringDecode(const char *src, size_t src_len,
                                                 const char **dst, size_t *dst_len,
                                                 TF_Status *status) {}
    TF_CAPI_EXPORT extern size_t TF_StringEncodedSize(size_t len) {}
    TF_CAPI_EXPORT extern bool TF_TensorIsAligned(const TF_Tensor *tensor) {}
}