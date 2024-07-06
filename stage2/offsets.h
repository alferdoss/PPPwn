/*
 * Copyright (C) 2024 Andy Nguyen
 *
 * This software may be modified and distributed under the terms
 * of the MIT license.  See the LICENSE file for details.
 */

#ifndef __OFFSETS_H__
#define __OFFSETS_H__

#if (FIRMWARE == 700 || FIRMWARE == 701 || FIRMWARE == 702) // FW 7.00 / FW 7.01 / FW 7.02

/* kernel offsets */

#define kdlsym_addr_Xfast_syscall 0xffffffff822001c0

#define kdlsym_addr_printf 0xffffffff822bc730

#define kdlsym_addr_sysent 0xffffffff83325660

#define kdlsym_addr_amd_syscall_patch1 0xffffffff82200490
#define kdlsym_addr_amd_syscall_patch2 0xffffffff822004b5
#define kdlsym_addr_amd_syscall_patch3 0xffffffff822004b9
#define kdlsym_addr_amd_syscall_patch4 0xffffffff822004c2

#define kdlsym_addr_copyin_patch1 0xffffffff8222f287
#define kdlsym_addr_copyin_patch2 0xffffffff8222f293

#define kdlsym_addr_copyout_patch1 0xffffffff8222f192
#define kdlsym_addr_copyout_patch2 0xffffffff8222f19e

#define kdlsym_addr_copyinstr_patch1 0xffffffff8222f733
#define kdlsym_addr_copyinstr_patch2 0xffffffff8222f73f
#define kdlsym_addr_copyinstr_patch3 0xffffffff8222f770

#elif (FIRMWARE == 750 || FIRMWARE == 751 || FIRMWARE == 755) // FW 7.50 / FW 7.51 / FW 7.55

/* kernel offsets */

#define kdlsym_addr_Xfast_syscall 0xffffffff822001c0

#define kdlsym_addr_printf 0xffffffff8246f740

#define kdlsym_addr_sysent 0xffffffff83322340

#define kdlsym_addr_amd_syscall_patch1 0xffffffff82200490
#define kdlsym_addr_amd_syscall_patch2 0xffffffff822004b5
#define kdlsym_addr_amd_syscall_patch3 0xffffffff822004b9
#define kdlsym_addr_amd_syscall_patch4 0xffffffff822004c2

#define kdlsym_addr_copyin_patch1 0xffffffff8248fa47
#define kdlsym_addr_copyin_patch2 0xffffffff8248fa53

#define kdlsym_addr_copyout_patch1 0xffffffff8248f952
#define kdlsym_addr_copyout_patch2 0xffffffff8248f95e

#define kdlsym_addr_copyinstr_patch1 0xffffffff8248fef3
#define kdlsym_addr_copyinstr_patch2 0xffffffff8248feff
#define kdlsym_addr_copyinstr_patch3 0xffffffff8248ff30

#if ENABLE_DEBUG_MENU
#if FIRMWARE == 755
#define enable_data_mount_patch 0x00316BC3
#define enable_fpkg_patch 0x003C244F
#define fake_free_patch 0x00F66831
#define pkg_installer_patch 0x009BC141
#define ext_hdd_patch 0x005BCF2D
#define debug_trophies_patch 0x0071759B

#define sceKernelIsGenuineCEX 0x00168A90
#define sceKernelIsGenuineCEX_1 0x007FBF00
#define sceKernelIsGenuineCEX_2 0x0084AF42
#define sceKernelIsGenuineCEX_3 0x009D3150
#define dipsw_libSceDipsw 0x00168ABA
#define dipsw_libSceDipsw_1 0x00316BD3
#define dipsw_libSceDipsw_2 0x007FBF2A
#define dipsw_libSceDipsw_3 0x009D317A
#endif

#define sys_debug_menu 0x0001d140
#define sys_debug_menu_1 0x0001d4a0
#endif

// libkernel_sys.srpx
#define _scePthreadAttrInit_offset 0x15420
#define _scePthreadAttrSetstacksize_offset 0x15550
#define _scePthreadCreate_offset 0x30180
#define _thr_initial_offset 0x8D830

#define vm_map_protect_p 0x3014c8
#define ptrace_p 0x361cf5
#define ptrace_p2 0x3621cf
#define disable_aslr_p 0x218aa2
#define sceSblACMgrIsAllowedSystemLevelDebugging_p 0x44e220
#define kemem_2 0x1754b4
#define kemem_1 0x1754ac
#define vm_map_lock_offset 0x2fc2e0
#define vm_map_insert_offset 0x2fd640
#define vm_map_unlock_offset 0x2fc350
#define malloc_offset 0x1d6680
#define free_offset 0x1d6870
#define vm_map_lock_read_offset 0x2fc430
#define vm_map_unlock_read_offset 0x2fc480
#define vm_map_lookup_entry_offset 0x2fca70
#define M_TEMP_offset 0x1556da0
#define proc_rmem_offset 0x361310
#define vm_map_findspace_offset 0x2ff560
#define vm_map_delete_offset 0x2fefa0
#define create_thread_offset 0x47ab60
#define all_proc_offset 0x213c828
#define sys_dynlib_dlsym_p 0x4523C4
#define sys_dynlib_dlsym_p2 0x29a30

#define PRISON0_addr 0x113b728
#define ROOTVNODE_addr 0x1b463e0

