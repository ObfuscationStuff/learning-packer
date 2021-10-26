#ifndef ANTI_DEBUG_H_
#define ANTI_DEBUG_H_

void anti_debug_by_isDebuggerPresent(void);
void anti_debug_by_PEB_BeingDebugged(void);
void anti_debug_by_RtlGetNtGlobalFlags(void);
void anti_debug_by_PEB_HeapFlags(void);
void anti_debug_by_TF(void);
void anti_debug_by_CheckRemoteDebuggerPresent(void);
void anti_debug_by_NtQueryInformationProcess(void);
void anti_debug_by_NtQueryInformationProcess_BasicInformation(void);
void anti_debug_by_debug_registers(void);
void anti_debug_by_seh(void);
void anti_debug_by_HideFromDebugger(void);

#endif