#include <stdint.h>

int Batch = 1;

int gemmx_M = 8;

int gemmx_K = 8;

int gemmx_N = 64;

int32_t Aslstride0 = 1;

int32_t Aslstride1 = 8.0;

int32_t Atlbound0 = 8;

int32_t Atlstride0 = 64.0;

int32_t Atlbound1 = 64;

int32_t Atlstride1 = 0;

int32_t Atlbound2 = 8;

int32_t Atlstride2 = 512.0;

int32_t Atlbound3 = 1;

int32_t Atlstride3 = 0;

int32_t Atlbound4 = 1;

int32_t Atlstride4 = 0;

int32_t Atlbound5 = 1;

int32_t Atlstride5 = 0;

int32_t Bslstride0 = 1;

int32_t Bslstride1 = 8.0;

int32_t Btlbound0 = 8;

int32_t Btlstride0 = 64.0;

int32_t Btlbound1 = 64;

int32_t Btlstride1 = 512.0;

int32_t Btlbound2 = 8;

int32_t Btlstride2 = 0;

int32_t Cslstride0 = 8.0;

int32_t Cslstride1 = 64.0;

int32_t Ctlbound0 = 64;

int32_t Ctlstride0 = 256.0;

int32_t Ctlbound1 = 8;

int32_t Ctlstride1 = 16384.0;

int32_t Ctlbound2 = 1;

int32_t Ctlstride2 = 0;

int32_t D32slstride0 = 8.0;

int32_t D32slstride1 = 64.0;

int32_t D32tlbound0 = 64;

int32_t D32tlstride0 = 256.0;

int32_t D32tlbound1 = 8;

int32_t D32tlstride1 = 16384.0;

int32_t D32tlbound2 = 1;

int32_t D32tlstride2 = 0;

int32_t D8slstride0 = 1;

int32_t D8slstride1 = 8.0;

int32_t D8tlbound0 = 64;

int32_t D8tlstride0 = 64.0;

int32_t D8tlbound1 = 8;

int32_t D8tlstride1 = 4096.0;

int32_t D8tlbound2 = 1;

int32_t D8tlstride2 = 0;

int32_t delta_local_a = 0;

int32_t delta_local_b = 4096.0;

int32_t delta_local_c = 36864.0;

int32_t delta_local_d32 = 167936.0;

int32_t delta_local_d8 = 167936.0;

int8_t subtraction_a = 0;

int8_t subtraction_b = 0;

int32_t set_addr_remap_index_A = 0;

int32_t set_addr_remap_index_B = 0;

int32_t set_addr_remap_index_C = 0;

int32_t set_addr_remap_index_D32 = 0;

int32_t set_addr_remap_index_D8 = 0;

int32_t transposed_A = 0;

int32_t transposed_B = 0;

int32_t channel_en_C = 255;

int32_t broadcast_C = 0;

// Bypass SIMD is used to disable the SIMD unit

int32_t bypassSIMD = 1;

int8_t input_zp_i = -55;

int8_t output_zp_i = 104;

int8_t max_int_i = 127;

int8_t min_int_i = -128;

int8_t double_round_i = 0;

int32_t shared_bitpacked_shift0 = 959323414;

int32_t shared_bitpacked_shift1 = 154612510;

int32_t shared_multiplier0 = -880883822;

int32_t shared_multiplier1 = 474212498;

int32_t shared_multiplier2 = 1741648235;

int32_t shared_multiplier3 = 321928790;

int32_t shared_multiplier4 = -251666180;

int32_t shared_multiplier5 = 775773882;

int32_t shared_multiplier6 = -890561621;

int32_t shared_multiplier7 = -688718104;
