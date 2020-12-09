/*
 * INTEL CONFIDENTIAL
 *
 * Copyright (C) 2019 - 2020 Intel Corporation.
 * All Rights Reserved.
 *
 * The source code contained or described herein and all documents
 * related to the source code ("Material") are owned by Intel Corporation
 * or licensors. Title to the Material remains with Intel
 * Corporation or its licensors. The Material contains trade
 * secrets and proprietary and confidential information of Intel or its
 * licensors. The Material is protected by worldwide copyright
 * and trade secret laws and treaty provisions. No part of the Material may
 * be used, copied, reproduced, modified, published, uploaded, posted,
 * transmitted, distributed, or disclosed in any way without Intel's prior
 * express written permission.
 *
 * No License under any patent, copyright, trade secret or other intellectual
 * property right is granted to or conferred upon you by disclosure or
 * delivery of the Materials, either expressly, by implication, inducement,
 * estoppel or otherwise. Any license under such intellectual property rights
 * must be express and approved by Intel in writing.
 */

#ifndef __IPU_DEVICE_FF_PROPERTIES_IMPL_H
#define __IPU_DEVICE_FF_PROPERTIES_IMPL_H

/* Properties of the PSYS accelerators (FF)  */

#include "ipu_device_ff_properties_struct.h"
#include "ipu_device_ff_properties_defs.h"
#include "ipu_device_ff_devices.h"
#include "ipu_device_ff_properties_storage_class.h"

