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
 * $brcm_Workfile: bchp_decode_cpudma_0.h $
 * $brcm_Revision: Hydra_Software_Devel/1 $
 * $brcm_Date: 7/17/09 8:01p $
 *
 * Module Description:
 *                     DO NOT EDIT THIS FILE DIRECTLY
 *
 * This module was generated magically with RDB from a source description
 * file. You must edit the source file for changes to be made to this file.
 *
 *
 * Date:           Generated on         Fri Jul 17 19:42:10 2009
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
 * $brcm_Log: /magnum/basemodules/chp/70015/rdb/a0/bchp_decode_cpudma_0.h $
 * 
 * Hydra_Software_Devel/1   7/17/09 8:01p albertl
 * PR56880: Initial revision.
 *
 ***************************************************************************/

#ifndef BCHP_DECODE_CPUDMA_0_H__
#define BCHP_DECODE_CPUDMA_0_H__

/***************************************************************************
 *DECODE_CPUDMA_0
 ***************************************************************************/
#define BCHP_DECODE_CPUDMA_0_REG_DMA0_SD_ADDR    0x00801800 /* SDRAM address */
#define BCHP_DECODE_CPUDMA_0_REG_DMA0_LCL_ADDR   0x00801804 /* Local Memory Address */
#define BCHP_DECODE_CPUDMA_0_REG_DMA0_LEN        0x00801808 /* Length */
#define BCHP_DECODE_CPUDMA_0_REG_DMA1_SD_ADDR    0x00801810 /* REG_DMA1_SD_ADDR */
#define BCHP_DECODE_CPUDMA_0_REG_DMA1_LCL_ADDR   0x00801814 /* REG_DMA1_LCL_ADDR */
#define BCHP_DECODE_CPUDMA_0_REG_DMA1_LEN        0x00801818 /* REG_DMA1_LEN */
#define BCHP_DECODE_CPUDMA_0_REG_DMA2_SD_ADDR    0x00801820 /* REG_DMA2_SD_ADDR */
#define BCHP_DECODE_CPUDMA_0_REG_DMA2_LCL_ADDR   0x00801824 /* REG_DMA2_LCL_ADDR */
#define BCHP_DECODE_CPUDMA_0_REG_DMA2_LEN        0x00801828 /* REG_DMA2_LEN */
#define BCHP_DECODE_CPUDMA_0_REG_DMA3_SD_ADDR    0x00801830 /* REG_DMA3_SD_ADDR */
#define BCHP_DECODE_CPUDMA_0_REG_DMA3_LCL_ADDR   0x00801834 /* REG_DMA3_LCL_ADDR */
#define BCHP_DECODE_CPUDMA_0_REG_DMA3_LEN        0x00801838 /* REG_DMA3_LEN */
#define BCHP_DECODE_CPUDMA_0_REG_DMA_STATUS      0x00801840 /* REG_DMA_STATUS */
#define BCHP_DECODE_CPUDMA_0_REG_CPUDMA_END      0x008018fc /* REG_CPUDMA_END */

/***************************************************************************
 *REG_DMA0_SD_ADDR - SDRAM address
 ***************************************************************************/
/* DECODE_CPUDMA_0 :: REG_DMA0_SD_ADDR :: Sd_Addr [31:02] */
#define BCHP_DECODE_CPUDMA_0_REG_DMA0_SD_ADDR_Sd_Addr_MASK         0xfffffffc
#define BCHP_DECODE_CPUDMA_0_REG_DMA0_SD_ADDR_Sd_Addr_SHIFT        2

/* DECODE_CPUDMA_0 :: REG_DMA0_SD_ADDR :: reserved0 [01:00] */
#define BCHP_DECODE_CPUDMA_0_REG_DMA0_SD_ADDR_reserved0_MASK       0x00000003
#define BCHP_DECODE_CPUDMA_0_REG_DMA0_SD_ADDR_reserved0_SHIFT      0

/***************************************************************************
 *REG_DMA0_LCL_ADDR - Local Memory Address
 ***************************************************************************/