#elif (FIRMWARE == 800 || FIRMWARE == 801 || FIRMWARE == 803) // FW 8.00 / 8.01 / 8.03

/* kernel offsets */

#define kdlsym_addr_Xfast_syscall 0xffffffff822001c0

#define kdlsym_addr_printf 0xffffffff82630ae0

#define kdlsym_addr_sysent 0xffffffff832fc4d0

#define kdlsym_addr_amd_syscall_patch1 0xffffffff82200490
#define kdlsym_addr_amd_syscall_patch2 0xffffffff822004b5
#define kdlsym_addr_amd_syscall_patch3 0xffffffff822004b9
#define kdlsym_addr_amd_syscall_patch4 0xffffffff822004c2

#define kdlsym_addr_copyin_patch1 0xffffffff8245e407
#define kdlsym_addr_copyin_patch2 0xffffffff8245e413

#define kdlsym_addr_copyout_patch1 0xffffffff8245e312
#define kdlsym_addr_copyout_patch2 0xffffffff8245e31e

#define kdlsym_addr_copyinstr_patch1 0xffffffff8245e8b3
#define kdlsym_addr_copyinstr_patch2 0xffffffff8245e8bf
#define kdlsym_addr_copyinstr_patch3 0xffffffff8245e8f0

#if ENABLE_DEBUG_MENU
#if FIRMWARE == 803
#define enable_data_mount_patch 0x0031C503
#define enable_fpkg_patch 0x003D1A2F
#define fake_free_patch 0x00FC62B1
#define pkg_installer_patch 0x00A0C681
#define ext_hdd_patch 0x0060761D
#define debug_trophies_patch 0x00729659

#define sceKernelIsGenuineCEX 0x00168D20
#define sceKernelIsGenuineCEX_1 0x0084D080
#define sceKernelIsGenuineCEX_2 0x0089C1E2
#define sceKernelIsGenuineCEX_3 0x00A236A0
#define dipsw_libSceDipsw 0x00168D4A
#define dipsw_libSceDipsw_1 0x00242978
#define dipsw_libSceDipsw_2 0x0084D0AA
#define dipsw_libSceDipsw_3 0x00A236CA

#else //801
#define enable_data_mount_patch 0x0031C503
#define enable_fpkg_patch 0x003D1A2F
#define fake_free_patch 0x00FC61F1
#define pkg_installer_patch 0x00A0C5C1
#define ext_hdd_patch 0x0060756D
#define debug_trophies_patch 0x0072D5B9

#define sceKernelIsGenuineCEX 0x00168D20
#define sceKernelIsGenuineCEX_1 0x0084CFD0
#define sceKernelIsGenuineCEX_2 0x0089C132
#define sceKernelIsGenuineCEX_3 0x00A235E0
#define dipsw_libSceDipsw 0x00168D4A
#define dipsw_libSceDipsw_1 0x00242978
#define dipsw_libSceDipsw_2 0x0084CFFA
#define dipsw_libSceDipsw_3 0x00A2360A
#endif

#define sys_debug_menu 0x0001D130
#define sys_debug_menu_1 0x0001D490
#endif

// libkernel_sys.srpx
#define _scePthreadAttrInit_offset 0x153c0
#define _scePthreadAttrSetstacksize_offset 0x154f0
#define _scePthreadCreate_offset 0x14540
#define _thr_initial_offset 0x8D830

//kern
// kbase + offset (offsets are not in theflow format)
#define vm_map_protect_p 0x3ec68b
#define ptrace_p 0x174155
#define ptrace_p2 0x17462f
#define disable_aslr_p 0x2856f4
#define sceSblACMgrIsAllowedSystemLevelDebugging_p 0x14660
#define kemem_2 0x1b4c4
#define kemem_1 0x1b4bc
#define vm_map_lock_offset 0x3e7530
#define vm_map_insert_offset 0x3e8880
#define vm_map_unlock_offset 0x3e75a0
#define malloc_offset 0x46f7f0
#define free_offset 0x46f9b0
#define vm_map_lock_read_offset 0x3e7680
#define vm_map_unlock_read_offset 0x3e76d0
#define vm_map_lookup_entry_offset 0x3e7cc0
#define M_TEMP_offset 0x1a77e10
#define proc_rmem_offset 0x173770
#define vm_map_findspace_offset 0x3ea740
#define vm_map_delete_offset 0x3ea180
#define create_thread_offset 0x26fa50
#define all_proc_offset 0x1b244e0
#define sys_dynlib_dlsym_p 0x31953f
#define sys_dynlib_dlsym_p2 0x951c0

#define PRISON0_addr 0x111a7d0
#define ROOTVNODE_addr 0x1b8c730

#if MODULE_DUMPER
#define sceSblACMgrHasMmapSelfCapability 0x001D5780
#define sceSblACMgrIsAllowedToMmapSelf 0x001D77A0
#define sceSblAuthMgrIsLoadable 0x000FED61
#define depth_patch 0x0001B0B5
#endif

#elif (FIRMWARE == 850 || FIRMWARE == 852) // FW 8.50 / 8.52

/* kernel offsets */

#define kdlsym_addr_Xfast_syscall 0xffffffff822001c0

#define kdlsym_addr_printf 0xffffffff8235d570

#define kdlsym_addr_sysent 0xffffffff832fc5c0

