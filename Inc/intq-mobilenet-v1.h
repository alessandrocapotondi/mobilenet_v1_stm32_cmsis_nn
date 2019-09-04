/*
 * intq-mobile_net.h
 *
 *  Created on: Feb 7, 2019
 *      Author: Alessandro Capotondi
 */

#ifndef __INQ_MOBILE_NET_V1_MODELS_H__
#define __INQ_MOBILE_NET_V1_MODELS_H__

#if CONF==1
#include "intq-mobilenet-v1-models/224_1_0_parameters.h"
#include "intq-mobilenet-v1-models/224_1_0_weights_bias.h"
#endif

#if CONF==2
#include "intq-mobilenet-v1-models/224_0_75_parameters.h"
#include "intq-mobilenet-v1-models/224_0_75_weights_bias.h"
#endif

#if CONF==3
#include "intq-mobilenet-v1-models/224_0_5_parameters.h"
#include "intq-mobilenet-v1-models/224_0_5_weights_bias.h"
#endif

#if CONF==4
#include "intq-mobilenet-v1-models/224_0_25_parameters.h"
#include "intq-mobilenet-v1-models/224_0_25_weights_bias.h"
#endif

#if CONF==5
#include "intq-mobilenet-v1-models/192_0_5_parameters.h"
#include "intq-mobilenet-v1-models/192_0_5_weights_bias.h"
#endif

#if CONF==6
#include "intq-mobilenet-v1-models/192_0_25_parameters.h"
#include "intq-mobilenet-v1-models/192_0_25_weights_bias.h"
#endif

#if CONF==7
#include "intq-mobilenet-v1-models/160_0_5_parameters.h"
#include "intq-mobilenet-v1-models/160_0_5_weights_bias.h"
#endif

#if CONF==8
#include "intq-mobilenet-v1-models/160_0_25_parameters.h"
#include "intq-mobilenet-v1-models/160_0_25_weights_bias.h"
#endif

#if CONF==9
#include "intq-mobilenet-v1-models/128_0_5_parameters.h"
#include "intq-mobilenet-v1-models/128_0_5_weights_bias.h"
#endif

#if CONF==10
#include "intq-mobilenet-v1-models/128_0_25_parameters.h"
#include "intq-mobilenet-v1-models/128_0_25_weights_bias.h"
#endif

#if CONF==17
#include "intq-mobilenet-v1-models/224_1_0_parameters.h"
#include "intq-mobilenet-v1-models/224_1_0_weights_bias.h"
#define LAYER1() arm_convolve_HWC_u8_u4_u8_icn(image_data, CONV1_IM_DIM, CONV1_IM_CH, conv1_wt, CONV1_OUT_CH, CONV1_KER_DIM, CONV1_L_PADDING, CONV1_R_PADDING, CONV1_T_PADDING, CONV1_B_PADDING, CONV1_STRIDE, conv1_bias, tensorOut, CONV1_OUT_DIM, CONV1_IN_Z, CONV1_W_Z, CONV1_OUT_Z, CONV1_M_ZERO, CONV1_N_ZERO, l1_tensor_scratch, NULL);

#define LAYER2() arm_depthwise_separable_conv_HWC_u4_u4_u8_icn(tensorIn, CONV2_IM_DIM, CONV2_IM_CH, conv2_wt, CONV2_OUT_CH, CONV2_KER_DIM, CONV2_L_PADDING, CONV2_R_PADDING, CONV2_T_PADDING, CONV2_B_PADDING, CONV2_STRIDE, conv2_bias, tensorOut, CONV2_OUT_DIM, CONV2_IN_Z, CONV2_W_Z, CONV2_OUT_Z, CONV2_M_ZERO, CONV2_N_ZERO, l1_tensor_scratch, NULL);

#define LAYER3() arm_convolve_HWC_u4_u2_u8_icn(tensorIn, CONV3_IM_DIM, CONV3_IM_CH, conv3_wt, CONV3_OUT_CH, CONV3_KER_DIM, CONV3_L_PADDING, CONV3_R_PADDING, CONV3_T_PADDING, CONV3_B_PADDING, CONV3_STRIDE, conv3_bias, tensorOut, CONV3_OUT_DIM, CONV3_IN_Z, CONV3_W_Z, CONV3_OUT_Z, CONV3_M_ZERO, CONV3_N_ZERO, l1_tensor_scratch, NULL);

