#include "../../tensorflow/c/eager/c_api.h"

extern "C"
{
    TF_CAPI_EXPORT extern TFE_ContextOptions *TFE_NewContextOptions(void) {}
    TF_CAPI_EXPORT extern void TFE_ContextOptionsSetConfig(
        TFE_ContextOptions *options, const void *proto, size_t proto_len,
        TF_Status *status) {}
    TF_CAPI_EXPORT extern void TFE_ContextOptionsSetAsync(TFE_ContextOptions *,
                                                          unsigned char enable) {}
    TF_CAPI_EXPORT extern void TFE_ContextOptionsSetDevicePlacementPolicy(
        TFE_ContextOptions *, TFE_ContextDevicePlacementPolicy) {}
    TF_CAPI_EXPORT extern void TFE_DeleteContextOptions(TFE_ContextOptions *) {}
    TF_CAPI_EXPORT extern TFE_Context *TFE_NewContext(
        const TFE_ContextOptions *opts, TF_Status *status) {}
    TF_CAPI_EXPORT extern void TFE_DeleteContext(TFE_Context *ctx) {}
    TF_CAPI_EXPORT extern TF_DeviceList *TFE_ContextListDevices(TFE_Context *ctx,
                                                                TF_Status *status) {}
    TF_CAPI_EXPORT extern void TFE_ContextClearCaches(TFE_Context *ctx) {}
    TF_CAPI_EXPORT extern void TFE_ContextSetThreadLocalDevicePlacementPolicy(
        TFE_Context *ctx, TFE_ContextDevicePlacementPolicy policy) {}

    TF_CAPI_EXPORT extern TFE_ContextDevicePlacementPolicy
    TFE_ContextGetDevicePlacementPolicy(TFE_Context *ctx) {}
    TF_CAPI_EXPORT extern void TFE_ContextSetServerDef(TFE_Context *ctx,
                                                       int keep_alive_secs,
                                                       const void *proto,
                                                       size_t proto_len,
                                                       TF_Status *status) {}
    TF_CAPI_EXPORT extern TFE_TensorHandle *TFE_NewTensorHandle(TF_Tensor *t,
                                                                TF_Status *status) {}
    TF_CAPI_EXPORT extern void TFE_DeleteTensorHandle(TFE_TensorHandle *h) {}
    TF_CAPI_EXPORT extern TF_DataType TFE_TensorHandleDataType(TFE_TensorHandle *h) {}
    TF_CAPI_EXPORT extern int TFE_TensorHandleNumDims(TFE_TensorHandle *h,
                                                      TF_Status *status) {}
    TF_CAPI_EXPORT extern int64_t TFE_TensorHandleNumElements(TFE_TensorHandle *h,
                                                              TF_Status *status) {}
    TF_CAPI_EXPORT extern int64_t TFE_TensorHandleDim(TFE_TensorHandle *h,
                                                      int dim_index,
                                                      TF_Status *status) {}
    TF_CAPI_EXPORT extern const char *TFE_TensorHandleDeviceName(
        TFE_TensorHandle *h, TF_Status *status) {}
    TF_CAPI_EXPORT extern const char *TFE_TensorHandleBackingDeviceName(
        TFE_TensorHandle *h, TF_Status *status) {}
    TF_CAPI_EXPORT extern TFE_TensorHandle *TFE_TensorHandleCopySharingTensor(
        TFE_TensorHandle *h, TF_Status *status) {}
    TF_CAPI_EXPORT extern TF_Tensor *TFE_TensorHandleResolve(TFE_TensorHandle *h,
                                                             TF_Status *status) {}
    TF_CAPI_EXPORT extern TFE_TensorHandle *TFE_TensorHandleCopyToDevice(
        TFE_TensorHandle *h, TFE_Context *ctx, const char *device_name,
        TF_Status *status) {}
    TF_CAPI_EXPORT extern TFE_TensorDebugInfo *TFE_TensorHandleTensorDebugInfo(
        TFE_TensorHandle *handle, TF_Status *status) {}
    TF_CAPI_EXPORT extern void TFE_DeleteTensorDebugInfo(
        TFE_TensorDebugInfo *debug_info) {}
    TF_CAPI_EXPORT extern int TFE_TensorDebugInfoOnDeviceNumDims(
        TFE_TensorDebugInfo *debug_info) {}
    TF_CAPI_EXPORT extern int64_t TFE_TensorDebugInfoOnDeviceDim(
        TFE_TensorDebugInfo *debug_info, int dim_index) {}
    TF_CAPI_EXPORT extern TFE_Op *TFE_NewOp(TFE_Context *ctx,
                                            const char *op_or_function_name,
                                            TF_Status *status) {}
    TF_CAPI_EXPORT extern void TFE_DeleteOp(TFE_Op *op) {}
    TF_CAPI_EXPORT extern void TFE_OpSetDevice(TFE_Op *op, const char *device_name,
                                               TF_Status *status) {}
    TF_CAPI_EXPORT extern const char *TFE_OpGetDevice(TFE_Op *op,
                                                      TF_Status *status) {}
    TF_CAPI_EXPORT extern void TFE_OpSetXLACompilation(TFE_Op *op,
                                                       unsigned char enable) {}
    TF_CAPI_EXPORT extern void TFE_OpAddInput(TFE_Op *op, TFE_TensorHandle *input,
                                              TF_Status *status) {}
    TF_CAPI_EXPORT extern void TFE_OpAddInputList(TFE_Op *op,
                                                  TFE_TensorHandle **inputs,
                                                  int num_inputs,
                                                  TF_Status *status) {}
    TF_CAPI_EXPORT extern TF_AttrType TFE_OpGetAttrType(TFE_Op *op,
                                                        const char *attr_name,
                                                        unsigned char *is_list,
                                                        TF_Status *status) {}
    TF_CAPI_EXPORT extern TF_AttrType TFE_OpNameGetAttrType(
        TFE_Context *ctx, const char *op_or_function_name, const char *attr_name,
        unsigned char *is_list, TF_Status *status) {}
    TF_CAPI_EXPORT extern void TFE_OpSetAttrString(TFE_Op *op,
                                                   const char *attr_name,
                                                   const void *value,
                                                   size_t length) {}
    TF_CAPI_EXPORT extern void TFE_OpSetAttrInt(TFE_Op *op, const char *attr_name,
                                                int64_t value) {}
    TF_CAPI_EXPORT extern void TFE_OpSetAttrFloat(TFE_Op *op, const char *attr_name,
                                                  float value) {}
    TF_CAPI_EXPORT extern void TFE_OpSetAttrBool(TFE_Op *op, const char *attr_name,
                                                 unsigned char value) {}
    TF_CAPI_EXPORT extern void TFE_OpSetAttrType(TFE_Op *op, const char *attr_name,
                                                 TF_DataType value) {}
    TF_CAPI_EXPORT extern void TFE_OpSetAttrShape(TFE_Op *op, const char *attr_name,
                                                  const int64_t *dims,
                                                  const int num_dims,
                                                  TF_Status *out_status) {}
    TF_CAPI_EXPORT extern void TFE_OpSetAttrFunction(TFE_Op *op,
                                                     const char *attr_name,
                                                     const TFE_Op *value) {}
    TF_CAPI_EXPORT void TFE_OpSetAttrFunctionName(TFE_Op *op, const char *attr_name,
                                                  const char *data, size_t length) {}
    TF_CAPI_EXPORT extern void TFE_OpSetAttrTensor(TFE_Op *op,
                                                   const char *attr_name,
                                                   TF_Tensor *tensor,
                                                   TF_Status *status) {}
    TF_CAPI_EXPORT extern void TFE_OpSetAttrStringList(TFE_Op *op,
                                                       const char *attr_name,
                                                       const void *const *values,
                                                       const size_t *lengths,
                                                       int num_values) {}
    TF_CAPI_EXPORT extern void TFE_OpSetAttrIntList(TFE_Op *op,
                                                    const char *attr_name,
                                                    const int64_t *values,
                                                    int num_values) {}
    TF_CAPI_EXPORT extern void TFE_OpSetAttrFloatList(TFE_Op *op,
                                                      const char *attr_name,
                                                      const float *values,
                                                      int num_values) {}
    TF_CAPI_EXPORT extern void TFE_OpSetAttrBoolList(TFE_Op *op,
                                                     const char *attr_name,
                                                     const unsigned char *values,
                                                     int num_values) {}
    TF_CAPI_EXPORT extern void TFE_OpSetAttrTypeList(TFE_Op *op,
                                                     const char *attr_name,
                                                     const TF_DataType *values,
                                                     int num_values) {}
    TF_CAPI_EXPORT extern void TFE_OpSetAttrShapeList(
        TFE_Op *op, const char *attr_name, const int64_t **dims,
        const int *num_dims, int num_values, TF_Status *out_status) {}
    TF_CAPI_EXPORT extern void TFE_OpSetAttrFunctionList(TFE_Op *op,
                                                         const char *attr_name,
                                                         const TFE_Op **value,
                                                         int num_values) {}
    TF_CAPI_EXPORT extern int TFE_OpGetInputLength(TFE_Op *op,
                                                   const char *input_name,
                                                   TF_Status *status) {}
    TF_CAPI_EXPORT extern int TFE_OpGetOutputLength(TFE_Op *op,
                                                    const char *output_name,
                                                    TF_Status *status) {}
    TF_CAPI_EXPORT extern void TFE_Execute(TFE_Op *op, TFE_TensorHandle **retvals,
                                           int *num_retvals, TF_Status *status) {}
    TF_CAPI_EXPORT extern void TFE_ContextAddFunctionDef(
        TFE_Context *ctx, const char *serialized_function_def, size_t size,
        TF_Status *status) {}
    TF_CAPI_EXPORT extern void TFE_ContextAddFunction(TFE_Context *ctx,
                                                      TF_Function *function,
                                                      TF_Status *status) {}
    TF_CAPI_EXPORT extern void TFE_ContextRemoveFunction(TFE_Context *ctx,
                                                         const char *name,
                                                         TF_Status *status) {}
    TF_CAPI_EXPORT unsigned char TFE_ContextHasFunction(TFE_Context *ctx,
                                                        const char *name) {}
    TF_CAPI_EXPORT extern void TFE_ContextEnableRunMetadata(TFE_Context *ctx) {}
    TF_CAPI_EXPORT extern void TFE_ContextDisableRunMetadata(TFE_Context *ctx) {}
    TF_CAPI_EXPORT extern void TFE_ContextExportRunMetadata(TFE_Context *ctx,
                                                            TF_Buffer *buf,
                                                            TF_Status *status) {}
    TF_CAPI_EXPORT extern void TFE_ContextStartStep(TFE_Context *ctx) {}
    TF_CAPI_EXPORT extern void TFE_ContextEndStep(TFE_Context *ctx) {}
}

namespace tensorflow
{
    class Tensor;
} // namespace tensorflow

TFE_TensorHandle *TFE_NewTensorHandle(const tensorflow::Tensor &t,
                                      TF_Status *status) {}