/* DECODE_CPUDMA_0 :: REG_DMA0_LCL_ADDR :: reserved0 [31:10] */
#define BCHP_DECODE_CPUDMA_0_REG_DMA0_LCL_ADDR_reserved0_MASK      0xfffffc00
#define BCHP_DECODE_CPUDMA_0_REG_DMA0_LCL_ADDR_reserved0_SHIFT     10

/* DECODE_CPUDMA_0 :: REG_DMA0_LCL_ADDR :: Addr [09:02] */
#define BCHP_DECODE_CPUDMA_0_REG_DMA0_LCL_ADDR_Addr_MASK           0x000003fc
#define BCHP_DECODE_CPUDMA_0_REG_DMA0_LCL_ADDR_Addr_SHIFT          2

/* DECODE_CPUDMA_0 :: REG_DMA0_LCL_ADDR :: reserved1 [01:00] */
#define BCHP_DECODE_CPUDMA_0_REG_DMA0_LCL_ADDR_reserved1_MASK      0x00000003
#define BCHP_DECODE_CPUDMA_0_REG_DMA0_LCL_ADDR_reserved1_SHIFT     0

/***************************************************************************
 *REG_DMA0_LEN - Length
 ***************************************************************************/
/* DECODE_CPUDMA_0 :: REG_DMA0_LEN :: Swap [31:31] */
#define BCHP_DECODE_CPUDMA_0_REG_DMA0_LEN_Swap_MASK                0x80000000
#define BCHP_DECODE_CPUDMA_0_REG_DMA0_LEN_Swap_SHIFT               31

/* DECODE_CPUDMA_0 :: REG_DMA0_LEN :: reserved0 [30:11] */
#define BCHP_DECODE_CPUDMA_0_REG_DMA0_LEN_reserved0_MASK           0x7ffff800
#define BCHP_DECODE_CPUDMA_0_REG_DMA0_LEN_reserved0_SHIFT          11

/* DECODE_CPUDMA_0 :: REG_DMA0_LEN :: Length [10:02] */
#define BCHP_DECODE_CPUDMA_0_REG_DMA0_LEN_Length_MASK              0x000007fc
#define BCHP_DECODE_CPUDMA_0_REG_DMA0_LEN_Length_SHIFT             2

/* DECODE_CPUDMA_0 :: REG_DMA0_LEN :: reserved1 [01:00] */
#define BCHP_DECODE_CPUDMA_0_REG_DMA0_LEN_reserved1_MASK           0x00000003
#define BCHP_DECODE_CPUDMA_0_REG_DMA0_LEN_reserved1_SHIFT          0

/***************************************************************************
 *REG_DMA1_SD_ADDR - REG_DMA1_SD_ADDR
 ***************************************************************************/
/* DECODE_CPUDMA_0 :: REG_DMA1_SD_ADDR :: Sd_Addr [31:02] */
#define BCHP_DECODE_CPUDMA_0_REG_DMA1_SD_ADDR_Sd_Addr_MASK         0xfffffffc
#define BCHP_DECODE_CPUDMA_0_REG_DMA1_SD_ADDR_Sd_Addr_SHIFT        2

/* DECODE_CPUDMA_0 :: REG_DMA1_SD_ADDR :: reserved0 [01:00] */
#define BCHP_DECODE_CPUDMA_0_REG_DMA1_SD_ADDR_reserved0_MASK       0x00000003
#define BCHP_DECODE_CPUDMA_0_REG_DMA1_SD_ADDR_reserved0_SHIFT      0

/***************************************************************************
 *REG_DMA1_LCL_ADDR - REG_DMA1_LCL_ADDR
 ***************************************************************************/
/* DECODE_CPUDMA_0 :: REG_DMA1_LCL_ADDR :: reserved0 [31:10] */
#define BCHP_DECODE_CPUDMA_0_REG_DMA1_LCL_ADDR_reserved0_MASK      0xfffffc00
#define BCHP_DECODE_CPUDMA_0_REG_DMA1_LCL_ADDR_reserved0_SHIFT     10