#define LAYER4() arm_depthwise_separable_conv_HWC_u2_u8_u8(tensorIn, CONV4_IM_DIM, CONV4_IM_CH, conv4_wt, CONV4_OUT_CH, CONV4_KER_DIM, CONV4_L_PADDING, CONV4_R_PADDING, CONV4_T_PADDING, CONV4_B_PADDING, CONV4_STRIDE, conv4_bias, tensorOut, CONV4_OUT_DIM, CONV4_IN_Z, CONV4_W_Z, CONV4_OUT_Z, CONV4_M_ZERO, CONV4_N_ZERO, l1_tensor_scratch, NULL);

#define LAYER5() arm_convolve_HWC_u8_u4_u8_icn(tensorIn, CONV5_IM_DIM, CONV5_IM_CH, conv5_wt, CONV5_OUT_CH, CONV5_KER_DIM, CONV5_L_PADDING, CONV5_R_PADDING, CONV5_T_PADDING, CONV5_B_PADDING, CONV5_STRIDE, conv5_bias, tensorOut, CONV5_OUT_DIM, CONV5_IN_Z, CONV5_W_Z, CONV5_OUT_Z, CONV5_M_ZERO, CONV5_N_ZERO, l1_tensor_scratch, NULL);

#define LAYER6() arm_depthwise_separable_conv_HWC_u4_u4_u8_icn(tensorIn, CONV6_IM_DIM, CONV6_IM_CH, conv6_wt, CONV6_OUT_CH, CONV6_KER_DIM, CONV6_L_PADDING, CONV6_R_PADDING, CONV6_T_PADDING, CONV6_B_PADDING, CONV6_STRIDE, conv6_bias, tensorOut, CONV6_OUT_DIM, CONV6_IN_Z, CONV6_W_Z, CONV6_OUT_Z, CONV6_M_ZERO, CONV6_N_ZERO, l1_tensor_scratch, NULL);

#define LAYER7() arm_convolve_HWC_u4_u4_u8_icn(tensorIn, CONV7_IM_DIM, CONV7_IM_CH, conv7_wt, CONV7_OUT_CH, CONV7_KER_DIM, CONV7_L_PADDING, CONV7_R_PADDING, CONV7_T_PADDING, CONV7_B_PADDING, CONV7_STRIDE, conv7_bias, tensorOut, CONV7_OUT_DIM, CONV7_IN_Z, CONV7_W_Z, CONV7_OUT_Z, CONV7_M_ZERO, CONV7_N_ZERO, l1_tensor_scratch, NULL);

#define LAYER8() arm_depthwise_separable_conv_HWC_u4_u8_u8(tensorIn, CONV8_IM_DIM, CONV8_IM_CH, conv8_wt, CONV8_OUT_CH, CONV8_KER_DIM, CONV8_L_PADDING, CONV8_R_PADDING, CONV8_T_PADDING, CONV8_B_PADDING, CONV8_STRIDE, conv8_bias, tensorOut, CONV8_OUT_DIM, CONV8_IN_Z, CONV8_W_Z, CONV8_OUT_Z, CONV8_M_ZERO, CONV8_N_ZERO, l1_tensor_scratch, NULL);

