#include <stdio.h>

#include "../tensorflow/c/c_api.h"

extern "C"
{
    TF_CAPI_EXPORT extern const char *TF_Version(void) {}
    TF_CAPI_EXPORT extern TF_Buffer *TF_NewBufferFromString(const void *proto,
                                                            size_t proto_len) {}
    TF_CAPI_EXPORT extern TF_Buffer *TF_NewBuffer(void) {}
    TF_CAPI_EXPORT extern void TF_DeleteBuffer(TF_Buffer *buffer) {}
    TF_CAPI_EXPORT extern TF_Buffer TF_GetBuffer(TF_Buffer *buffer) {}
    TF_CAPI_EXPORT extern TF_SessionOptions *TF_NewSessionOptions(void) {}
    TF_CAPI_EXPORT extern void TF_SetTarget(TF_SessionOptions *options,
                                            const char *target) {}
    TF_CAPI_EXPORT extern void TF_SetConfig(TF_SessionOptions *options,
                                            const void *proto, size_t proto_len,
                                            TF_Status *status) {}
    TF_CAPI_EXPORT extern void TF_DeleteSessionOptions(TF_SessionOptions *options) {}
    TF_CAPI_EXPORT extern TF_Graph *TF_NewGraph(void) {}
    TF_CAPI_EXPORT extern void TF_DeleteGraph(TF_Graph *graph) {}
    TF_CAPI_EXPORT extern void TF_GraphSetTensorShape(TF_Graph *graph,
                                                      TF_Output output,
                                                      const int64_t *dims,
                                                      const int num_dims,
                                                      TF_Status *status) {}
    TF_CAPI_EXPORT extern int TF_GraphGetTensorNumDims(TF_Graph *graph,
                                                       TF_Output output,
                                                       TF_Status *status) {}
    TF_CAPI_EXPORT extern void TF_GraphGetTensorShape(TF_Graph *graph,
                                                      TF_Output output,
                                                      int64_t *dims, int num_dims,
                                                      TF_Status *status) {}
    TF_CAPI_EXPORT extern TF_OperationDescription *TF_NewOperation(
        TF_Graph *graph, const char *op_type, const char *oper_name) {}
    TF_CAPI_EXPORT extern void TF_SetDevice(TF_OperationDescription *desc,
                                            const char *device) {}
    TF_CAPI_EXPORT extern void TF_AddInput(TF_OperationDescription *desc,
                                           TF_Output input) {}
    TF_CAPI_EXPORT extern void TF_AddInputList(TF_OperationDescription *desc,
                                               const TF_Output *inputs,
                                               int num_inputs) {}
    TF_CAPI_EXPORT extern void TF_AddControlInput(TF_OperationDescription *desc,
                                                  TF_Operation *input) {}
    TF_CAPI_EXPORT extern void TF_ColocateWith(TF_OperationDescription *desc,
                                               TF_Operation *op) {}
    TF_CAPI_EXPORT extern void TF_SetAttrString(TF_OperationDescription *desc,
                                                const char *attr_name,
                                                const void *value, size_t length) {}
    TF_CAPI_EXPORT extern void TF_SetAttrStringList(TF_OperationDescription *desc,
                                                    const char *attr_name,
                                                    const void *const *values,
                                                    const size_t *lengths,
                                                    int num_values) {}
    TF_CAPI_EXPORT extern void TF_SetAttrInt(TF_OperationDescription *desc,
                                             const char *attr_name, int64_t value) {}
    TF_CAPI_EXPORT extern void TF_SetAttrIntList(TF_OperationDescription *desc,
                                                 const char *attr_name,
                                                 const int64_t *values,
                                                 int num_values) {}
    TF_CAPI_EXPORT extern void TF_SetAttrFloat(TF_OperationDescription *desc,
                                               const char *attr_name, float value) {}
    TF_CAPI_EXPORT extern void TF_SetAttrFloatList(TF_OperationDescription *desc,
                                                   const char *attr_name,
                                                   const float *values,
                                                   int num_values) {}
    TF_CAPI_EXPORT extern void TF_SetAttrBool(TF_OperationDescription *desc,
                                              const char *attr_name,
                                              unsigned char value) {}
    TF_CAPI_EXPORT extern void TF_SetAttrBoolList(TF_OperationDescription *desc,
                                                  const char *attr_name,
                                                  const unsigned char *values,
                                                  int num_values) {}
    TF_CAPI_EXPORT extern void TF_SetAttrType(TF_OperationDescription *desc,
                                              const char *attr_name,
                                              TF_DataType value) {}
    TF_CAPI_EXPORT extern void TF_SetAttrTypeList(TF_OperationDescription *desc,
                                                  const char *attr_name,
                                                  const TF_DataType *values,
                                                  int num_values) {}
    TF_CAPI_EXPORT extern void TF_SetAttrPlaceholder(TF_OperationDescription *desc,
                                                     const char *attr_name,
                                                     const char *placeholder) {}
    TF_CAPI_EXPORT extern void TF_SetAttrFuncName(TF_OperationDescription *desc,
                                                  const char *attr_name,
                                                  const char *value, size_t length) {}
    TF_CAPI_EXPORT extern void TF_SetAttrShape(TF_OperationDescription *desc,
                                               const char *attr_name,
                                               const int64_t *dims, int num_dims) {}
    TF_CAPI_EXPORT extern void TF_SetAttrShapeList(TF_OperationDescription *desc,
                                                   const char *attr_name,
                                                   const int64_t *const *dims,
                                                   const int *num_dims,
                                                   int num_shapes) {}
    TF_CAPI_EXPORT extern void TF_SetAttrTensorShapeProto(
        TF_OperationDescription *desc, const char *attr_name, const void *proto,
        size_t proto_len, TF_Status *status) {}
    TF_CAPI_EXPORT extern void TF_SetAttrTensorShapeProtoList(
        TF_OperationDescription *desc, const char *attr_name,
        const void *const *protos, const size_t *proto_lens, int num_shapes,
        TF_Status *status) {}
    TF_CAPI_EXPORT extern void TF_SetAttrTensor(TF_OperationDescription *desc,
                                                const char *attr_name,
                                                TF_Tensor *value,
                                                TF_Status *status) {}
    TF_CAPI_EXPORT extern void TF_SetAttrTensorList(TF_OperationDescription *desc,
                                                    const char *attr_name,
                                                    TF_Tensor *const *values,
                                                    int num_values,
                                                    TF_Status *status) {}
    TF_CAPI_EXPORT extern void TF_SetAttrValueProto(TF_OperationDescription *desc,
                                                    const char *attr_name,
                                                    const void *proto,
                                                    size_t proto_len,
                                                    TF_Status *status) {}
    TF_CAPI_EXPORT extern TF_Operation *TF_FinishOperation(
        TF_OperationDescription *desc, TF_Status *status) {}
    TF_CAPI_EXPORT extern const char *TF_OperationName(TF_Operation *oper) {}
    TF_CAPI_EXPORT extern const char *TF_OperationOpType(TF_Operation *oper) {}
    TF_CAPI_EXPORT extern const char *TF_OperationDevice(TF_Operation *oper) {}
    TF_CAPI_EXPORT extern int TF_OperationNumOutputs(TF_Operation *oper) {}
    TF_CAPI_EXPORT extern TF_DataType TF_OperationOutputType(TF_Output oper_out) {}
    TF_CAPI_EXPORT extern int TF_OperationOutputListLength(TF_Operation *oper,
                                                           const char *arg_name,
                                                           TF_Status *status) {}
    TF_CAPI_EXPORT extern int TF_OperationNumInputs(TF_Operation *oper) {}
    TF_CAPI_EXPORT extern TF_DataType TF_OperationInputType(TF_Input oper_in) {}
    TF_CAPI_EXPORT extern int TF_OperationInputListLength(TF_Operation *oper,
                                                          const char *arg_name,
                                                          TF_Status *status) {}
    TF_CAPI_EXPORT extern TF_Output TF_OperationInput(TF_Input oper_in) {}
    TF_CAPI_EXPORT extern void TF_OperationAllInputs(TF_Operation *oper,
                                                     TF_Output *inputs,
                                                     int max_inputs) {}
    TF_CAPI_EXPORT extern int TF_OperationOutputNumConsumers(TF_Output oper_out) {}
    TF_CAPI_EXPORT extern int TF_OperationOutputConsumers(TF_Output oper_out,
                                                          TF_Input *consumers,
                                                          int max_consumers) {}
    TF_CAPI_EXPORT extern int TF_OperationNumControlInputs(TF_Operation *oper) {}
    TF_CAPI_EXPORT extern int TF_OperationGetControlInputs(
        TF_Operation *oper, TF_Operation **control_inputs, int max_control_inputs) {}
    TF_CAPI_EXPORT extern int TF_OperationNumControlOutputs(TF_Operation *oper) {}
    TF_CAPI_EXPORT extern int TF_OperationGetControlOutputs(
        TF_Operation *oper, TF_Operation **control_outputs,
        int max_control_outputs) {}
    TF_CAPI_EXPORT extern TF_AttrMetadata TF_OperationGetAttrMetadata(
        TF_Operation *oper, const char *attr_name, TF_Status *status) {}
    TF_CAPI_EXPORT extern void TF_OperationGetAttrString(TF_Operation *oper,
                                                         const char *attr_name,
                                                         void *value,
                                                         size_t max_length,
                                                         TF_Status *status) {}
    TF_CAPI_EXPORT extern void TF_OperationGetAttrStringList(
        TF_Operation *oper, const char *attr_name, void **values, size_t *lengths,
        int max_values, void *storage, size_t storage_size, TF_Status *status) {}
    TF_CAPI_EXPORT extern void TF_OperationGetAttrInt(TF_Operation *oper,
                                                      const char *attr_name,
                                                      int64_t *value,
                                                      TF_Status *status) {}
    TF_CAPI_EXPORT extern void TF_OperationGetAttrIntList(TF_Operation *oper,
                                                          const char *attr_name,
                                                          int64_t *values,
                                                          int max_values,
                                                          TF_Status *status) {}
    TF_CAPI_EXPORT extern void TF_OperationGetAttrFloat(TF_Operation *oper,
                                                        const char *attr_name,
                                                        float *value,
                                                        TF_Status *status) {}
    TF_CAPI_EXPORT extern void TF_OperationGetAttrFloatList(TF_Operation *oper,
                                                            const char *attr_name,
                                                            float *values,
                                                            int max_values,
                                                            TF_Status *status) {}
    TF_CAPI_EXPORT extern void TF_OperationGetAttrBool(TF_Operation *oper,
                                                       const char *attr_name,
                                                       unsigned char *value,
                                                       TF_Status *status) {}
    TF_CAPI_EXPORT extern void TF_OperationGetAttrBoolList(TF_Operation *oper,
                                                           const char *attr_name,
                                                           unsigned char *values,
                                                           int max_values,
                                                           TF_Status *status) {}
    TF_CAPI_EXPORT extern void TF_OperationGetAttrType(TF_Operation *oper,
                                                       const char *attr_name,
                                                       TF_DataType *value,
                                                       TF_Status *status) {}
    TF_CAPI_EXPORT extern void TF_OperationGetAttrTypeList(TF_Operation *oper,
                                                           const char *attr_name,
                                                           TF_DataType *values,
                                                           int max_values,
                                                           TF_Status *status) {}
    TF_CAPI_EXPORT extern void TF_OperationGetAttrShape(TF_Operation *oper,
                                                        const char *attr_name,
                                                        int64_t *value,
                                                        int num_dims,
                                                        TF_Status *status) {}
    TF_CAPI_EXPORT extern void TF_OperationGetAttrShapeList(
        TF_Operation *oper, const char *attr_name, int64_t **dims, int *num_dims,
        int num_shapes, int64_t *storage, int storage_size, TF_Status *status) {}
    TF_CAPI_EXPORT extern void TF_OperationGetAttrTensorShapeProto(
        TF_Operation *oper, const char *attr_name, TF_Buffer *value,
        TF_Status *status) {}
    TF_CAPI_EXPORT extern void TF_OperationGetAttrTensorShapeProtoList(
        TF_Operation *oper, const char *attr_name, TF_Buffer **values,
        int max_values, TF_Status *status) {}
    TF_CAPI_EXPORT extern void TF_OperationGetAttrTensor(TF_Operation *oper,
                                                         const char *attr_name,
                                                         TF_Tensor **value,
                                                         TF_Status *status) {}
    TF_CAPI_EXPORT extern void TF_OperationGetAttrTensorList(TF_Operation *oper,
                                                             const char *attr_name,
                                                             TF_Tensor **values,
                                                             int max_values,
                                                             TF_Status *status) {}
    TF_CAPI_EXPORT extern void TF_OperationGetAttrValueProto(
        TF_Operation *oper, const char *attr_name, TF_Buffer *output_attr_value,
        TF_Status *status) {}
    TF_CAPI_EXPORT extern TF_Operation *TF_GraphOperationByName(
        TF_Graph *graph, const char *oper_name) {}
    TF_CAPI_EXPORT extern TF_Operation *TF_GraphNextOperation(TF_Graph *graph,
                                                              size_t *pos) {}
    TF_CAPI_EXPORT extern void TF_GraphToGraphDef(TF_Graph *graph,
                                                  TF_Buffer *output_graph_def,
                                                  TF_Status *status) {}
    TF_CAPI_EXPORT extern void TF_GraphGetOpDef(TF_Graph *graph,
                                                const char *op_name,
                                                TF_Buffer *output_op_def,
                                                TF_Status *status) {}
    TF_CAPI_EXPORT extern void TF_GraphVersions(TF_Graph *graph,
                                                TF_Buffer *output_version_def,
                                                TF_Status *status) {}

    TF_CAPI_EXPORT extern TF_ImportGraphDefOptions *TF_NewImportGraphDefOptions(void) {}
    TF_CAPI_EXPORT extern void TF_DeleteImportGraphDefOptions(TF_ImportGraphDefOptions *opts) {}

    TF_CAPI_EXPORT extern void TF_ImportGraphDefOptionsSetPrefix(
        TF_ImportGraphDefOptions *opts, const char *prefix) {}
    TF_CAPI_EXPORT extern void TF_ImportGraphDefOptionsSetDefaultDevice(
        TF_ImportGraphDefOptions *opts, const char *device) {}
    TF_CAPI_EXPORT extern void TF_ImportGraphDefOptionsSetUniquifyNames(
        TF_ImportGraphDefOptions *opts, unsigned char uniquify_names) {}
    TF_CAPI_EXPORT extern void TF_ImportGraphDefOptionsSetUniquifyPrefix(
        TF_ImportGraphDefOptions *opts, unsigned char uniquify_prefix) {}
    TF_CAPI_EXPORT extern void TF_ImportGraphDefOptionsAddInputMapping(
        TF_ImportGraphDefOptions *opts, const char *src_name, int src_index,
        TF_Output dst) {}
    TF_CAPI_EXPORT extern void TF_ImportGraphDefOptionsRemapControlDependency(
        TF_ImportGraphDefOptions *opts, const char *src_name, TF_Operation *dst) {}
    TF_CAPI_EXPORT extern void TF_ImportGraphDefOptionsAddControlDependency(
        TF_ImportGraphDefOptions *opts, TF_Operation *oper) {}
    TF_CAPI_EXPORT extern void TF_ImportGraphDefOptionsAddReturnOutput(
        TF_ImportGraphDefOptions *opts, const char *oper_name, int index) {}
    TF_CAPI_EXPORT extern void TF_ImportGraphDefOptionsAddReturnOperation(
        TF_ImportGraphDefOptions *opts, const char *oper_name) {}
    TF_CAPI_EXPORT extern int TF_ImportGraphDefOptionsNumReturnOperations(
        const TF_ImportGraphDefOptions *opts) {}
    TF_CAPI_EXPORT extern void TF_ImportGraphDefResultsReturnOutputs(
        TF_ImportGraphDefResults *results, int *num_outputs, TF_Output **outputs) {}
    TF_CAPI_EXPORT extern void TF_ImportGraphDefResultsReturnOperations(
        TF_ImportGraphDefResults *results, int *num_opers, TF_Operation ***opers) {}
    TF_CAPI_EXPORT extern void TF_ImportGraphDefResultsMissingUnusedInputMappings(
        TF_ImportGraphDefResults *results, int *num_missing_unused_input_mappings,
        const char ***src_names, int **src_indexes) {}
    TF_CAPI_EXPORT extern void TF_DeleteImportGraphDefResults(
        TF_ImportGraphDefResults *results) {}
    TF_CAPI_EXPORT extern TF_ImportGraphDefResults *
    TF_GraphImportGraphDefWithResults(TF_Graph *graph, const TF_Buffer *graph_def,
                                      const TF_ImportGraphDefOptions *options,
                                      TF_Status *status) {}
    TF_CAPI_EXPORT extern void TF_GraphImportGraphDefWithReturnOutputs(
        TF_Graph *graph, const TF_Buffer *graph_def,
        const TF_ImportGraphDefOptions *options, TF_Output *return_outputs,
        int num_return_outputs, TF_Status *status) {}
    TF_CAPI_EXPORT extern void TF_GraphImportGraphDef(
        TF_Graph *graph, const TF_Buffer *graph_def,
        const TF_ImportGraphDefOptions *options, TF_Status *status) {}
    TF_CAPI_EXPORT extern void TF_GraphCopyFunction(TF_Graph *g,
                                                    const TF_Function *func,
                                                    const TF_Function *grad,
                                                    TF_Status *status) {}
    TF_CAPI_EXPORT extern int TF_GraphNumFunctions(TF_Graph *g) {}
    TF_CAPI_EXPORT extern int TF_GraphGetFunctions(TF_Graph *g, TF_Function **funcs,
                                                   int max_func, TF_Status *status) {}
    TF_CAPI_EXPORT extern void TF_OperationToNodeDef(TF_Operation *oper,
                                                     TF_Buffer *output_node_def,
                                                     TF_Status *status) {}
    TF_CAPI_EXPORT extern TF_WhileParams TF_NewWhile(TF_Graph *g, TF_Output *inputs,
                                                     int ninputs,
                                                     TF_Status *status) {}
    TF_CAPI_EXPORT extern void TF_FinishWhile(const TF_WhileParams *params,
                                              TF_Status *status,
                                              TF_Output *outputs) {}
    TF_CAPI_EXPORT extern void TF_AbortWhile(const TF_WhileParams *params) {}
    TF_CAPI_EXPORT void TF_AddGradients(TF_Graph *g, TF_Output *y, int ny,
                                        TF_Output *x, int nx, TF_Output *dx,
                                        TF_Status *status, TF_Output *dy) {}
    TF_CAPI_EXPORT void TF_AddGradientsWithPrefix(TF_Graph *g, const char *prefix,
                                                  TF_Output *y, int ny,
                                                  TF_Output *x, int nx,
                                                  TF_Output *dx, TF_Status *status,
                                                  TF_Output *dy) {}
    TF_CAPI_EXPORT extern TF_Function *TF_GraphToFunction(
        const TF_Graph *fn_body, const char *fn_name,
        unsigned char append_hash_to_fn_name, int num_opers,
        const TF_Operation *const *opers, int ninputs, const TF_Output *inputs,
        int noutputs, const TF_Output *outputs, const char *const *output_names,
        const TF_FunctionOptions *opts, const char *description, TF_Status *status) {}
    TF_CAPI_EXPORT extern TF_Function *TF_GraphToFunctionWithControlOutputs(
        const TF_Graph *fn_body, const char *fn_name,
        unsigned char append_hash_to_fn_name, int num_opers,
        const TF_Operation *const *opers, int ninputs, const TF_Output *inputs,
        int noutputs, const TF_Output *outputs, const char *const *output_names,
        int ncontrol_outputs, const TF_Operation *const *control_outputs,
        const char *const *control_output_names, const TF_FunctionOptions *opts,
        const char *description, TF_Status *status) {}
    TF_CAPI_EXPORT extern const char *TF_FunctionName(TF_Function *func) {}
    TF_CAPI_EXPORT extern void TF_FunctionToFunctionDef(TF_Function *func,
                                                        TF_Buffer *output_func_def,
                                                        TF_Status *status) {}
    TF_CAPI_EXPORT extern TF_Function *TF_FunctionImportFunctionDef(
        const void *proto, size_t proto_len, TF_Status *status) {}
    TF_CAPI_EXPORT extern void TF_FunctionSetAttrValueProto(TF_Function *func,
                                                            const char *attr_name,
                                                            const void *proto,
                                                            size_t proto_len,
                                                            TF_Status *status) {}
    TF_CAPI_EXPORT extern void TF_FunctionGetAttrValueProto(
        TF_Function *func, const char *attr_name, TF_Buffer *output_attr_value,
        TF_Status *status) {}
    TF_CAPI_EXPORT extern void TF_DeleteFunction(TF_Function *func) {}
    TF_CAPI_EXPORT extern unsigned char TF_TryEvaluateConstant(TF_Graph *graph,
                                                               TF_Output output,
                                                               TF_Tensor **result,
                                                               TF_Status *status) {}
    TF_CAPI_EXPORT extern TF_Session *TF_NewSession(TF_Graph *graph,
                                                    const TF_SessionOptions *opts,
                                                    TF_Status *status) {}
    TF_CAPI_EXPORT extern TF_Session *TF_LoadSessionFromSavedModel(
        const TF_SessionOptions *session_options, const TF_Buffer *run_options,
        const char *export_dir, const char *const *tags, int tags_len,
        TF_Graph *graph, TF_Buffer *meta_graph_def, TF_Status *status) {
            fprintf(stdout, "ERROR: You are loading mocked tensorflow library, please review the link path if it's not intended");
            fflush(stdout);
        }
    TF_CAPI_EXPORT extern void TF_CloseSession(TF_Session *session, TF_Status *status) {}
    TF_CAPI_EXPORT extern void TF_DeleteSession(TF_Session *session, TF_Status *status) {}
    TF_CAPI_EXPORT extern void TF_SessionRun(
        TF_Session *session,
        const TF_Buffer *run_options,
        const TF_Output *inputs, TF_Tensor *const *input_values, int ninputs,
        const TF_Output *outputs, TF_Tensor **output_values, int noutputs,
        const TF_Operation *const *target_opers, int ntargets,
        TF_Buffer *run_metadata,
        TF_Status *status) {}
    TF_CAPI_EXPORT extern void TF_SessionPRunSetup(
        TF_Session *session,
        const TF_Output *inputs, int ninputs,
        const TF_Output *outputs, int noutputs,
        const TF_Operation *const *target_opers, int ntargets,
        const char **handle,
        TF_Status *status) {}
    TF_CAPI_EXPORT extern void TF_SessionPRun(
        TF_Session *session, const char *handle,
        const TF_Output *inputs, TF_Tensor *const *input_values, int ninputs,
        const TF_Output *outputs, TF_Tensor **output_values, int noutputs,
        const TF_Operation *const *target_opers, int ntargets,
        TF_Status *status) {}
    TF_CAPI_EXPORT extern void TF_DeletePRunHandle(const char *handle) {}
    TF_CAPI_EXPORT extern TF_DeprecatedSession *TF_NewDeprecatedSession(
        const TF_SessionOptions *session, TF_Status *status) {}
    TF_CAPI_EXPORT extern void TF_CloseDeprecatedSession(TF_DeprecatedSession *session,
                                                         TF_Status *status) {}
    TF_CAPI_EXPORT extern void TF_DeleteDeprecatedSession(TF_DeprecatedSession *session,
                                                          TF_Status *status) {}
    TF_CAPI_EXPORT extern void TF_Reset(const TF_SessionOptions *opt,
                                        const char **containers, int ncontainers,
                                        TF_Status *status) {}
    TF_CAPI_EXPORT extern void TF_ExtendGraph(TF_DeprecatedSession *session,
                                              const void *proto, size_t proto_len,
                                              TF_Status *status) {}
    TF_CAPI_EXPORT extern void TF_Run(TF_DeprecatedSession *session,
                                      const TF_Buffer *run_options,
                                      const char **input_names, TF_Tensor **inputs,
                                      int ninputs, const char **output_names,
                                      TF_Tensor **outputs, int noutputs,
                                      const char **target_oper_names, int ntargets,
                                      TF_Buffer *run_metadata, TF_Status *status) {}
    TF_CAPI_EXPORT extern void TF_PRunSetup(TF_DeprecatedSession *session,
                                            const char **input_names, int ninputs,
                                            const char **output_names, int noutputs,
                                            const char **target_oper_names,
                                            int ntargets, const char **handle,
                                            TF_Status *status) {}
    TF_CAPI_EXPORT extern void TF_PRun(TF_DeprecatedSession *session, const char *handle,
                                       const char **input_names, TF_Tensor **inputs,
                                       int ninputs, const char **output_names,
                                       TF_Tensor **outputs, int noutputs,
                                       const char **target_oper_names, int ntargets,
                                       TF_Status *status) {}
    TF_CAPI_EXPORT extern TF_DeviceList *TF_SessionListDevices(TF_Session *session,
                                                               TF_Status *status) {}
    TF_CAPI_EXPORT extern TF_DeviceList *TF_DeprecatedSessionListDevices(
        TF_DeprecatedSession *session, TF_Status *status) {}
    TF_CAPI_EXPORT extern void TF_DeleteDeviceList(TF_DeviceList *list) {}
    TF_CAPI_EXPORT extern int TF_DeviceListCount(const TF_DeviceList *list) {}
    TF_CAPI_EXPORT extern const char *TF_DeviceListName(const TF_DeviceList *list,
                                                        int index,
                                                        TF_Status *status) {}
    TF_CAPI_EXPORT extern const char *TF_DeviceListType(const TF_DeviceList *list,
                                                        int index,
                                                        TF_Status *status) {}
    TF_CAPI_EXPORT extern int64_t TF_DeviceListMemoryBytes(
        const TF_DeviceList *list, int index, TF_Status *status) {}
    TF_CAPI_EXPORT extern uint64_t TF_DeviceListIncarnation(
        const TF_DeviceList *list, int index, TF_Status *status) {}
    TF_CAPI_EXPORT extern TF_Library *TF_LoadLibrary(const char *library_filename,
                                                     TF_Status *status) {}
    TF_CAPI_EXPORT extern TF_Buffer TF_GetOpList(TF_Library *lib_handle) {}
    TF_CAPI_EXPORT extern void TF_DeleteLibraryHandle(TF_Library *lib_handle) {}
    TF_CAPI_EXPORT extern TF_Buffer *TF_GetAllOpList(void) {}
    TF_CAPI_EXPORT extern TF_ApiDefMap *TF_NewApiDefMap(TF_Buffer *op_list_buffer,
                                                        TF_Status *status) {}
    TF_CAPI_EXPORT extern void TF_DeleteApiDefMap(TF_ApiDefMap *apimap) {}
    TF_CAPI_EXPORT extern void TF_ApiDefMapPut(TF_ApiDefMap *api_def_map,
                                               const char *text, size_t text_len,
                                               TF_Status *status) {}
    TF_CAPI_EXPORT extern TF_Buffer *TF_ApiDefMapGet(TF_ApiDefMap *api_def_map,
                                                     const char *name,
                                                     size_t name_len,
                                                     TF_Status *status) {}
    TF_CAPI_EXPORT extern TF_Buffer *TF_GetAllRegisteredKernels(TF_Status *status) {}
    TF_CAPI_EXPORT extern TF_Buffer *TF_GetRegisteredKernelsForOp(
        const char *name, TF_Status *status) {}
    TF_CAPI_EXPORT extern TF_Server *TF_NewServer(const void *proto,
                                                  size_t proto_len,
                                                  TF_Status *status) {}
    TF_CAPI_EXPORT extern void TF_ServerStart(TF_Server *server, TF_Status *status) {}
    TF_CAPI_EXPORT extern void TF_ServerStop(TF_Server *server, TF_Status *status) {}
    TF_CAPI_EXPORT extern void TF_ServerJoin(TF_Server *server, TF_Status *status) {}
    TF_CAPI_EXPORT extern const char *TF_ServerTarget(TF_Server *server) {}
    TF_CAPI_EXPORT extern void TF_DeleteServer(TF_Server *server) {}
    TF_CAPI_EXPORT extern void TF_RegisterLogListener(
        void (*listener)(const char *)) {}
}