/* DECODE_CPUDMA_0 :: REG_DMA1_LCL_ADDR :: Addr [09:02] */
#define BCHP_DECODE_CPUDMA_0_REG_DMA1_LCL_ADDR_Addr_MASK           0x000003fc
#define BCHP_DECODE_CPUDMA_0_REG_DMA1_LCL_ADDR_Addr_SHIFT          2

/* DECODE_CPUDMA_0 :: REG_DMA1_LCL_ADDR :: reserved1 [01:00] */
#define BCHP_DECODE_CPUDMA_0_REG_DMA1_LCL_ADDR_reserved1_MASK      0x00000003
#define BCHP_DECODE_CPUDMA_0_REG_DMA1_LCL_ADDR_reserved1_SHIFT     0

/***************************************************************************
 *REG_DMA1_LEN - REG_DMA1_LEN
 ***************************************************************************/
/* DECODE_CPUDMA_0 :: REG_DMA1_LEN :: Swap [31:31] */
#define BCHP_DECODE_CPUDMA_0_REG_DMA1_LEN_Swap_MASK                0x80000000
#define BCHP_DECODE_CPUDMA_0_REG_DMA1_LEN_Swap_SHIFT               31

/* DECODE_CPUDMA_0 :: REG_DMA1_LEN :: reserved0 [30:11] */
#define BCHP_DECODE_CPUDMA_0_REG_DMA1_LEN_reserved0_MASK           0x7ffff800
#define BCHP_DECODE_CPUDMA_0_REG_DMA1_LEN_reserved0_SHIFT          11

/* DECODE_CPUDMA_0 :: REG_DMA1_LEN :: Length [10:02] */
#define BCHP_DECODE_CPUDMA_0_REG_DMA1_LEN_Length_MASK              0x000007fc
#define BCHP_DECODE_CPUDMA_0_REG_DMA1_LEN_Length_SHIFT             2

/* DECODE_CPUDMA_0 :: REG_DMA1_LEN :: reserved1 [01:00] */
#define BCHP_DECODE_CPUDMA_0_REG_DMA1_LEN_reserved1_MASK           0x00000003
#define BCHP_DECODE_CPUDMA_0_REG_DMA1_LEN_reserved1_SHIFT          0

/***************************************************************************
 *REG_DMA2_SD_ADDR - REG_DMA2_SD_ADDR
 ***************************************************************************/
/* DECODE_CPUDMA_0 :: REG_DMA2_SD_ADDR :: Sd_Addr [31:02] */
#define BCHP_DECODE_CPUDMA_0_REG_DMA2_SD_ADDR_Sd_Addr_MASK         0xfffffffc
#define BCHP_DECODE_CPUDMA_0_REG_DMA2_SD_ADDR_Sd_Addr_SHIFT        2

/* DECODE_CPUDMA_0 :: REG_DMA2_SD_ADDR :: reserved0 [01:00] */
#define BCHP_DECODE_CPUDMA_0_REG_DMA2_SD_ADDR_reserved0_MASK       0x00000003
#define BCHP_DECODE_CPUDMA_0_REG_DMA2_SD_ADDR_reserved0_SHIFT      0

/***************************************************************************
 *REG_DMA2_LCL_ADDR - REG_DMA2_LCL_ADDR
 ***************************************************************************/
/* DECODE_CPUDMA_0 :: REG_DMA2_LCL_ADDR :: reserved0 [31:10] */
#define BCHP_DECODE_CPUDMA_0_REG_DMA2_LCL_ADDR_reserved0_MASK      0xfffffc00
#define BCHP_DECODE_CPUDMA_0_REG_DMA2_LCL_ADDR_reserved0_SHIFT     10

/* DECODE_CPUDMA_0 :: REG_DMA2_LCL_ADDR :: Addr [09:02] */
#define BCHP_DECODE_CPUDMA_0_REG_DMA2_LCL_ADDR_Addr_MASK           0x000003fc
#define BCHP_DECODE_CPUDMA_0_REG_DMA2_LCL_ADDR_Addr_SHIFT          2