#define LAYER9() arm_convolve_HWC_u8_u8_u8(tensorIn, CONV9_IM_DIM, CONV9_IM_CH, conv9_wt, CONV9_OUT_CH, CONV9_KER_DIM, CONV9_L_PADDING, CONV9_R_PADDING, CONV9_T_PADDING, CONV9_B_PADDING, CONV9_STRIDE, conv9_bias, tensorOut, CONV9_OUT_DIM, CONV9_IN_Z, CONV9_W_Z, CONV9_OUT_Z, CONV9_M_ZERO, CONV9_N_ZERO, l1_tensor_scratch, NULL);
#define LAYER10() arm_depthwise_separable_conv_HWC_u8_u8_u8(tensorIn, CONV10_IM_DIM, CONV10_IM_CH, conv10_wt, CONV10_OUT_CH, CONV10_KER_DIM, CONV10_L_PADDING, CONV10_R_PADDING, CONV10_T_PADDING, CONV10_B_PADDING, CONV10_STRIDE, conv10_bias, tensorOut, CONV10_OUT_DIM, CONV10_IN_Z, CONV10_W_Z, CONV10_OUT_Z, CONV10_M_ZERO, CONV10_N_ZERO, l1_tensor_scratch, NULL);
#define LAYER11() arm_convolve_HWC_u8_u8_u8(tensorIn, CONV11_IM_DIM, CONV11_IM_CH, conv11_wt, CONV11_OUT_CH, CONV11_KER_DIM, CONV11_L_PADDING, CONV11_R_PADDING, CONV11_T_PADDING, CONV11_B_PADDING, CONV11_STRIDE, conv11_bias, tensorOut, CONV11_OUT_DIM, CONV11_IN_Z, CONV11_W_Z, CONV11_OUT_Z, CONV11_M_ZERO, CONV11_N_ZERO, l1_tensor_scratch, NULL);
#define LAYER12() arm_depthwise_separable_conv_HWC_u8_u8_u8(tensorIn, CONV12_IM_DIM, CONV12_IM_CH, conv12_wt, CONV12_OUT_CH, CONV12_KER_DIM, CONV12_L_PADDING, CONV12_R_PADDING, CONV12_T_PADDING, CONV12_B_PADDING, CONV12_STRIDE, conv12_bias, tensorOut, CONV12_OUT_DIM, CONV12_IN_Z, CONV12_W_Z, CONV12_OUT_Z, CONV12_M_ZERO, CONV12_N_ZERO, l1_tensor_scratch, NULL);
#define LAYER13() arm_convolve_HWC_u8_u8_u8(tensorIn, CONV13_IM_DIM, CONV13_IM_CH, conv13_wt, CONV13_OUT_CH, CONV13_KER_DIM, CONV13_L_PADDING, CONV13_R_PADDING, CONV13_T_PADDING, CONV13_B_PADDING, CONV13_STRIDE, conv13_bias, tensorOut, CONV13_OUT_DIM, CONV13_IN_Z, CONV13_W_Z, CONV13_OUT_Z, CONV13_M_ZERO, CONV13_N_ZERO, l1_tensor_scratch, NULL);
#define LAYER14() arm_depthwise_separable_conv_HWC_u8_u8_u8(tensorIn, CONV14_IM_DIM, CONV14_IM_CH, conv14_wt, CONV14_OUT_CH, CONV14_KER_DIM, CONV14_L_PADDING, CONV14_R_PADDING, CONV14_T_PADDING, CONV14_B_PADDING, CONV14_STRIDE, conv14_bias, tensorOut, CONV14_OUT_DIM, CONV14_IN_Z, CONV14_W_Z, CONV14_OUT_Z, CONV14_M_ZERO, CONV14_N_ZERO, l1_tensor_scratch, NULL);
#define LAYER15() arm_convolve_HWC_u8_u8_u4_icn(tensorIn, CONV15_IM_DIM, CONV15_IM_CH, conv15_wt, CONV15_OUT_CH, CONV15_KER_DIM, CONV15_L_PADDING, CONV15_R_PADDING, CONV15_T_PADDING, CONV15_B_PADDING, CONV15_STRIDE, conv15_bias, tensorOut, CONV15_OUT_DIM, CONV15_IN_Z, CONV15_W_Z, CONV15_OUT_Z, CONV15_M_ZERO, CONV15_N_ZERO, l1_tensor_scratch, NULL);
#define LAYER16() arm_depthwise_separable_conv_HWC_u8_u8_u8(tensorIn, CONV16_IM_DIM, CONV16_IM_CH, conv16_wt, CONV16_OUT_CH, CONV16_KER_DIM, CONV16_L_PADDING, CONV16_R_PADDING, CONV16_T_PADDING, CONV16_B_PADDING, CONV16_STRIDE, conv16_bias, tensorOut, CONV16_OUT_DIM, CONV16_IN_Z, CONV16_W_Z, CONV16_OUT_Z, CONV16_M_ZERO, CONV16_N_ZERO, l1_tensor_scratch, NULL);
#define LAYER17() arm_convolve_HWC_u8_u8_u4_icn(tensorIn, CONV17_IM_DIM, CONV17_IM_CH, conv17_wt, CONV17_OUT_CH, CONV17_KER_DIM, CONV17_L_PADDING, CONV17_R_PADDING, CONV17_T_PADDING, CONV17_B_PADDING, CONV17_STRIDE, conv17_bias, tensorOut, CONV17_OUT_DIM, CONV17_IN_Z, CONV17_W_Z, CONV17_OUT_Z, CONV17_M_ZERO, CONV17_N_ZERO, l1_tensor_scratch, NULL);
#define LAYER18() arm_depthwise_separable_conv_HWC_u8_u8_u8(tensorIn, CONV18_IM_DIM, CONV18_IM_CH, conv18_wt, CONV18_OUT_CH, CONV18_KER_DIM, CONV18_L_PADDING, CONV18_R_PADDING, CONV18_T_PADDING, CONV18_B_PADDING, CONV18_STRIDE, conv18_bias, tensorOut, CONV18_OUT_DIM, CONV18_IN_Z, CONV18_W_Z, CONV18_OUT_Z, CONV18_M_ZERO, CONV18_N_ZERO, l1_tensor_scratch, NULL);
#define LAYER19() arm_convolve_HWC_u8_u8_u4_icn(tensorIn, CONV19_IM_DIM, CONV19_IM_CH, conv19_wt, CONV19_OUT_CH, CONV19_KER_DIM, CONV19_L_PADDING, CONV19_R_PADDING, CONV19_T_PADDING, CONV19_B_PADDING, CONV19_STRIDE, conv19_bias, tensorOut, CONV19_OUT_DIM, CONV19_IN_Z, CONV19_W_Z, CONV19_OUT_Z, CONV19_M_ZERO, CONV19_N_ZERO, l1_tensor_scratch, NULL);
#define LAYER20() arm_depthwise_separable_conv_HWC_u8_u8_u8(tensorIn, CONV20_IM_DIM, CONV20_IM_CH, conv20_wt, CONV20_OUT_CH, CONV20_KER_DIM, CONV20_L_PADDING, CONV20_R_PADDING, CONV20_T_PADDING, CONV20_B_PADDING, CONV20_STRIDE, conv20_bias, tensorOut, CONV20_OUT_DIM, CONV20_IN_Z, CONV20_W_Z, CONV20_OUT_Z, CONV20_M_ZERO, CONV20_N_ZERO, l1_tensor_scratch, NULL);
#define LAYER21() arm_convolve_HWC_u8_u8_u4_icn(tensorIn, CONV21_IM_DIM, CONV21_IM_CH, conv21_wt, CONV21_OUT_CH, CONV21_KER_DIM, CONV21_L_PADDING, CONV21_R_PADDING, CONV21_T_PADDING, CONV21_B_PADDING, CONV21_STRIDE, conv21_bias, tensorOut, CONV21_OUT_DIM, CONV21_IN_Z, CONV21_W_Z, CONV21_OUT_Z, CONV21_M_ZERO, CONV21_N_ZERO, l1_tensor_scratch, NULL);
#define LAYER22() arm_depthwise_separable_conv_HWC_u8_u8_u8(tensorIn, CONV22_IM_DIM, CONV22_IM_CH, conv22_wt, CONV22_OUT_CH, CONV22_KER_DIM, CONV22_L_PADDING, CONV22_R_PADDING, CONV22_T_PADDING, CONV22_B_PADDING, CONV22_STRIDE, conv22_bias, tensorOut, CONV22_OUT_DIM, CONV22_IN_Z, CONV22_W_Z, CONV22_OUT_Z, CONV22_M_ZERO, CONV22_N_ZERO, l1_tensor_scratch, NULL);
#define LAYER23() arm_convolve_HWC_u8_u8_u8(tensorIn, CONV23_IM_DIM, CONV23_IM_CH, conv23_wt, CONV23_OUT_CH, CONV23_KER_DIM, CONV23_L_PADDING, CONV23_R_PADDING, CONV23_T_PADDING, CONV23_B_PADDING, CONV23_STRIDE, conv23_bias, tensorOut, CONV23_OUT_DIM, CONV23_IN_Z, CONV23_W_Z, CONV23_OUT_Z, CONV23_M_ZERO, CONV23_N_ZERO, l1_tensor_scratch, NULL);
#define LAYER24() arm_depthwise_separable_conv_HWC_u8_u8_u8(tensorIn, CONV24_IM_DIM, CONV24_IM_CH, conv24_wt, CONV24_OUT_CH, CONV24_KER_DIM, CONV24_L_PADDING, CONV24_R_PADDING, CONV24_T_PADDING, CONV24_B_PADDING, CONV24_STRIDE, conv24_bias, tensorOut, CONV24_OUT_DIM, CONV24_IN_Z, CONV24_W_Z, CONV24_OUT_Z, CONV24_M_ZERO, CONV24_N_ZERO, l1_tensor_scratch, NULL);
#define LAYER25() arm_convolve_HWC_u8_u8_u4_icn(tensorIn, CONV25_IM_DIM, CONV25_IM_CH, conv25_wt, CONV25_OUT_CH, CONV25_KER_DIM, CONV25_L_PADDING, CONV25_R_PADDING, CONV25_T_PADDING, CONV25_B_PADDING, CONV25_STRIDE, conv25_bias, tensorOut, CONV25_OUT_DIM, CONV25_IN_Z, CONV25_W_Z, CONV25_OUT_Z, CONV25_M_ZERO, CONV25_N_ZERO, l1_tensor_scratch, NULL);
#define LAYER26() arm_depthwise_separable_conv_HWC_u8_u8_u8(tensorIn, CONV26_IM_DIM, CONV26_IM_CH, conv26_wt, CONV26_OUT_CH, CONV26_KER_DIM, CONV26_L_PADDING, CONV26_R_PADDING, CONV26_T_PADDING, CONV26_B_PADDING, CONV26_STRIDE, conv26_bias, tensorOut, CONV26_OUT_DIM, CONV26_IN_Z, CONV26_W_Z, CONV26_OUT_Z, CONV26_M_ZERO, CONV26_N_ZERO, l1_tensor_scratch, NULL);
#define LAYER27() arm_convolve_HWC_u8_u8_u2_icn(tensorIn, CONV27_IM_DIM, CONV27_IM_CH, conv27_wt, CONV27_OUT_CH, CONV27_KER_DIM, CONV27_L_PADDING, CONV27_R_PADDING, CONV27_T_PADDING, CONV27_B_PADDING, CONV27_STRIDE, conv27_bias, tensorOut, CONV27_OUT_DIM, CONV27_IN_Z, CONV27_W_Z, CONV27_OUT_Z, CONV27_M_ZERO, CONV27_N_ZERO, l1_tensor_scratch, NULL);
#define LAYER1_WT_SHIFT (0)
#define LAYER2_WT_SHIFT (0)
#define LAYER3_WT_SHIFT (0)
#define LAYER4_WT_SHIFT (0)
#define LAYER5_WT_SHIFT (0)
#define LAYER6_WT_SHIFT (0)
#define LAYER7_WT_SHIFT (0)
#define LAYER8_WT_SHIFT (0)
#define LAYER9_WT_SHIFT (0)
#define LAYER10_WT_SHIFT (0)
#define LAYER11_WT_SHIFT (0)
#define LAYER12_WT_SHIFT (0)
#define LAYER13_WT_SHIFT (0)
#define LAYER14_WT_SHIFT (0)
#define LAYER15_WT_SHIFT (1)
#define LAYER16_WT_SHIFT (0)
#define LAYER17_WT_SHIFT (1)
#define LAYER18_WT_SHIFT (0)
#define LAYER19_WT_SHIFT (1)
#define LAYER20_WT_SHIFT (0)
#define LAYER21_WT_SHIFT (1)
#define LAYER22_WT_SHIFT (0)
#define LAYER23_WT_SHIFT (0)
#define LAYER24_WT_SHIFT (0)
#define LAYER25_WT_SHIFT (1)
#define LAYER26_WT_SHIFT (0)
#define LAYER27_WT_SHIFT (2)