#define kdlsym_addr_amd_syscall_patch1 0xffffffff82200490 // Identical to 9.00
#define kdlsym_addr_amd_syscall_patch2 0xffffffff822004b5 // Identical to 9.00
#define kdlsym_addr_amd_syscall_patch3 0xffffffff822004b9 // Identical to 9.00
#define kdlsym_addr_amd_syscall_patch4 0xffffffff822004c2 // Identical to 9.00

#define kdlsym_addr_copyin_patch1 0xffffffff825a4337
#define kdlsym_addr_copyin_patch2 0xffffffff825a4343

#define kdlsym_addr_copyout_patch1 0xffffffff825a4242
#define kdlsym_addr_copyout_patch2 0xffffffff825a424e

#define kdlsym_addr_copyinstr_patch1 0xffffffff825a47e3
#define kdlsym_addr_copyinstr_patch2 0xffffffff825a47ef
#define kdlsym_addr_copyinstr_patch3 0xffffffff825a4820

#if ENABLE_DEBUG_MENU
#if FIRMWARE == 850
#define enable_data_mount_patch 0x00320713
#define enable_fpkg_patch 0x003D3ADF
#define fake_free_patch 0x00FBC331
#define pkg_installer_patch 0x009FEB91
#define ext_hdd_patch 0x00607C8D
#define debug_trophies_patch 0x0072BA29

#define sceKernelIsGenuineCEX 0x0016C3D0
#define sceKernelIsGenuineCEX_1 0x0084F5A0
#define sceKernelIsGenuineCEX_2 0x0089E962
#define sceKernelIsGenuineCEX_3 0x00A15C80
#define dipsw_libSceDipsw 0x0016C3FA
#define dipsw_libSceDipsw_1 0x00247108
#define dipsw_libSceDipsw_2 0x0084F5CA
#define dipsw_libSceDipsw_3 0x00A15CAA
#else

#define enable_data_mount_patch 0x00320713
#define enable_fpkg_patch 0x3d3adf
#define fake_free_patch 0xfbc371
#define pkg_installer_patch 0x9febb1
#define ext_hdd_patch 0x00607CAD
#define debug_trophies_patch 0x0072FA49

#define sceKernelIsGenuineCEX 0x0016C3D0
#define sceKernelIsGenuineCEX_1 0x0084F5C0
#define sceKernelIsGenuineCEX_2 0x0089E982
#define sceKernelIsGenuineCEX_3 0x00A15CA0
#define dipsw_libSceDipsw 0x0016C3FA
#define dipsw_libSceDipsw_1 0x00247108
#define dipsw_libSceDipsw_2 0x0084F5EA
#define dipsw_libSceDipsw_3 0x00A15CCA

#endif

#define sys_debug_menu 0x0001D1C0
#define sys_debug_menu_1 0x0001D520
#endif

// libkernel_sys.srpx
#define _scePthreadAttrInit_offset 0x0015450
#define _scePthreadAttrSetstacksize_offset 0x0015580
#define _scePthreadCreate_offset 0x00145D0
#define _thr_initial_offset 0x8D830

#define vm_map_protect_p 0x14d6db
#define ptrace_p 0x132535
#define ptrace_p2 0x132a0f
#define disable_aslr_p 0x215154
#define sceSblACMgrIsAllowedSystemLevelDebugging_p 0x2c08f0
#define kemem_2 0x219a74
#define kemem_1 0x219a6c
#define vm_map_lock_offset 0x148580
#define vm_map_insert_offset 0x1498d0
#define vm_map_unlock_offset 0x1485f0
#define malloc_offset 0xb5a40
#define free_offset 0xb5c00
#define vm_map_lock_read_offset 0x1486d0
#define vm_map_unlock_read_offset 0x148720
#define vm_map_lookup_entry_offset 0x148d10
#define M_TEMP_offset 0x1528ff0
#define proc_rmem_offset 0x131b50
#define vm_map_findspace_offset 0x14b790
#define vm_map_delete_offset 0x14b1d0
#define create_thread_offset 0x392440
#define all_proc_offset 0x1bd72d8
#define sys_dynlib_dlsym_p 0x17c2f
#define sys_dynlib_dlsym_p2 0x3ad040

#define PRISON0_addr 0x111a8f0
#define ROOTVNODE_addr 0x1c66150

#if MODULE_DUMPER
#define sceSblACMgrHasMmapSelfCapability 0x0029365
#define sceSblACMgrIsAllowedToMmapSelf 0x00293670
#define sceSblAuthMgrIsLoadable 0x00084411
#define depth_patch 0x00164E35
#endif

#elif FIRMWARE == 900 // FW 9.00

/* kernel offsets */

#define kdlsym_addr_Xfast_syscall 0xffffffff822001c0

#define kdlsym_addr_printf 0xffffffff822b7a30

#define kdlsym_addr_sysent 0xffffffff83300310

#define kdlsym_addr_amd_syscall_patch1 0xffffffff82200490
#define kdlsym_addr_amd_syscall_patch2 0xffffffff822004b5
#define kdlsym_addr_amd_syscall_patch3 0xffffffff822004b9
#define kdlsym_addr_amd_syscall_patch4 0xffffffff822004c2

#define kdlsym_addr_copyin_patch1 0xffffffff824716f7
#define kdlsym_addr_copyin_patch2 0xffffffff82471703

#define kdlsym_addr_copyout_patch1 0xffffffff82471602
#define kdlsym_addr_copyout_patch2 0xffffffff8247160e