/* DECODE_CPUDMA_0 :: REG_DMA2_LCL_ADDR :: reserved1 [01:00] */
#define BCHP_DECODE_CPUDMA_0_REG_DMA2_LCL_ADDR_reserved1_MASK      0x00000003
#define BCHP_DECODE_CPUDMA_0_REG_DMA2_LCL_ADDR_reserved1_SHIFT     0

/***************************************************************************
 *REG_DMA2_LEN - REG_DMA2_LEN
 ***************************************************************************/
/* DECODE_CPUDMA_0 :: REG_DMA2_LEN :: Swap [31:31] */
#define BCHP_DECODE_CPUDMA_0_REG_DMA2_LEN_Swap_MASK                0x80000000
#define BCHP_DECODE_CPUDMA_0_REG_DMA2_LEN_Swap_SHIFT               31

/* DECODE_CPUDMA_0 :: REG_DMA2_LEN :: reserved0 [30:11] */
#define BCHP_DECODE_CPUDMA_0_REG_DMA2_LEN_reserved0_MASK           0x7ffff800
#define BCHP_DECODE_CPUDMA_0_REG_DMA2_LEN_reserved0_SHIFT          11

/* DECODE_CPUDMA_0 :: REG_DMA2_LEN :: Length [10:02] */
#define BCHP_DECODE_CPUDMA_0_REG_DMA2_LEN_Length_MASK              0x000007fc
#define BCHP_DECODE_CPUDMA_0_REG_DMA2_LEN_Length_SHIFT             2

/* DECODE_CPUDMA_0 :: REG_DMA2_LEN :: reserved1 [01:00] */
#define BCHP_DECODE_CPUDMA_0_REG_DMA2_LEN_reserved1_MASK           0x00000003
#define BCHP_DECODE_CPUDMA_0_REG_DMA2_LEN_reserved1_SHIFT          0

/***************************************************************************
 *REG_DMA3_SD_ADDR - REG_DMA3_SD_ADDR
 ***************************************************************************/
/* DECODE_CPUDMA_0 :: REG_DMA3_SD_ADDR :: Sd_Addr [31:02] */
#define BCHP_DECODE_CPUDMA_0_REG_DMA3_SD_ADDR_Sd_Addr_MASK         0xfffffffc
#define BCHP_DECODE_CPUDMA_0_REG_DMA3_SD_ADDR_Sd_Addr_SHIFT        2

/* DECODE_CPUDMA_0 :: REG_DMA3_SD_ADDR :: reserved0 [01:00] */
#define BCHP_DECODE_CPUDMA_0_REG_DMA3_SD_ADDR_reserved0_MASK       0x00000003
#define BCHP_DECODE_CPUDMA_0_REG_DMA3_SD_ADDR_reserved0_SHIFT      0

/***************************************************************************
 *REG_DMA3_LCL_ADDR - REG_DMA3_LCL_ADDR
 ***************************************************************************/
/* DECODE_CPUDMA_0 :: REG_DMA3_LCL_ADDR :: reserved0 [31:10] */
#define BCHP_DECODE_CPUDMA_0_REG_DMA3_LCL_ADDR_reserved0_MASK      0xfffffc00
#define BCHP_DECODE_CPUDMA_0_REG_DMA3_LCL_ADDR_reserved0_SHIFT     10

/* DECODE_CPUDMA_0 :: REG_DMA3_LCL_ADDR :: Addr [09:02] */
#define BCHP_DECODE_CPUDMA_0_REG_DMA3_LCL_ADDR_Addr_MASK           0x000003fc
#define BCHP_DECODE_CPUDMA_0_REG_DMA3_LCL_ADDR_Addr_SHIFT          2

/* DECODE_CPUDMA_0 :: REG_DMA3_LCL_ADDR :: reserved1 [01:00] */
#define BCHP_DECODE_CPUDMA_0_REG_DMA3_LCL_ADDR_reserved1_MASK      0x00000003
#define BCHP_DECODE_CPUDMA_0_REG_DMA3_LCL_ADDR_reserved1_SHIFT     0