#define LAYER1_OUT_SHIFT (1)
#define LAYER2_OUT_SHIFT (1)
#define LAYER3_OUT_SHIFT (2)
#define LAYER4_OUT_SHIFT (0)
#define LAYER5_OUT_SHIFT (1)
#define LAYER6_OUT_SHIFT (1)
#define LAYER7_OUT_SHIFT (1)
#define LAYER8_OUT_SHIFT (0)
#define LAYER9_OUT_SHIFT (0)
#define LAYER10_OUT_SHIFT (0)
#define LAYER11_OUT_SHIFT (0)
#define LAYER12_OUT_SHIFT (0)
#define LAYER13_OUT_SHIFT (0)
#define LAYER14_OUT_SHIFT (0)
#define LAYER15_OUT_SHIFT (0)
#define LAYER16_OUT_SHIFT (0)
#define LAYER17_OUT_SHIFT (0)
#define LAYER18_OUT_SHIFT (0)
#define LAYER19_OUT_SHIFT (0)
#define LAYER20_OUT_SHIFT (0)
#define LAYER21_OUT_SHIFT (0)
#define LAYER22_OUT_SHIFT (0)
#define LAYER23_OUT_SHIFT (0)
#define LAYER24_OUT_SHIFT (0)
#define LAYER25_OUT_SHIFT (0)
#define LAYER26_OUT_SHIFT (0)
#define LAYER27_OUT_SHIFT (0)
#define LAYER28_OUT_SHIFT (0)
#endif
#endif /* MOBILE_NET_V1_MODELS_INTQ_MOBILE_NET_H_ */