#define kdlsym_addr_copyinstr_patch1 0xffffffff82471ba3
#define kdlsym_addr_copyinstr_patch2 0xffffffff82471baf
#define kdlsym_addr_copyinstr_patch3 0xffffffff82471be0

#if ENABLE_DEBUG_MENU
#define enable_data_mount_patch 0x0032079B
#define enable_fpkg_patch 0x003D7AFF
#define fake_free_patch 0x00FD3211
#define pkg_installer_patch 0x00A10A81
#define ext_hdd_patch 0x006180FD
#define debug_trophies_patch 0x0073F299

#define sceKernelIsGenuineCEX 0x0016EAA4
#define sceKernelIsGenuineCEX_1 0x008621D4
#define sceKernelIsGenuineCEX_2 0x008AFBC2
#define sceKernelIsGenuineCEX_3 0x00A27BD4
#define dipsw_libSceDipsw 0x0016EAD2
#define dipsw_libSceDipsw_1 0x00249F7B
#define dipsw_libSceDipsw_2 0x00862202
#define dipsw_libSceDipsw_3 0x00A27C02
#define sys_debug_menu 0x0001D1C0
#define sys_debug_menu_1 0x0001D520
#endif

// libkernel_sys.srpx
#define _scePthreadAttrInit_offset 0x0014190
#define _scePthreadAttrSetstacksize_offset 0x00141B0
#define _scePthreadCreate_offset 0x00145D0
#define _thr_initial_offset 0x8E830

//kern
// kbase + offset (offsets are not in theflow format)
#define vm_map_protect_p 0x00080B8B
#define ptrace_p 0x41F4E5
#define ptrace_p2 0x41F9D1
#define disable_aslr_p 0x5F824
#define sceSblACMgrIsAllowedSystemLevelDebugging_p 0x0001D1C0
#define kemem_2 0x37BF44
#define kemem_1 0x37BF3C
#define vm_map_lock_offset 0x0007BA30
#define vm_map_insert_offset 0x0007CD80
#define vm_map_unlock_offset 0x0007BAA0
#define malloc_offset 0x00301B20
#define free_offset 0x00301CE0
#define vm_map_lock_read_offset 0x0007BB80
#define vm_map_unlock_read_offset 0x0007BBD0
#define vm_map_lookup_entry_offset 0x0007C1C0
#define M_TEMP_offset 0x015621E0
#define proc_rmem_offset 0x0041EB00
#define vm_map_findspace_offset 0x0007EC40
#define vm_map_delete_offset 0x0007E680
#define create_thread_offset 0x001ED670
#define all_proc_offset 0x01B946E0
#define sys_dynlib_dlsym_p 0x0023B67F
#define sys_dynlib_dlsym_p2 0x00221B40

#define PRISON0_addr 0x0111F870
#define ROOTVNODE_addr 0x021EFF20

#elif (FIRMWARE == 903 || FIRMWARE == 904) // FW 9.03/9.04

/* kernel offsets */

#define kdlsym_addr_Xfast_syscall 0xffffffff822001c0 // Identical to 9.00

#define kdlsym_addr_printf 0xffffffff822b79e0

#define kdlsym_addr_sysent 0xffffffff832fc310

#define kdlsym_addr_amd_syscall_patch1 0xffffffff82200490 // Identical to 9.00
#define kdlsym_addr_amd_syscall_patch2 0xffffffff822004b5 // Identical to 9.00
#define kdlsym_addr_amd_syscall_patch3 0xffffffff822004b9 // Identical to 9.00
#define kdlsym_addr_amd_syscall_patch4 0xffffffff822004c2 // Identical to 9.00

#define kdlsym_addr_copyin_patch1 0xffffffff82471377
#define kdlsym_addr_copyin_patch2 0xffffffff82471383

#define kdlsym_addr_copyout_patch1 0xffffffff82471282
#define kdlsym_addr_copyout_patch2 0xffffffff8247128e

#define kdlsym_addr_copyinstr_patch1 0xffffffff82471823
#define kdlsym_addr_copyinstr_patch2 0xffffffff8247182f
#define kdlsym_addr_copyinstr_patch3 0xffffffff82471860

#if ENABLE_DEBUG_MENU
#if FIRMWARE == 903
// ShellCore offsets
#define enable_data_mount_patch 0x321f2b
#define enable_fpkg_patch 0x3da06f
#define fake_free_patch 0xfd5bd1
#define pkg_installer_patch 0xa13101
#define ext_hdd_patch 0x61a66d
#define debug_trophies_patch 0x00741809

#define sceKernelIsGenuineCEX 0x0016F014
#define sceKernelIsGenuineCEX_1 0x00864744
#define sceKernelIsGenuineCEX_2 0x008B2232
#define sceKernelIsGenuineCEX_3 0x00A2A254
#define dipsw_libSceDipsw 0x0016F042
#define dipsw_libSceDipsw_1 0x0024A4EB
#define dipsw_libSceDipsw_2 0x00864772
#define dipsw_libSceDipsw_3 0x00A2A282

#else

#define enable_data_mount_patch 0x321f2b
#define enable_fpkg_patch 0x3da06f
#define fake_free_patch 0xfd5bf1
#define pkg_installer_patch 0xa13121
#define ext_hdd_patch 0x61a69d
#define debug_trophies_patch 0x00741839

