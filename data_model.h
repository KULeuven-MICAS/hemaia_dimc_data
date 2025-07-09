#include "kernel_stimulus.h"
#include "conv_golden_result.h"
#include "Q1K1T_G.h"

uint64_t Q1K1T_LENGTH = 512;

uint64_t Q_LENGTH = 4096;

#include "model_data/head_0_gold.h"

#include "model_data/quant_input_activation.h"

#include "model_data/quant_k_weight_int_h0.h"
#include "model_data/quant_k_weight_int_h1.h"
#include "model_data/quant_k_weight_int_h2.h"
#include "model_data/quant_k_weight_int_h3.h"
#include "model_data/quant_k_weight_int_h4.h"
#include "model_data/quant_k_weight_int_h5.h"
#include "model_data/quant_k_weight_int_h6.h"
#include "model_data/quant_k_weight_int_h7.h"

#include "model_data/quant_q_weight_int_h0.h"
#include "model_data/quant_q_weight_int_h1.h"
#include "model_data/quant_q_weight_int_h2.h"
#include "model_data/quant_q_weight_int_h3.h"
#include "model_data/quant_q_weight_int_h4.h"
#include "model_data/quant_q_weight_int_h5.h"
#include "model_data/quant_q_weight_int_h6.h"
#include "model_data/quant_q_weight_int_h7.h"

#include "model_data/quant_v_weight_int_h0.h"
#include "model_data/quant_v_weight_int_h1.h"
#include "model_data/quant_v_weight_int_h2.h"
#include "model_data/quant_v_weight_int_h3.h"
#include "model_data/quant_v_weight_int_h4.h"
#include "model_data/quant_v_weight_int_h5.h"
#include "model_data/quant_v_weight_int_h6.h"
#include "model_data/quant_v_weight_int_h7.h"

// DMA test

uint64_t DATA_LEN = 8;
uint64_t A[8] = {1, 2, 3, 4, 5, 6, 7, 8};
uint64_t B[8] = {8, 7, 6, 5, 4, 3, 2, 1};