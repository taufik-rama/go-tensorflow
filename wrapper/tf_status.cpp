#include "../tensorflow/c/tf_status.h"

extern "C"
{
    TF_CAPI_EXPORT extern TF_Status *TF_NewStatus(void) {}
    TF_CAPI_EXPORT extern void TF_DeleteStatus(TF_Status *s) {}
    TF_CAPI_EXPORT extern void TF_SetStatus(TF_Status *s, TF_Code code,
                                               const char *msg) {}
    TF_CAPI_EXPORT extern void TF_SetStatusFromIOError(TF_Status *s, int error_code,
                                                          const char *context) {}
    TF_CAPI_EXPORT extern TF_Code TF_GetCode(const TF_Status *s) {}
    TF_CAPI_EXPORT extern const char *TF_Message(const TF_Status *s) {}
}