#define sceKernelIsGenuineCEX_1 0x16f014
#define sceKernelIsGenuineCEX_2 0x864774
#define sceKernelIsGenuineCEX_3 0x8b2262
#define sceKernelIsGenuineCEX_4 0xa2a274
#define dipsw_libSceDipsw_1 0x16f042
#define dipsw_libSceDipsw_2 0x24a4eb
#define dipsw_libSceDipsw_3 0x8647a2
#define dipsw_libSceDipsw_4 0xa2a2a2
#endif

// debug menu libkernel_sys.prx
#define sys_debug_menu 0x1D1C0 // Identical to 9.00
#define sys_debug_menu_1 0x1D520 // Identical to 9.00
#endif

// libkernel_sys.srpx
#define _scePthreadAttrInit_offset 0x0014190 // Identical to 9.00
#define _scePthreadAttrSetstacksize_offset 0x00141B0 // Identical to 9.00
#define _scePthreadCreate_offset 0x145D0 // Identical to 9.00
#define _thr_initial_offset 0x8E830 // Identical to 9.00

//kern
#define vm_map_protect_p 0x80b8b
#define ptrace_p 0x41d455
#define ptrace_p2 0x41d941
#define disable_aslr_p 0x5f824
#define sceSblACMgrIsAllowedSystemLevelDebugging_p 0x1d1c0
#define kemem_2 0x37a144
#define kemem_1 0x37a13c
#define vm_map_lock_offset 0x7ba30
#define vm_map_insert_offset 0x7cd80
#define vm_map_unlock_offset 0x7baa0
#define malloc_offset 0x3017b0
#define free_offset 0x301970
#define vm_map_lock_read_offset 0x7bb80
#define vm_map_unlock_read_offset 0x7bbd0
#define vm_map_lookup_entry_offset 0x7c1c0
#define M_TEMP_offset 0x155e1e0
#define proc_rmem_offset 0x41ca70
#define vm_map_findspace_offset 0x7ec40
#define vm_map_delete_offset 0x7e680
#define create_thread_offset 0x1ed620
#define all_proc_offset 0x1b906e0
#define sys_dynlib_dlsym_p 0x23b34f
#define sys_dynlib_dlsym_p2 0x221810

#define PRISON0_addr 0x111b840
#define ROOTVNODE_addr 0x21ebf20

#elif (FIRMWARE == 950 || FIRMWARE == 951 || FIRMWARE == 960) // FW 9.50 / 9.60

/* kernel offsets */

#define kdlsym_addr_Xfast_syscall 0xffffffff822001c0
#define kdlsym_addr_printf 0xffffffff82405470

#define kdlsym_addr_sysent 0xffffffff832f92f0

#define kdlsym_addr_amd_syscall_patch1 0xffffffff82200490
#define kdlsym_addr_amd_syscall_patch2 0xffffffff822004b5
#define kdlsym_addr_amd_syscall_patch3 0xffffffff822004b9
#define kdlsym_addr_amd_syscall_patch4 0xffffffff822004c2

#define kdlsym_addr_copyin_patch1 0xffffffff82401f07
#define kdlsym_addr_copyin_patch2 0xffffffff82401f13

#define kdlsym_addr_copyout_patch1 0xffffffff82401e12
#define kdlsym_addr_copyout_patch2 0xffffffff82401e1e

#define kdlsym_addr_copyinstr_patch1 0xffffffff824023b3
#define kdlsym_addr_copyinstr_patch2 0xffffffff824023bf
#define kdlsym_addr_copyinstr_patch3 0xffffffff824023f0

#if ENABLE_DEBUG_MENU
#if FIRMWARE == 950
#define enable_data_mount_patch 0x0031C2E1
#define enable_fpkg_patch 0x003D3B2F
#define fake_free_patch 0x00FBB8D9
#define pkg_installer_patch 0x009FA351
#define ext_hdd_patch 0x0060F71D
#define debug_trophies_patch 0x00740949

#define sceKernelIsGenuineCEX 0x16c364 
#define sceKernelIsGenuineCEX_1 0x861be4 
#define sceKernelIsGenuineCEX_2 0x8b07e2 
#define sceKernelIsGenuineCEX_3 0xa10e04 
#define dipsw_libSceDipsw 0x16c392 
#define dipsw_libSceDipsw_1 0x248fec
#define dipsw_libSceDipsw_2 0x861c12 
#define dipsw_libSceDipsw_3 0xa10e32

#elif FIRMWARE == 951
#define enable_data_mount_patch 0x0031C311
#define enable_fpkg_patch 0x003D3B5F
#define fake_free_patch 0x00FBB939
#define pkg_installer_patch 0x009FA371
#define ext_hdd_patch 0x0060F74D
#define debug_trophies_patch 0x0073C809

#define sceKernelIsGenuineCEX 0x16c364 
#define sceKernelIsGenuineCEX_1 0x861c14 
#define sceKernelIsGenuineCEX_2 0x8b0812 
#define sceKernelIsGenuineCEX_3 0xa10e24 
#define dipsw_libSceDipsw 0x16c392 
#define dipsw_libSceDipsw_1 0x24901c
#define dipsw_libSceDipsw_2 0x861c42 
#define dipsw_libSceDipsw_3 0xa10e52

#else // 960
#define enable_data_mount_patch 0x0031D651
#define enable_fpkg_patch 0x003D4E9F
#define fake_free_patch 0x00FBD319 
#define pkg_installer_patch 0x009FB811
#define ext_hdd_patch 0x00610AED 
#define debug_trophies_patch 0x0073DDD9 

