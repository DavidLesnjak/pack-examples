/* -----------------------------------------------------------------------------
 * Copyright (c) 2013-2022 Arm Limited (or its affiliates).
 * All rights reserved.
 *
 * SPDX-License-Identifier: Apache-2.0
 *
 * Licensed under the Apache License, Version 2.0 (the License); you may
 * not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an AS IS BASIS, WITHOUT
 * WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
 *
 * $Date:        30. May 2024
 * $Revision:    V1.1
 *
 * Project:      OTG Driver Header for STMicroelectronics STM32H7xx
 * -------------------------------------------------------------------------- */

#ifndef __OTG_STM32H7XX_H
#define __OTG_STM32H7XX_H

#include <stdint.h>

#include "MX_Device.h"

// OTG_FS (OTG_HS2)
#if  defined(MX_USB_OTG_FS_VM)
  #define MX_USB_OTG_FS
#endif
#if  defined(MX_USB_OTG_FS_Device_Only)
  #define MX_USB_OTG_FS_DEVICE
#endif
#if  defined(MX_USB_OTG_FS_Host_FS)
  #define MX_USB_OTG_FS_HOST
#endif

#if  defined(MX_USB_OTG_FS)
  #define OTG_FS_USED             1
#else
  #define OTG_FS_USED             0
#endif

#if (defined(MX_USB_OTG_FS_DEVICE) || (defined(MX_USB_OTG_FS) && !defined(MX_USB_OTG_FS_HOST)))
  #define OTG_FS_DEVICE_USED      1
#else
  #define OTG_FS_DEVICE_USED      0
#endif

#if (defined(MX_USB_OTG_FS_HOST)   || (defined(MX_USB_OTG_FS) && !defined(MX_USB_OTG_FS_DEVICE)))
  #define OTG_FS_HOST_USED        1
#else
  #define OTG_FS_HOST_USED        0
#endif

// OTG_HS (OTG_HS1)
#if  defined(MX_USB_OTG_HS_VM)
  #define MX_USB_OTG_HS
#endif
#if  defined(MX_USB_OTG_HS_Device_Only)
  #define MX_USB_OTG_HS_DEVICE
#endif
#if  defined(MX_USB_OTG_HS_Host_HS)
  #define MX_USB_OTG_HS_HOST
#endif

#if  defined(MX_USB_OTG_HS)
  #define OTG_HS_USED             1
#else
  #define OTG_HS_USED             0
#endif
#if  defined(MX_USB_OTG_HS_ULPI_D7_Pin)
  #define OTG_HS_ULPI_USED        1
#else
  #define OTG_HS_ULPI_USED        0
#endif

#if (defined(MX_USB_OTG_HS_DEVICE) || (defined(MX_USB_OTG_HS) && !defined(MX_USB_OTG_HS_HOST)))
  #define OTG_HS_DEVICE_USED      1
#else
  #define OTG_HS_DEVICE_USED      0
#endif

#if (defined(MX_USB_OTG_HS_HOST)   || (defined(MX_USB_OTG_HS) && !defined(MX_USB_OTG_HS_DEVICE)))
  #define OTG_HS_HOST_USED        1
#else
  #define OTG_HS_HOST_USED        0
#endif

// Externally defined variables and functions
extern uint8_t otg_fs_role;
extern uint8_t otg_hs_role;

#endif /* __OTG_STM32H7XX_H */
