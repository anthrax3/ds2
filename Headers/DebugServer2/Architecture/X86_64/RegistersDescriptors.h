// !!! WARNING !!! THIS FILE WAS AUTOGENERATED !!! DO NOT MODIFY !!!
// !!! WARNING !!! MODIFY INSTEAD: Definitions/X86_64.json

#ifndef __DebugServer2_Architecture_X86_64_RegisterDescriptors_h
#define __DebugServer2_Architecture_X86_64_RegisterDescriptors_h

#include "DebugServer2/Architecture/RegisterLayout.h"

namespace ds2 {
namespace Architecture {
namespace X86_64 {

enum /* dwarf_reg */ {
  reg_dwarf_rax = 0,
  reg_dwarf_rbx = 3,
  reg_dwarf_rcx = 1,
  reg_dwarf_rdx = 2,
  reg_dwarf_rsi = 4,
  reg_dwarf_rdi = 5,
  reg_dwarf_rbp = 6,
  reg_dwarf_rsp = 7,
  reg_dwarf_r8 = 8,
  reg_dwarf_r9 = 9,
  reg_dwarf_r10 = 10,
  reg_dwarf_r11 = 11,
  reg_dwarf_r12 = 12,
  reg_dwarf_r13 = 13,
  reg_dwarf_r14 = 14,
  reg_dwarf_r15 = 15,
  reg_dwarf_rip = 16,
  reg_dwarf_st0 = 33,
  reg_dwarf_st1 = 34,
  reg_dwarf_st2 = 35,
  reg_dwarf_st3 = 36,
  reg_dwarf_st4 = 37,
  reg_dwarf_st5 = 38,
  reg_dwarf_st6 = 39,
  reg_dwarf_st7 = 40,
  reg_dwarf_ymm0 = 17,
  reg_dwarf_ymm1 = 18,
  reg_dwarf_ymm2 = 19,
  reg_dwarf_ymm3 = 20,
  reg_dwarf_ymm4 = 21,
  reg_dwarf_ymm5 = 22,
  reg_dwarf_ymm6 = 23,
  reg_dwarf_ymm7 = 24,
  reg_dwarf_ymm8 = 25,
  reg_dwarf_ymm9 = 26,
  reg_dwarf_ymm10 = 27,
  reg_dwarf_ymm11 = 28,
  reg_dwarf_ymm12 = 29,
  reg_dwarf_ymm13 = 30,
  reg_dwarf_ymm14 = 31,
  reg_dwarf_ymm15 = 32,
  reg_dwarf_xmm0 = 17,
  reg_dwarf_xmm1 = 18,
  reg_dwarf_xmm2 = 19,
  reg_dwarf_xmm3 = 20,
  reg_dwarf_xmm4 = 21,
  reg_dwarf_xmm5 = 22,
  reg_dwarf_xmm6 = 23,
  reg_dwarf_xmm7 = 24,
  reg_dwarf_xmm8 = 25,
  reg_dwarf_xmm9 = 26,
  reg_dwarf_xmm10 = 27,
  reg_dwarf_xmm11 = 28,
  reg_dwarf_xmm12 = 29,
  reg_dwarf_xmm13 = 30,
  reg_dwarf_xmm14 = 31,
  reg_dwarf_xmm15 = 32,
};

enum /* gdb_reg */ {
  reg_gdb_rax = 0,
  reg_gdb_rbx = 1,
  reg_gdb_rcx = 2,
  reg_gdb_rdx = 3,
  reg_gdb_rsi = 4,
  reg_gdb_rdi = 5,
  reg_gdb_rbp = 6,
  reg_gdb_rsp = 7,
  reg_gdb_r8 = 8,
  reg_gdb_r9 = 9,
  reg_gdb_r10 = 10,
  reg_gdb_r11 = 11,
  reg_gdb_r12 = 12,
  reg_gdb_r13 = 13,
  reg_gdb_r14 = 14,
  reg_gdb_r15 = 15,
  reg_gdb_rip = 16,
  reg_gdb_eflags = 17,
  reg_gdb_cs = 18,
  reg_gdb_ss = 19,
  reg_gdb_ds = 20,
  reg_gdb_es = 21,
  reg_gdb_fs = 22,
  reg_gdb_gs = 23,
  reg_gdb_st0 = 24,
  reg_gdb_st1 = 25,
  reg_gdb_st2 = 26,
  reg_gdb_st3 = 27,
  reg_gdb_st4 = 28,
  reg_gdb_st5 = 29,
  reg_gdb_st6 = 30,
  reg_gdb_st7 = 31,
  reg_gdb_fctrl = 32,
  reg_gdb_fstat = 33,
  reg_gdb_ftag = 34,
  reg_gdb_fiseg = 35,
  reg_gdb_fioff = 36,
  reg_gdb_foseg = 37,
  reg_gdb_fooff = 38,
  reg_gdb_fop = 39,
  reg_gdb_mxcsr = 56,
  reg_gdb_mxcsrmask = 57,
  reg_gdb_ymm0 = 40,
  reg_gdb_ymm1 = 41,
  reg_gdb_ymm2 = 42,
  reg_gdb_ymm3 = 43,
  reg_gdb_ymm4 = 44,
  reg_gdb_ymm5 = 45,
  reg_gdb_ymm6 = 46,
  reg_gdb_ymm7 = 47,
  reg_gdb_ymm8 = 48,
  reg_gdb_ymm9 = 49,
  reg_gdb_ymm10 = 50,
  reg_gdb_ymm11 = 51,
  reg_gdb_ymm12 = 52,
  reg_gdb_ymm13 = 53,
  reg_gdb_ymm14 = 54,
  reg_gdb_ymm15 = 55,
  reg_gdb_xmm0 = 40,
  reg_gdb_orig_rax = 57,
};

enum /* gcc_reg */ {
  reg_gcc_rax = 0,
  reg_gcc_rbx = 3,
  reg_gcc_rcx = 1,
  reg_gcc_rdx = 2,
  reg_gcc_rsi = 4,
  reg_gcc_rdi = 5,
  reg_gcc_rbp = 6,
  reg_gcc_rsp = 7,
  reg_gcc_r8 = 8,
  reg_gcc_r9 = 9,
  reg_gcc_r10 = 10,
  reg_gcc_r11 = 11,
  reg_gcc_r12 = 12,
  reg_gcc_r13 = 13,
  reg_gcc_r14 = 14,
  reg_gcc_r15 = 15,
  reg_gcc_rip = 16,
  reg_gcc_st0 = 33,
  reg_gcc_st1 = 34,
  reg_gcc_st2 = 35,
  reg_gcc_st3 = 36,
  reg_gcc_st4 = 37,
  reg_gcc_st5 = 38,
  reg_gcc_st6 = 39,
  reg_gcc_st7 = 40,
  reg_gcc_ymm0 = 17,
  reg_gcc_ymm1 = 18,
  reg_gcc_ymm2 = 19,
  reg_gcc_ymm3 = 20,
  reg_gcc_ymm4 = 21,
  reg_gcc_ymm5 = 22,
  reg_gcc_ymm6 = 23,
  reg_gcc_ymm7 = 24,
  reg_gcc_ymm8 = 25,
  reg_gcc_ymm9 = 26,
  reg_gcc_ymm10 = 27,
  reg_gcc_ymm11 = 28,
  reg_gcc_ymm12 = 29,
  reg_gcc_ymm13 = 30,
  reg_gcc_ymm14 = 31,
  reg_gcc_ymm15 = 32,
  reg_gcc_xmm0 = 17,
  reg_gcc_xmm1 = 18,
  reg_gcc_xmm2 = 19,
  reg_gcc_xmm3 = 20,
  reg_gcc_xmm4 = 21,
  reg_gcc_xmm5 = 22,
  reg_gcc_xmm6 = 23,
  reg_gcc_xmm7 = 24,
  reg_gcc_xmm8 = 25,
  reg_gcc_xmm9 = 26,
  reg_gcc_xmm10 = 27,
  reg_gcc_xmm11 = 28,
  reg_gcc_xmm12 = 29,
  reg_gcc_xmm13 = 30,
  reg_gcc_xmm14 = 31,
  reg_gcc_xmm15 = 32,
};

enum /* lldb_reg */ {
  reg_lldb_rax = 0,
  reg_lldb_rbx = 1,
  reg_lldb_rcx = 2,
  reg_lldb_rdx = 3,
  reg_lldb_rsi = 4,
  reg_lldb_rdi = 5,
  reg_lldb_rbp = 6,
  reg_lldb_rsp = 7,
  reg_lldb_r8 = 8,
  reg_lldb_r9 = 9,
  reg_lldb_r10 = 10,
  reg_lldb_r11 = 11,
  reg_lldb_r12 = 12,
  reg_lldb_r13 = 13,
  reg_lldb_r14 = 14,
  reg_lldb_r15 = 15,
  reg_lldb_rip = 16,
  reg_lldb_eax = 24,
  reg_lldb_ebx = 25,
  reg_lldb_ecx = 26,
  reg_lldb_edx = 27,
  reg_lldb_esi = 28,
  reg_lldb_edi = 29,
  reg_lldb_ebp = 30,
  reg_lldb_esp = 31,
  reg_lldb_r8d = 32,
  reg_lldb_r9d = 33,
  reg_lldb_r10d = 34,
  reg_lldb_r11d = 35,
  reg_lldb_r12d = 36,
  reg_lldb_r13d = 37,
  reg_lldb_r14d = 38,
  reg_lldb_r15d = 39,
  reg_lldb_ax = 40,
  reg_lldb_bx = 41,
  reg_lldb_cx = 42,
  reg_lldb_dx = 43,
  reg_lldb_si = 44,
  reg_lldb_di = 45,
  reg_lldb_bp = 46,
  reg_lldb_sp = 47,
  reg_lldb_r8w = 48,
  reg_lldb_r9w = 49,
  reg_lldb_r10w = 50,
  reg_lldb_r11w = 51,
  reg_lldb_r12w = 52,
  reg_lldb_r13w = 53,
  reg_lldb_r14w = 54,
  reg_lldb_r15w = 55,
  reg_lldb_ah = 56,
  reg_lldb_bh = 57,
  reg_lldb_ch = 58,
  reg_lldb_dh = 59,
  reg_lldb_al = 60,
  reg_lldb_bl = 61,
  reg_lldb_cl = 62,
  reg_lldb_dl = 63,
  reg_lldb_sil = 64,
  reg_lldb_dil = 65,
  reg_lldb_bpl = 66,
  reg_lldb_spl = 67,
  reg_lldb_r8l = 68,
  reg_lldb_r9l = 69,
  reg_lldb_r10l = 70,
  reg_lldb_r11l = 71,
  reg_lldb_r12l = 72,
  reg_lldb_r13l = 73,
  reg_lldb_r14l = 74,
  reg_lldb_r15l = 75,
  reg_lldb_eflags = 17,
  reg_lldb_cs = 18,
  reg_lldb_ss = 19,
  reg_lldb_ds = 20,
  reg_lldb_es = 21,
  reg_lldb_fs = 22,
  reg_lldb_gs = 23,
  reg_lldb_st0 = 86,
  reg_lldb_st1 = 87,
  reg_lldb_st2 = 88,
  reg_lldb_st3 = 89,
  reg_lldb_st4 = 90,
  reg_lldb_st5 = 91,
  reg_lldb_st6 = 92,
  reg_lldb_st7 = 93,
  reg_lldb_fctrl = 76,
  reg_lldb_fstat = 77,
  reg_lldb_ftag = 78,
  reg_lldb_fiseg = 79,
  reg_lldb_fioff = 80,
  reg_lldb_foseg = 81,
  reg_lldb_fooff = 82,
  reg_lldb_fop = 83,
  reg_lldb_mxcsr = 84,
  reg_lldb_mxcsrmask = 85,
  reg_lldb_ymm0 = 110,
  reg_lldb_ymm1 = 111,
  reg_lldb_ymm2 = 112,
  reg_lldb_ymm3 = 113,
  reg_lldb_ymm4 = 114,
  reg_lldb_ymm5 = 115,
  reg_lldb_ymm6 = 116,
  reg_lldb_ymm7 = 117,
  reg_lldb_ymm8 = 118,
  reg_lldb_ymm9 = 119,
  reg_lldb_ymm10 = 120,
  reg_lldb_ymm11 = 121,
  reg_lldb_ymm12 = 122,
  reg_lldb_ymm13 = 123,
  reg_lldb_ymm14 = 124,
  reg_lldb_ymm15 = 125,
  reg_lldb_xmm0 = 94,
  reg_lldb_xmm1 = 95,
  reg_lldb_xmm2 = 96,
  reg_lldb_xmm3 = 97,
  reg_lldb_xmm4 = 98,
  reg_lldb_xmm5 = 99,
  reg_lldb_xmm6 = 100,
  reg_lldb_xmm7 = 101,
  reg_lldb_xmm8 = 102,
  reg_lldb_xmm9 = 103,
  reg_lldb_xmm10 = 104,
  reg_lldb_xmm11 = 105,
  reg_lldb_xmm12 = 106,
  reg_lldb_xmm13 = 107,
  reg_lldb_xmm14 = 108,
  reg_lldb_xmm15 = 109,
};

extern LLDBDescriptor const LLDB;
extern GDBDescriptor const GDB;
}
}
}

#endif // !__DebugServer2_Architecture_X86_64_RegisterDescriptors_h