#define sceKernelIsGenuineCEX 0x0016CD64 
#define sceKernelIsGenuineCEX_1 0x008630A4 
#define sceKernelIsGenuineCEX_2 0x008B1CA2 
#define sceKernelIsGenuineCEX_3 0x00A122C4 
#define dipsw_libSceDipsw 0x0016CD92 
#define dipsw_libSceDipsw_1 0x0024A35C 
#define dipsw_libSceDipsw_2 0x008630D2 
#define dipsw_libSceDipsw_3 0x00A122F2 
#endif

#define sys_debug_menu 0x0001CE50
#define sys_debug_menu_1 0x0001D1B0
#endif

// libkernel_sys.srpx
#define _scePthreadAttrInit_offset 0x00013E20
#define _scePthreadAttrSetstacksize_offset 0x00013E40
#define _scePthreadCreate_offset 0x00014260
#define _thr_initial_offset 0x8E830 // Identical to 9.00

//kern
// kbase + offset (offsets are not in theflow format)
#define vm_map_protect_p 0x00196D3B
#define ptrace_p 0x0047A005
#define ptrace_p2 0x0047A4F1
#define disable_aslr_p 0x0029AE74
#define sceSblACMgrIsAllowedSystemLevelDebugging_p 0x001E2BB0 
#define kemem_2 0x00188AA4
#define kemem_1 0x00188A9C
#define vm_map_lock_offset 0x00191BE0
#define vm_map_insert_offset 0x00192F30
#define vm_map_unlock_offset 0x00191C50 
#define malloc_offset 0x0029D330
#define free_offset 0x0029D4F0
#define vm_map_lock_read_offset 0x00191D30 
#define vm_map_unlock_read_offset 0x00191D80
#define vm_map_lookup_entry_offset 0x00192370
#define M_TEMP_offset 0x01A4ECB0 
#define proc_rmem_offset 0x00479620
#define vm_map_findspace_offset 0x00194DF0
#define vm_map_delete_offset 0x00194830
#define create_thread_offset 0x001EC430
#define all_proc_offset 0x0221D2A0
#define sys_dynlib_dlsym_p 0x0019FEDF
#define sys_dynlib_dlsym_p2 0x00011960

#define PRISON0_addr 0x11137d0
#define ROOTVNODE_addr 0x21a6c30

#elif (FIRMWARE == 1000 || FIRMWARE == 1001) // FW 10.00/10.01

/* kernel offsets */

#define kdlsym_addr_Xfast_syscall 0xffffffff822001c0
#define kdlsym_addr_printf 0xffffffff822c50f0

#define kdlsym_addr_sysent 0xffffffff83302d90

#define kdlsym_addr_amd_syscall_patch1 0xffffffff82200490
#define kdlsym_addr_amd_syscall_patch2 0xffffffff822004b5
#define kdlsym_addr_amd_syscall_patch3 0xffffffff822004b9
#define kdlsym_addr_amd_syscall_patch4 0xffffffff822004c2

#define kdlsym_addr_copyin_patch1 0xffffffff82672f67
#define kdlsym_addr_copyin_patch2 0xffffffff82672f73

#define kdlsym_addr_copyout_patch1 0xffffffff82672e72
#define kdlsym_addr_copyout_patch2 0xffffffff82672e7e

#define kdlsym_addr_copyinstr_patch1 0xffffffff82673413
#define kdlsym_addr_copyinstr_patch2 0xffffffff8267341f
#define kdlsym_addr_copyinstr_patch3 0xffffffff82673450

#if ENABLE_DEBUG_MENU
// ShellCore offsets
#if FIRMWARE == 1000
#define enable_data_mount_patch 0x0031b310
#define enable_fpkg_patch 0x003d26af
#define fake_free_patch 0x00fb08b9
#define pkg_installer_patch 0x009f15e1
#define ext_hdd_patch 0x00604ffd
#define debug_trophies_patch 0x007342e9

#define sceKernelIsGenuineCEX 0x0016b694
#define sceKernelIsGenuineCEX_1 0x008594b4
#define sceKernelIsGenuineCEX_2 0x008a85f2
#define sceKernelIsGenuineCEX_3 0x00a08094
#define dipsw_libSceDipsw 0x0016b6c2
#define dipsw_libSceDipsw_1 0x00247e4c
#define dipsw_libSceDipsw_2 0x008594e2
#define dipsw_libSceDipsw_3 0x00a080c2

// ShellCore offsets
#else // FIRMWARE == 1001
#define enable_data_mount_patch 0x0031b320 // 1
#define enable_fpkg_patch 0x003d26bf // 1
#define fake_free_patch 0x00fb08d9 // 1
#define pkg_installer_patch 0x009f1601 // 1
#define ext_hdd_patch 0x0060500d // 1
#define debug_trophies_patch 0x007342f9

#define sceKernelIsGenuineCEX 0x0016b6a4
#define sceKernelIsGenuineCEX_1 0x008594c4
#define sceKernelIsGenuineCEX_2 0x008a8602
#define sceKernelIsGenuineCEX_3 0x00a080b4
#define dipsw_libSceDipsw 0x0016b6d2
#define dipsw_libSceDipsw_1 0x00247e5c
#define dipsw_libSceDipsw_2 0x008594f2
#define dipsw_libSceDipsw_3 0x00a080e2
#endif

