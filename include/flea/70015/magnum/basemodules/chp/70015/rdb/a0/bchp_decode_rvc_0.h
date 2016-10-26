/***************************************************************************
 *     Copyright (c) 1999-2009, Broadcom Corporation
 *
 **********************************************************************
 * This file is part of the crystalhd device driver.
 *
 * This driver is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, version 2 of the License.
 *
 * This driver is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this driver.  If not, see <http://www.gnu.org/licenses/>.
 **********************************************************************
 *
 * $brcm_Workfile: bchp_decode_rvc_0.h $
 * $brcm_Revision: Hydra_Software_Devel/1 $
 * $brcm_Date: 7/17/09 8:05p $
 *
 * Module Description:
 *                     DO NOT EDIT THIS FILE DIRECTLY
 *
 * This module was generated magically with RDB from a source description
 * file. You must edit the source file for changes to be made to this file.
 *
 *
 * Date:           Generated on         Fri Jul 17 19:43:24 2009
 *                 MD5 Checksum         2914699efc3fb3edefca5cb4f4f38b34
 *
 * Compiled with:  RDB Utility          combo_header.pl
 *                 RDB Parser           3.0
 *                 unknown              unknown
 *                 Perl Interpreter     5.008008
 *                 Operating System     linux
 *
 * Revision History:
 *
 * $brcm_Log: /magnum/basemodules/chp/70015/rdb/a0/bchp_decode_rvc_0.h $
 * 
 * Hydra_Software_Devel/1   7/17/09 8:05p albertl
 * PR56880: Initial revision.
 *
 ***************************************************************************/

#ifndef BCHP_DECODE_RVC_0_H__
#define BCHP_DECODE_RVC_0_H__

/***************************************************************************
 *DECODE_RVC_0
 ***************************************************************************/
#define BCHP_DECODE_RVC_0_REG_RVC_CTL            0x00800e00 /* REG_RVC_CTL */
#define BCHP_DECODE_RVC_0_REG_RVC_PUT            0x00800e04 /* REG_RVC_PUT */
#define BCHP_DECODE_RVC_0_REG_RVC_GET            0x00800e08 /* REG_RVC_GET */
#define BCHP_DECODE_RVC_0_REG_RVC_BASE           0x00800e0c /* REG_RVC_BASE */
#define BCHP_DECODE_RVC_0_REG_RVC_END            0x00800e10 /* REG_RVC_END */
#define BCHP_DECODE_RVC_0_REG_RVC_END_END        0x00800efc /* REG_RVC_END_END */

/***************************************************************************
 *REG_RVC_CTL - REG_RVC_CTL
 ***************************************************************************/
/* DECODE_RVC_0 :: REG_RVC_CTL :: reserved0 [31:01] */
#define BCHP_DECODE_RVC_0_REG_RVC_CTL_reserved0_MASK               0xfffffffe
#define BCHP_DECODE_RVC_0_REG_RVC_CTL_reserved0_SHIFT              1

/* DECODE_RVC_0 :: REG_RVC_CTL :: Ena [00:00] */
#define BCHP_DECODE_RVC_0_REG_RVC_CTL_Ena_MASK                     0x00000001
#define BCHP_DECODE_RVC_0_REG_RVC_CTL_Ena_SHIFT                    0

/***************************************************************************
 *REG_RVC_PUT - REG_RVC_PUT
 ***************************************************************************/
/* DECODE_RVC_0 :: REG_RVC_PUT :: Put_Ptr [31:00] */
#define BCHP_DECODE_RVC_0_REG_RVC_PUT_Put_Ptr_MASK                 0xffffffff
#define BCHP_DECODE_RVC_0_REG_RVC_PUT_Put_Ptr_SHIFT                0

/***************************************************************************
 *REG_RVC_GET - REG_RVC_GET
 ***************************************************************************/
/* DECODE_RVC_0 :: REG_RVC_GET :: Get_Ptr [31:05] */
#define BCHP_DECODE_RVC_0_REG_RVC_GET_Get_Ptr_MASK                 0xffffffe0
#define BCHP_DECODE_RVC_0_REG_RVC_GET_Get_Ptr_SHIFT                5

/* DECODE_RVC_0 :: REG_RVC_GET :: reserved0 [04:00] */
#define BCHP_DECODE_RVC_0_REG_RVC_GET_reserved0_MASK               0x0000001f
#define BCHP_DECODE_RVC_0_REG_RVC_GET_reserved0_SHIFT              0

/***************************************************************************
 *REG_RVC_BASE - REG_RVC_BASE
 ***************************************************************************/
/* DECODE_RVC_0 :: REG_RVC_BASE :: Base_Addr [31:20] */
#define BCHP_DECODE_RVC_0_REG_RVC_BASE_Base_Addr_MASK              0xfff00000
#define BCHP_DECODE_RVC_0_REG_RVC_BASE_Base_Addr_SHIFT             20

/* DECODE_RVC_0 :: REG_RVC_BASE :: reserved0 [19:00] */
#define BCHP_DECODE_RVC_0_REG_RVC_BASE_reserved0_MASK              0x000fffff
#define BCHP_DECODE_RVC_0_REG_RVC_BASE_reserved0_SHIFT             0

/***************************************************************************
 *REG_RVC_END - REG_RVC_END
 ***************************************************************************/
/* DECODE_RVC_0 :: REG_RVC_END :: End_Addr [31:20] */
#define BCHP_DECODE_RVC_0_REG_RVC_END_End_Addr_MASK                0xfff00000
#define BCHP_DECODE_RVC_0_REG_RVC_END_End_Addr_SHIFT               20

/* DECODE_RVC_0 :: REG_RVC_END :: reserved0 [19:00] */
#define BCHP_DECODE_RVC_0_REG_RVC_END_reserved0_MASK               0x000fffff
#define BCHP_DECODE_RVC_0_REG_RVC_END_reserved0_SHIFT              0

/***************************************************************************
 *REG_RVC_END_END - REG_RVC_END_END
 ***************************************************************************/
/* DECODE_RVC_0 :: REG_RVC_END_END :: reserved0 [31:00] */
#define BCHP_DECODE_RVC_0_REG_RVC_END_END_reserved0_MASK           0xffffffff
#define BCHP_DECODE_RVC_0_REG_RVC_END_END_reserved0_SHIFT          0

#endif /* #ifndef BCHP_DECODE_RVC_0_H__ */

/* End of File */