FF_PROPERTIES_DATA_STORAGE_CLASS_C struct ipu_device_ff_properties_s
ipu_device_ff_properties[IPU_DEVICE_FF_NUM_FF] = {
	/* PSA Fixed Functions */
	{
		IPU_DEVICE_FF_RYNR_BNLM_BASE_ADDR,
		IPU_DEVICE_FF_RYNR_BNLM_DATA_BUS_ADDR,
		IPU_DEVICE_FF_RYNR_BNLM_POWER_FEATURE_ADDR,
		CLOCK_GATING_VALUE_NORMAL
	},
	{
		IPU_DEVICE_FF_DEMOSAIC_DEMOSAIC_BASE_ADDR,
		IPU_DEVICE_FF_DEMOSAIC_DEMOSAIC_DATA_BUS_ADDR,
		IPU_DEVICE_FF_DEMOSAIC_DEMOSAIC_POWER_FEATURE_ADDR,
		CLOCK_GATING_VALUE_NORMAL
	},
	{
		IPU_DEVICE_FF_ACM_GLIM_BASE_ADDR,
		IPU_DEVICE_FF_ACM_GLIM_DATA_BUS_ADDR,
		IPU_DEVICE_FF_ACM_GLIM_POWER_FEATURE_ADDR,
		CLOCK_GATING_VALUE_NORMAL
	},
	{
		IPU_DEVICE_FF_ACM_ACM_BASE_ADDR,
		IPU_DEVICE_FF_ACM_ACM_DATA_BUS_ADDR,
		IPU_DEVICE_FF_ACM_ACM_POWER_FEATURE_ADDR,
		CLOCK_GATING_VALUE_NORMAL
	},
	{
		IPU_DEVICE_FF_GAMMA_STAR_BASE_ADDR,
		IPU_DEVICE_FF_GAMMA_STAR_DATA_BUS_ADDR,
		IPU_DEVICE_FF_GAMMA_STAR_POWER_FEATURE_ADDR,
		CLOCK_GATING_VALUE_NORMAL
	},
	{
		IPU_DEVICE_FF_GTC_CSC_CDS_BASE_ADDR,
		IPU_DEVICE_FF_GTC_CSC_CDS_DATA_BUS_ADDR,
		IPU_DEVICE_FF_GTC_CSC_CDS_POWER_FEATURE_ADDR,
		CLOCK_GATING_VALUE_NORMAL
	},
	{
		IPU_DEVICE_FF_GTC_GTM_BASE_ADDR,
		IPU_DEVICE_FF_GTC_GTM_DATA_BUS_ADDR,
		IPU_DEVICE_FF_GTC_GTM_POWER_FEATURE_ADDR,
		CLOCK_GATING_VALUE_NORMAL
	},
	{
		IPU_DEVICE_FF_YUV1_SPLITTER_BASE_ADDR,
		IPU_DEVICE_FF_YUV1_SPLITTER_DATA_BUS_ADDR,
		IPU_DEVICE_FF_YUV1_SPLITTER_POWER_FEATURE_ADDR,
		CLOCK_GATING_VALUE_NORMAL
	},
	{
		IPU_DEVICE_FF_YUV1_IEFD_BASE_ADDR,
		IPU_DEVICE_FF_YUV1_IEFD_DATA_BUS_ADDR,
		IPU_DEVICE_FF_YUV1_IEFD_POWER_FEATURE_ADDR,
		CLOCK_GATING_VALUE_NORMAL
	},
	{
		IPU_DEVICE_FF_DVS_YBIN_BASE_ADDR,
		IPU_DEVICE_FF_DVS_YBIN_DATA_BUS_ADDR,
		IPU_DEVICE_FF_DVS_YBIN_POWER_FEATURE_ADDR,
		CLOCK_GATING_VALUE_NORMAL
	},
	{
		IPU_DEVICE_FF_DVS_DVS_BASE_ADDR,
		IPU_DEVICE_FF_DVS_DVS_DATA_BUS_ADDR,
		IPU_DEVICE_FF_DVS_DVS_POWER_FEATURE_ADDR,
		CLOCK_GATING_VALUE_NORMAL
	},
	{
		IPU_DEVICE_FF_VCSC_VCSC_BASE_ADDR,
		IPU_DEVICE_FF_VCSC_VCSC_DATA_BUS_ADDR,
		IPU_DEVICE_FF_VCSC_VCSC_POWER_FEATURE_ADDR,
		CLOCK_GATING_VALUE_NORMAL
	},
	{
		IPU_DEVICE_FF_GLTM_BASE_ADDR,
		IPU_DEVICE_FF_GLTM_DATA_BUS_ADDR,
		IPU_DEVICE_FF_GLTM_POWER_FEATURE_ADDR,
		CLOCK_GATING_VALUE_NORMAL
	},
	{
		IPU_DEVICE_FF_XNR_VHF_BASE_ADDR,
		IPU_DEVICE_FF_XNR_VHF_DATA_BUS_ADDR,
		CLOCK_GATING_YET_TO_BE_IMPLEMENTED,
		CLOCK_GATING_YET_TO_BE_IMPLEMENTED
	},
	{
		IPU_DEVICE_FF_XNR_HF_BASE_ADDR,
		IPU_DEVICE_FF_XNR_HF_DATA_BUS_ADDR,
		CLOCK_GATING_YET_TO_BE_IMPLEMENTED,
		CLOCK_GATING_YET_TO_BE_IMPLEMENTED
	},
	{
		IPU_DEVICE_FF_XNR_HF_SE_BASE_ADDR,
		IPU_DEVICE_FF_XNR_HF_SE_DATA_BUS_ADDR,
		CLOCK_GATING_YET_TO_BE_IMPLEMENTED,
		CLOCK_GATING_YET_TO_BE_IMPLEMENTED
	},
	{
		IPU_DEVICE_FF_XNR_MF_BASE_ADDR,
		IPU_DEVICE_FF_XNR_MF_DATA_BUS_ADDR,
		CLOCK_GATING_YET_TO_BE_IMPLEMENTED,
		CLOCK_GATING_YET_TO_BE_IMPLEMENTED
	},
	{
		IPU_DEVICE_FF_XNR_MF_SE_BASE_ADDR,
		IPU_DEVICE_FF_XNR_MF_SE_DATA_BUS_ADDR,
		CLOCK_GATING_YET_TO_BE_IMPLEMENTED,
		CLOCK_GATING_YET_TO_BE_IMPLEMENTED
	},
	{
		IPU_DEVICE_FF_XNR_LF_BASE_ADDR,
		IPU_DEVICE_FF_XNR_LF_DATA_BUS_ADDR,
		CLOCK_GATING_YET_TO_BE_IMPLEMENTED,
		CLOCK_GATING_YET_TO_BE_IMPLEMENTED
	},
	{
		IPU_DEVICE_FF_XNR_LF_SE_BASE_ADDR,
		IPU_DEVICE_FF_XNR_LF_SE_DATA_BUS_ADDR,
		CLOCK_GATING_YET_TO_BE_IMPLEMENTED,
		CLOCK_GATING_YET_TO_BE_IMPLEMENTED
	},
	{
		IPU_DEVICE_FF_XNR_LFE_BASE_ADDR,
		IPU_DEVICE_FF_XNR_LFE_DATA_BUS_ADDR,
		IPU_DEVICE_FF_XNR_LFE_POWER_FEATURE_ADDR,
		CLOCK_GATING_VALUE_NORMAL
	},
	{
		IPU_DEVICE_FF_XNR_VLF_BASE_ADDR,
		IPU_DEVICE_FF_XNR_VLF_DATA_BUS_ADDR,
		CLOCK_GATING_YET_TO_BE_IMPLEMENTED,
		CLOCK_GATING_YET_TO_BE_IMPLEMENTED
	},
	{
		IPU_DEVICE_FF_XNR_VLF_SE_BASE_ADDR,
		IPU_DEVICE_FF_XNR_VLF_SE_DATA_BUS_ADDR,
		CLOCK_GATING_YET_TO_BE_IMPLEMENTED,
		CLOCK_GATING_YET_TO_BE_IMPLEMENTED
	},
	{
		IPU_DEVICE_FF_XNR_VCR_BASE_ADDR,
		IPU_DEVICE_FF_XNR_VCR_DATA_BUS_ADDR,
		IPU_DEVICE_FF_XNR_VCR_POWER_FEATURE_ADDR,
		CLOCK_GATING_VALUE_NORMAL
	},
	{
		IPU_DEVICE_FF_STREAM_CROP_PSA_H_BASE_ADDR,
		IPU_DEVICE_FF_STREAM_CROP_PSA_H_DATA_BUS_ADDR,
		CLOCK_GATING_YET_TO_BE_IMPLEMENTED,
		CLOCK_GATING_YET_TO_BE_IMPLEMENTED
	},
	/* ISA Fixed Functions */
	{
		IPU_DEVICE_FF_X2B_MD_BASE_ADDR,
		IPU_DEVICE_FF_X2B_MD_DATA_BUS_ADDR,
		IPU_DEVICE_FF_X2B_MD_POWER_FEATURE_ADDR,
		CLOCK_GATING_VALUE_SPECIAL
	},
	{
		IPU_DEVICE_FF_X2B_SVE_RGBIR_RGBIR_BASE_ADDR,
		IPU_DEVICE_FF_X2B_SVE_RGBIR_RGBIR_DATA_BUS_ADDR,
		IPU_DEVICE_FF_X2B_SVE_RGBIR_RGBIR_POWER_FEATURE_ADDR,
		CLOCK_GATING_VALUE_SPECIAL
	},
	{
		IPU_DEVICE_FF_X2B_SVE_RGBIR_SVE_BASE_ADDR,
		IPU_DEVICE_FF_X2B_SVE_RGBIR_SVE_DATA_BUS_ADDR,
		IPU_DEVICE_FF_X2B_SVE_RGBIR_SVE_POWER_FEATURE_ADDR,
		CLOCK_GATING_VALUE_SPECIAL
	},
	{
		IPU_DEVICE_FF_ICA_INL_BASE_ADDR,
		IPU_DEVICE_FF_ICA_INL_DATA_BUS_ADDR,
		IPU_DEVICE_FF_ICA_INL_POWER_FEATURE_ADDR,
		CLOCK_GATING_VALUE_NORMAL
	},
	{
		IPU_DEVICE_FF_ICA_GBL_BASE_ADDR,
		IPU_DEVICE_FF_ICA_GBL_DATA_BUS_ADDR,
		IPU_DEVICE_FF_ICA_GBL_POWER_FEATURE_ADDR,
		CLOCK_GATING_VALUE_NORMAL
	},
	{
		IPU_DEVICE_FF_ICA_PCLN_BASE_ADDR,
		IPU_DEVICE_FF_ICA_PCLN_DATA_BUS_ADDR,
		IPU_DEVICE_FF_ICA_PCLN_POWER_FEATURE_ADDR,
		CLOCK_GATING_VALUE_NORMAL
	},
	{
		IPU_DEVICE_FF_LSC_LSC_BASE_ADDR,
		IPU_DEVICE_FF_LSC_LSC_DATA_BUS_ADDR,
		IPU_DEVICE_FF_LSC_LSC_POWER_FEATURE_ADDR,
		CLOCK_GATING_VALUE_NORMAL
	},
	{
		IPU_DEVICE_FF_DPC_DPC_BASE_ADDR,
		IPU_DEVICE_FF_DPC_DPC_DATA_BUS_ADDR,
		IPU_DEVICE_FF_DPC_DPC_POWER_FEATURE_ADDR,
		CLOCK_GATING_VALUE_NORMAL
	},
	{
		IPU_DEVICE_FF_DPC_PEXT_BASE_ADDR,
		IPU_DEVICE_FF_DPC_PEXT_DATA_BUS_ADDR,
		IPU_DEVICE_FF_DPC_PEXT_POWER_FEATURE_ADDR,
		CLOCK_GATING_VALUE_NORMAL
	},
	{
		IPU_DEVICE_FF_DPC_SAM_BASE_ADDR,
		IPU_DEVICE_FF_DPC_SAM_DATA_BUS_ADDR,
		IPU_DEVICE_FF_DPC_SAM_POWER_FEATURE_ADDR,
		CLOCK_GATING_VALUE_NORMAL
	},
	{
		IPU_DEVICE_FF_SIS_SIS_A_BASE_ADDR,
		IPU_DEVICE_FF_SIS_SIS_A_DATA_BUS_ADDR,
		IPU_DEVICE_FF_SIS_SIS_A_POWER_FEATURE_ADDR,
		CLOCK_GATING_VALUE_NORMAL
	},
	{
		IPU_DEVICE_FF_SIS_SIS_B_BASE_ADDR,
		IPU_DEVICE_FF_SIS_SIS_B_DATA_BUS_ADDR,
		IPU_DEVICE_FF_SIS_SIS_B_POWER_FEATURE_ADDR,
		CLOCK_GATING_VALUE_NORMAL
	},
	{
		IPU_DEVICE_FF_B2B_WBA_BASE_ADDR,
		IPU_DEVICE_FF_B2B_WBA_DATA_BUS_ADDR,
		IPU_DEVICE_FF_B2B_WBA_POWER_FEATURE_ADDR,
		CLOCK_GATING_VALUE_NORMAL
	},
	{
		IPU_DEVICE_FF_B2B_LCA_BASE_ADDR,
		IPU_DEVICE_FF_B2B_LCA_DATA_BUS_ADDR,
		IPU_DEVICE_FF_B2B_LCA_POWER_FEATURE_ADDR,
		CLOCK_GATING_VALUE_NORMAL
	},
	{
		IPU_DEVICE_FF_B2R_DM_BASE_ADDR,
		IPU_DEVICE_FF_B2R_DM_DATA_BUS_ADDR,
		IPU_DEVICE_FF_B2R_DM_POWER_FEATURE_ADDR,
		CLOCK_GATING_VALUE_SPECIAL
	},
	{
		IPU_DEVICE_FF_R2I_DS_A_SCALER_BASE_ADDR,
		IPU_DEVICE_FF_R2I_DS_A_SCALER_DATA_BUS_ADDR,
		IPU_DEVICE_FF_R2I_DS_A_SCALER_POWER_FEATURE_ADDR,
		CLOCK_GATING_VALUE_SPECIAL
	},
	{
		IPU_DEVICE_FF_R2I_SIE_CSC_BASE_ADDR,
		IPU_DEVICE_FF_R2I_SIE_CSC_DATA_BUS_ADDR,
		IPU_DEVICE_FF_R2I_SIE_CSC_POWER_FEATURE_ADDR,
		CLOCK_GATING_VALUE_SPECIAL
	},
	{
		IPU_DEVICE_FF_AWB_AWRG_BASE_ADDR,
		IPU_DEVICE_FF_AWB_AWRG_DATA_BUS_ADDR,
		IPU_DEVICE_FF_AWB_AWRG_POWER_FEATURE_ADDR,
		CLOCK_GATING_VALUE_NORMAL
	},
	{
		IPU_DEVICE_FF_AF_AF_BASE_ADDR,
		IPU_DEVICE_FF_AF_AF_DATA_BUS_ADDR,
		IPU_DEVICE_FF_AF_AF_POWER_FEATURE_ADDR,
		CLOCK_GATING_VALUE_NORMAL
	},
	{
		IPU_DEVICE_FF_PAF_BASE_ADDR,
		IPU_DEVICE_FF_PAF_DATA_BUS_ADDR,
		IPU_DEVICE_FF_PAF_POWER_FEATURE_ADDR,
		CLOCK_GATING_VALUE_NORMAL
	},
	{
		IPU_DEVICE_FF_AE_WGHT_HIST_BASE_ADDR,
		IPU_DEVICE_FF_AE_WGHT_HIST_DATA_BUS_ADDR,
		IPU_DEVICE_FF_AE_WGHT_HIST_POWER_FEATURE_ADDR,
		CLOCK_GATING_VALUE_SPECIAL
	},
	{
		IPU_DEVICE_FF_AE_CCM_BASE_ADDR,
		IPU_DEVICE_FF_AE_CCM_DATA_BUS_ADDR,
		IPU_DEVICE_FF_AE_CCM_POWER_FEATURE_ADDR,
		CLOCK_GATING_VALUE_SPECIAL
	},
	{
		IPU_DEVICE_FF_STREAM_CROP_A_BASE_ADDR,
		IPU_DEVICE_FF_STREAM_CROP_A_DATA_BUS_ADDR,
		CLOCK_GATING_YET_TO_BE_IMPLEMENTED,
		CLOCK_GATING_YET_TO_BE_IMPLEMENTED
	},
	{
		IPU_DEVICE_FF_STREAM_CROP_B_BASE_ADDR,
		IPU_DEVICE_FF_STREAM_CROP_B_DATA_BUS_ADDR,
		CLOCK_GATING_YET_TO_BE_IMPLEMENTED,
		CLOCK_GATING_YET_TO_BE_IMPLEMENTED
	}
};

#endif /* __IPU_DEVICE_FF_PROPERTIES_IMPL_H */