// debug menu libkernel_sys.prx
#define sys_debug_menu   0x1ce50
#define sys_debug_menu_1 0x1d1b0
#endif

// libkernel_sys.srpx
#define _scePthreadAttrInit_offset 0x13e20
#define _scePthreadAttrSetstacksize_offset 0x13e40
#define _scePthreadCreate_offset 0x14260
#define _thr_initial_offset 0x8e830

//kern
#define vm_map_protect_p 0x39207B
#define ptrace_p 0x44E625
#define ptrace_p2 0x44EB11
#define disable_aslr_p 0x3BF3A4
#define sceSblACMgrIsAllowedSystemLevelDebugging_p 0x4497F0
#define kemem_2 0x33B114
#define kemem_1 0x33B10C

#define vm_map_lock_offset 0x38CF20
#define vm_map_insert_offset 0x38E270
#define vm_map_unlock_offset 0x38CF90
#define malloc_offset 0x109A60
#define free_offset 0x109C20
#define vm_map_lock_read_offset 0x38D070
#define vm_map_unlock_read_offset 0x38D0C0
#define vm_map_lookup_entry_offset 0x38D6B0
#define M_TEMP_offset 0x1532C00
#define proc_rmem_offset  0x44DC40
#define vm_map_findspace_offset 0x390130
#define vm_map_delete_offset 0x38FB70
#define create_thread_offset 0x182F0
#define all_proc_offset 0x22D9B40 // Address not in memory ?
#define sys_dynlib_dlsym_p 0x19025f
#define sys_dynlib_dlsym_p2 0x1bea40

#define PRISON0_addr 0x111b8b0
#define ROOTVNODE_addr 0x1b25bd0

#elif (FIRMWARE == 1050 || FIRMWARE == 1070 || FIRMWARE == 1071) // FW 10.50 / 10.70 / 10.71

#define kdlsym_addr_Xfast_syscall 0xffffffff822001c0
#define kdlsym_addr_printf 0xffffffff82650e80

#define kdlsym_addr_sysent 0xffffffff833029c0

#define kdlsym_addr_amd_syscall_patch1 0xffffffff82200490
#define kdlsym_addr_amd_syscall_patch2 0xffffffff822004b5
#define kdlsym_addr_amd_syscall_patch3 0xffffffff822004b9
#define kdlsym_addr_amd_syscall_patch4 0xffffffff822004c2

#define kdlsym_addr_copyin_patch1 0xffffffff822d75b7
#define kdlsym_addr_copyin_patch2 0xffffffff822d75c3

#define kdlsym_addr_copyout_patch1 0xffffffff822d74c2
#define kdlsym_addr_copyout_patch2 0xffffffff822d74ce

#define kdlsym_addr_copyinstr_patch1 0xffffffff822d7a63
#define kdlsym_addr_copyinstr_patch2 0xffffffff822d7a6f
#define kdlsym_addr_copyinstr_patch3 0xffffffff822d7aa0

#if ENABLE_DEBUG_MENU
#if FIRMWARE == 1050
// ShellCore offsets
#define enable_data_mount_patch 0x31e890
#define enable_fpkg_patch 0x3d544f
#define fake_free_patch 0xfb5d59
#define pkg_installer_patch 0x9f5fd1
#define ext_hdd_patch 0x606b7d
#define debug_trophies_patch 0x7365f9

#define sceKernelIsGenuineCEX 0x16b664
#define sceKernelIsGenuineCEX_1 0x85bab4
#define sceKernelIsGenuineCEX_2 0x8abce2
#define sceKernelIsGenuineCEX_3 0xa0ca84
#define dipsw_libSceDipsw 0x16b692
#define dipsw_libSceDipsw_1 0x249b0c
#define dipsw_libSceDipsw_2 0x85bae2
#define dipsw_libSceDipsw_3 0xa0cab2


#else // FIRMWARE 1070 1071
// ShellCore offsets
#define enable_data_mount_patch 0x31e890
#define enable_fpkg_patch 0x3d544f
#define fake_free_patch 0xfb5d99
#define pkg_installer_patch 0x9f5fd1
#define ext_hdd_patch 0x606b7d
#define debug_trophies_patch 0x7365f9

#define sceKernelIsGenuineCEX 0x16b664
#define sceKernelIsGenuineCEX_1 0x85bab4
#define sceKernelIsGenuineCEX_2 0x8abce2
#define sceKernelIsGenuineCEX_3 0xa0ca84
#define dipsw_libSceDipsw 0x16b692
#define dipsw_libSceDipsw_1 0x249b0c
#define dipsw_libSceDipsw_2 0x85bae2
#define dipsw_libSceDipsw_3 0xa0cab2
#endif

// debug menu libkernel_sys.prx
#define sys_debug_menu 0x1cfc0
#define sys_debug_menu_1 0x1d320
#endif

// libkernel_sys.srpx
#define _scePthreadAttrInit_offset 0x13f70
#define _scePthreadAttrSetstacksize_offset 0x13f90
#define _scePthreadCreate_offset 0x143b0
#define _thr_initial_offset 0x8e830