/***************************************************************************
 *REG_DMA3_LEN - REG_DMA3_LEN
 ***************************************************************************/
/* DECODE_CPUDMA_0 :: REG_DMA3_LEN :: Swap [31:31] */
#define BCHP_DECODE_CPUDMA_0_REG_DMA3_LEN_Swap_MASK                0x80000000
#define BCHP_DECODE_CPUDMA_0_REG_DMA3_LEN_Swap_SHIFT               31

/* DECODE_CPUDMA_0 :: REG_DMA3_LEN :: reserved0 [30:11] */
#define BCHP_DECODE_CPUDMA_0_REG_DMA3_LEN_reserved0_MASK           0x7ffff800
#define BCHP_DECODE_CPUDMA_0_REG_DMA3_LEN_reserved0_SHIFT          11

/* DECODE_CPUDMA_0 :: REG_DMA3_LEN :: Length [10:02] */
#define BCHP_DECODE_CPUDMA_0_REG_DMA3_LEN_Length_MASK              0x000007fc
#define BCHP_DECODE_CPUDMA_0_REG_DMA3_LEN_Length_SHIFT             2

/* DECODE_CPUDMA_0 :: REG_DMA3_LEN :: reserved1 [01:00] */
#define BCHP_DECODE_CPUDMA_0_REG_DMA3_LEN_reserved1_MASK           0x00000003
#define BCHP_DECODE_CPUDMA_0_REG_DMA3_LEN_reserved1_SHIFT          0

/***************************************************************************
 *REG_DMA_STATUS - REG_DMA_STATUS
 ***************************************************************************/
/* DECODE_CPUDMA_0 :: REG_DMA_STATUS :: reserved0 [31:04] */
#define BCHP_DECODE_CPUDMA_0_REG_DMA_STATUS_reserved0_MASK         0xfffffff0
#define BCHP_DECODE_CPUDMA_0_REG_DMA_STATUS_reserved0_SHIFT        4

/* DECODE_CPUDMA_0 :: REG_DMA_STATUS :: Act3 [03:03] */
#define BCHP_DECODE_CPUDMA_0_REG_DMA_STATUS_Act3_MASK              0x00000008
#define BCHP_DECODE_CPUDMA_0_REG_DMA_STATUS_Act3_SHIFT             3

/* DECODE_CPUDMA_0 :: REG_DMA_STATUS :: Act2 [02:02] */
#define BCHP_DECODE_CPUDMA_0_REG_DMA_STATUS_Act2_MASK              0x00000004
#define BCHP_DECODE_CPUDMA_0_REG_DMA_STATUS_Act2_SHIFT             2

/* DECODE_CPUDMA_0 :: REG_DMA_STATUS :: Act1 [01:01] */
#define BCHP_DECODE_CPUDMA_0_REG_DMA_STATUS_Act1_MASK              0x00000002
#define BCHP_DECODE_CPUDMA_0_REG_DMA_STATUS_Act1_SHIFT             1

/* DECODE_CPUDMA_0 :: REG_DMA_STATUS :: Act0 [00:00] */
#define BCHP_DECODE_CPUDMA_0_REG_DMA_STATUS_Act0_MASK              0x00000001
#define BCHP_DECODE_CPUDMA_0_REG_DMA_STATUS_Act0_SHIFT             0

/***************************************************************************
 *REG_CPUDMA_END - REG_CPUDMA_END
 ***************************************************************************/
/* DECODE_CPUDMA_0 :: REG_CPUDMA_END :: reserved0 [31:00] */
#define BCHP_DECODE_CPUDMA_0_REG_CPUDMA_END_reserved0_MASK         0xffffffff
#define BCHP_DECODE_CPUDMA_0_REG_CPUDMA_END_reserved0_SHIFT        0

#endif /* #ifndef BCHP_DECODE_CPUDMA_0_H__ */

/* End of File */