//kern
#define vm_map_protect_p 0x47b2ec
#define ptrace_p 0x424e85
#define ptrace_p2 0x425371
#define disable_aslr_p 0x345e04
#define sceSblACMgrIsAllowedSystemLevelDebugging_p 0x1b00c0
#define kemem_2 0x428a34
#define kemem_1 0x428a2c
#define vm_map_lock_offset 0x476180
#define vm_map_insert_offset 0x4774d0
#define vm_map_unlock_offset 0x4761f0
#define malloc_offset 0x36e120
#define free_offset 0x36e2e0
#define vm_map_lock_read_offset 0x4762d0
#define vm_map_unlock_read_offset 0x476320
#define vm_map_lookup_entry_offset 0x476910
#define M_TEMP_offset 0x1a5fe30
#define proc_rmem_offset 0x4244a0
#define vm_map_findspace_offset 0x479390
#define vm_map_delete_offset 0x478dd0
#define create_thread_offset 0x3384e0
#define all_proc_offset 0x2269f30
#define sys_dynlib_dlsym_p 0x00213088
#define sys_dynlib_dlsym_p2 0x002DAB60

#define PRISON0_addr 0x111b910
#define ROOTVNODE_addr 0x1bf81f0

#if MODULE_DUMPER
#define sceSblACMgrHasMmapSelfCapability 0x1f44e0
#define sceSblACMgrIsAllowedToMmapSelf 0x1f4500
#define sceSblAuthMgrIsLoadable 0x19e151
#define depth_patch 0xdaa46
#endif

#elif FIRMWARE == 1100 // FW 11.00

#define kdlsym_addr_Xfast_syscall 0xffffffff822001c0
#define kdlsym_addr_printf 0xffffffff824fcbd0

#define kdlsym_addr_sysent 0xffffffff83301760

#define kdlsym_addr_amd_syscall_patch1 0xffffffff82200490
#define kdlsym_addr_amd_syscall_patch2 0xffffffff822004b5
#define kdlsym_addr_amd_syscall_patch3 0xffffffff822004b9
#define kdlsym_addr_amd_syscall_patch4 0xffffffff822004c2

#define kdlsym_addr_copyin_patch1 0xffffffff824de037
#define kdlsym_addr_copyin_patch2 0xffffffff824de043

#define kdlsym_addr_copyout_patch1 0xffffffff824ddf42
#define kdlsym_addr_copyout_patch2 0xffffffff824ddf4e

#define kdlsym_addr_copyinstr_patch1 0xffffffff824de4e3
#define kdlsym_addr_copyinstr_patch2 0xffffffff824de4ef
#define kdlsym_addr_copyinstr_patch3 0xffffffff824de520

/*=================== POrt these =======================*/

#if ENABLE_DEBUG_MENU
// ShellCore offsets
#define enable_data_mount_patch 0x31F070// 1
#define enable_fpkg_patch 0x3D7C9F // 1
#define fake_free_patch 0x0FC8439 // 1
#define pkg_installer_patch 0xA06C11 // 1
#define ext_hdd_patch 0x60E17D // 1
#define debug_trophies_patch 0x007416b6

#define sceKernelIsGenuineCEX 0x16B664 //
#define sceKernelIsGenuineCEX_1 0x086BD24 //
#define sceKernelIsGenuineCEX_2 0x08BC022 //
#define sceKernelIsGenuineCEX_3 0x0A1D6C4//
#define dipsw_libSceDipsw 0x016B692 //
#define dipsw_libSceDipsw_1 0x249E0C //
#define dipsw_libSceDipsw_2 0x086BD52 //
#define dipsw_libSceDipsw_3 0xA1D6F2 //

// debug menu libkernel_sys.prx
#define sys_debug_menu   0x1D100
#define sys_debug_menu_1 0x1D460
#endif

// libkernel_sys.srpx
#define _scePthreadAttrInit_offset 0x14010
#define _scePthreadAttrSetstacksize_offset 0x14030
#define _scePthreadCreate_offset 0x14450
#define _thr_initial_offset 0x8E830

//kern
#define vm_map_protect_p 0x35C8EC
#define ptrace_p 0x00384285
#define ptrace_p2 0x00384771
#define disable_aslr_p 0x003B11A4
#define sceSblACMgrIsAllowedSystemLevelDebugging_p 0x003D0DE0
#define kemem_2 0x00245EE4
#define kemem_1 0x00245EDC
#define vm_map_lock_offset  0x00357760
#define vm_map_insert_offset 0x00358AB0
#define vm_map_unlock_offset  0x003577D0
#define malloc_offset 0x001A4220
#define free_offset 0x001A43E0
#define vm_map_lock_read_offset 0x003578B0
#define vm_map_unlock_read_offset 0x00357900
#define vm_map_lookup_entry_offset 0x00357EF0
#define M_TEMP_offset 0x015415B0
#define proc_rmem_offset  0x003838A0
#define vm_map_findspace_offset 0x0035A970
#define vm_map_delete_offset 0x0035A3B0
#define create_thread_offset 0x00295170
#define all_proc_offset 0x022D0A98
#define sys_dynlib_dlsym_p 0x001E4CA8
#define sys_dynlib_dlsym_p2 0x00088CE0

#define PRISON0_addr 0x111f830
#define ROOTVNODE_addr 0x2116640

#if MODULE_DUMPER
#define sceSblACMgrHasMmapSelfCapability 0x003D0E50
#define sceSblACMgrIsAllowedToMmapSelf 0x003D0E70
#define sceSblAuthMgrIsLoadable 0x00157F91
#define depth_patch 0x0028FF26
#endif

#else

#error "Invalid firmware"

#endif

#define kdlsym(sym) (kaslr_offset + kdlsym_addr_##sym)

#endif
