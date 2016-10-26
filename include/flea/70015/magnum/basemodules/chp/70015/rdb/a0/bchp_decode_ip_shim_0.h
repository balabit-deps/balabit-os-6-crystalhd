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
 * $brcm_Workfile: bchp_decode_ip_shim_0.h $
 * $brcm_Revision: Hydra_Software_Devel/1 $
 * $brcm_Date: 7/17/09 8:04p $
 *
 * Module Description:
 *                     DO NOT EDIT THIS FILE DIRECTLY
 *
 * This module was generated magically with RDB from a source description
 * file. You must edit the source file for changes to be made to this file.
 *
 *
 * Date:           Generated on         Fri Jul 17 19:42:04 2009
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
 * $brcm_Log: /magnum/basemodules/chp/70015/rdb/a0/bchp_decode_ip_shim_0.h $
 * 
 * Hydra_Software_Devel/1   7/17/09 8:04p albertl
 * PR56880: Initial revision.
 *
 ***************************************************************************/

#ifndef BCHP_DECODE_IP_SHIM_0_H__
#define BCHP_DECODE_IP_SHIM_0_H__

/***************************************************************************
 *DECODE_IP_SHIM_0 - AVD Shim Registers 0
 ***************************************************************************/
#define BCHP_DECODE_IP_SHIM_0_STC0_REG           0x00860000 /* Serial Time Stamp PTS register */
#define BCHP_DECODE_IP_SHIM_0_STC1_REG           0x00860004 /* Serial Time Stamp PTS register */
#define BCHP_DECODE_IP_SHIM_0_ENDIAN_REG         0x00860008 /* Stream Endian Control Register */
#define BCHP_DECODE_IP_SHIM_0_BVN_INT_REG        0x0086000c /* BVN Interrupt Register */
#define BCHP_DECODE_IP_SHIM_0_CPU_ID             0x00860010 /* Chip ID Regsiter */
#define BCHP_DECODE_IP_SHIM_0_REG_AVD_CLK_GATE   0x00860014 /* Clock Gate Register */
#define BCHP_DECODE_IP_SHIM_0_DBI_TM_REG         0x00860034 /* Deblock Intercept Buffer TM register */
#define BCHP_DECODE_IP_SHIM_0_ARC0_TM_REG        0x00860038 /* ARC TM Register */
#define BCHP_DECODE_IP_SHIM_0_ARC1_TM_REG        0x0086003c /* ARC TM Register */
#define BCHP_DECODE_IP_SHIM_0_CPU_DBG_TM_REG     0x00860040 /* CPU Debug FIFO TM Register */
#define BCHP_DECODE_IP_SHIM_0_CABAC_TM_REG       0x00860044 /* CABAC TM Register */
#define BCHP_DECODE_IP_SHIM_0_DECODE_TM_REG      0x00860048 /* Decode TM Register */
#define BCHP_DECODE_IP_SHIM_0_FRONTEND_FSRF_TM_REG 0x0086004c /* Frontend FSRF TM Register */
#define BCHP_DECODE_IP_SHIM_0_ARC_FSRF_TM_REG    0x00860050 /* ARC FSRF TM Register */
#define BCHP_DECODE_IP_SHIM_0_SHIM_FSRF_TM_REG   0x00860054 /* SHIM FSRF TM Register */
#define BCHP_DECODE_IP_SHIM_0_DECODE_FSRF_TM_REG 0x00860058 /* DECODE FSRF TM Register */
#define BCHP_DECODE_IP_SHIM_0_DEBLOCK_FSRF_TM_REG 0x0086005c /* DEBLOCK FSRF TM Register */
#define BCHP_DECODE_IP_SHIM_0_IXFORM_FSRF_TM_REG 0x00860060 /* IXFORM FSRF TM Register */
#define BCHP_DECODE_IP_SHIM_0_SI_FSRF_TM_REG     0x00860064 /* SI FSRF TM Register */
#define BCHP_DECODE_IP_SHIM_0_FGTAVE_FSRF_TM_REG 0x00860068 /* FGTAVE FSRF TM Register */
#define BCHP_DECODE_IP_SHIM_0_PCACHE_FSRF_TM_REG 0x0086006c /* PCACHE FSRF TM Register */
#define BCHP_DECODE_IP_SHIM_0_HST_SCRATCH_RAM_ADDR_REG 0x00860070 /* Scratch RAM Address */
#define BCHP_DECODE_IP_SHIM_0_ARC_SCRATCH_RAM_ADDR_REG 0x00860074 /* Scratch RAM Address */
#define BCHP_DECODE_IP_SHIM_0_HST_SCRATCH_RAM_DATA_REG 0x00860078 /* Scratch RAM Data */
#define BCHP_DECODE_IP_SHIM_0_ARC_SCRATCH_RAM_DATA_REG 0x0086007c /* Scratch RAM Data */

/***************************************************************************
 *STC0_REG - Serial Time Stamp PTS register
 ***************************************************************************/
/* DECODE_IP_SHIM_0 :: STC0_REG :: STC [31:00] */
#define BCHP_DECODE_IP_SHIM_0_STC0_REG_STC_MASK                    0xffffffff
#define BCHP_DECODE_IP_SHIM_0_STC0_REG_STC_SHIFT                   0

/***************************************************************************
 *STC1_REG - Serial Time Stamp PTS register
 ***************************************************************************/
/* DECODE_IP_SHIM_0 :: STC1_REG :: STC [31:00] */
#define BCHP_DECODE_IP_SHIM_0_STC1_REG_STC_MASK                    0xffffffff
#define BCHP_DECODE_IP_SHIM_0_STC1_REG_STC_SHIFT                   0

/***************************************************************************
 *ENDIAN_REG - Stream Endian Control Register
 ***************************************************************************/
/* DECODE_IP_SHIM_0 :: ENDIAN_REG :: reserved0 [31:01] */
#define BCHP_DECODE_IP_SHIM_0_ENDIAN_REG_reserved0_MASK            0xfffffffe
#define BCHP_DECODE_IP_SHIM_0_ENDIAN_REG_reserved0_SHIFT           1

/* DECODE_IP_SHIM_0 :: ENDIAN_REG :: B1L0 [00:00] */
#define BCHP_DECODE_IP_SHIM_0_ENDIAN_REG_B1L0_MASK                 0x00000001
#define BCHP_DECODE_IP_SHIM_0_ENDIAN_REG_B1L0_SHIFT                0

/***************************************************************************
 *BVN_INT_REG - BVN Interrupt Register
 ***************************************************************************/
/* DECODE_IP_SHIM_0 :: BVN_INT_REG :: reserved0 [31:02] */
#define BCHP_DECODE_IP_SHIM_0_BVN_INT_REG_reserved0_MASK           0xfffffffc
#define BCHP_DECODE_IP_SHIM_0_BVN_INT_REG_reserved0_SHIFT          2

/* DECODE_IP_SHIM_0 :: BVN_INT_REG :: desc [01:01] */
#define BCHP_DECODE_IP_SHIM_0_BVN_INT_REG_desc_MASK                0x00000002
#define BCHP_DECODE_IP_SHIM_0_BVN_INT_REG_desc_SHIFT               1

/* DECODE_IP_SHIM_0 :: BVN_INT_REG :: trigger [00:00] */
#define BCHP_DECODE_IP_SHIM_0_BVN_INT_REG_trigger_MASK             0x00000001
#define BCHP_DECODE_IP_SHIM_0_BVN_INT_REG_trigger_SHIFT            0

/***************************************************************************
 *CPU_ID - Chip ID Regsiter
 ***************************************************************************/
/* DECODE_IP_SHIM_0 :: CPU_ID :: reserved0 [31:17] */
#define BCHP_DECODE_IP_SHIM_0_CPU_ID_reserved0_MASK                0xfffe0000
#define BCHP_DECODE_IP_SHIM_0_CPU_ID_reserved0_SHIFT               17

/* DECODE_IP_SHIM_0 :: CPU_ID :: AVD_ID [16:16] */
#define BCHP_DECODE_IP_SHIM_0_CPU_ID_AVD_ID_MASK                   0x00010000
#define BCHP_DECODE_IP_SHIM_0_CPU_ID_AVD_ID_SHIFT                  16

/* DECODE_IP_SHIM_0 :: CPU_ID :: IL_CPU_ID [15:08] */
#define BCHP_DECODE_IP_SHIM_0_CPU_ID_IL_CPU_ID_MASK                0x0000ff00
#define BCHP_DECODE_IP_SHIM_0_CPU_ID_IL_CPU_ID_SHIFT               8

/* DECODE_IP_SHIM_0 :: CPU_ID :: OL_CPU_ID [07:00] */
#define BCHP_DECODE_IP_SHIM_0_CPU_ID_OL_CPU_ID_MASK                0x000000ff
#define BCHP_DECODE_IP_SHIM_0_CPU_ID_OL_CPU_ID_SHIFT               0

/***************************************************************************
 *REG_AVD_CLK_GATE - Clock Gate Register
 ***************************************************************************/
/* DECODE_IP_SHIM_0 :: REG_AVD_CLK_GATE :: reserved0 [31:10] */
#define BCHP_DECODE_IP_SHIM_0_REG_AVD_CLK_GATE_reserved0_MASK      0xfffffc00
#define BCHP_DECODE_IP_SHIM_0_REG_AVD_CLK_GATE_reserved0_SHIFT     10

/* DECODE_IP_SHIM_0 :: REG_AVD_CLK_GATE :: clk_ka [09:09] */
#define BCHP_DECODE_IP_SHIM_0_REG_AVD_CLK_GATE_clk_ka_MASK         0x00000200
#define BCHP_DECODE_IP_SHIM_0_REG_AVD_CLK_GATE_clk_ka_SHIFT        9

/* DECODE_IP_SHIM_0 :: REG_AVD_CLK_GATE :: clk_fgt [08:08] */
#define BCHP_DECODE_IP_SHIM_0_REG_AVD_CLK_GATE_clk_fgt_MASK        0x00000100
#define BCHP_DECODE_IP_SHIM_0_REG_AVD_CLK_GATE_clk_fgt_SHIFT       8

/* DECODE_IP_SHIM_0 :: REG_AVD_CLK_GATE :: clk_cab [07:07] */
#define BCHP_DECODE_IP_SHIM_0_REG_AVD_CLK_GATE_clk_cab_MASK        0x00000080
#define BCHP_DECODE_IP_SHIM_0_REG_AVD_CLK_GATE_clk_cab_SHIFT       7

/* DECODE_IP_SHIM_0 :: REG_AVD_CLK_GATE :: clk_intra [06:06] */
#define BCHP_DECODE_IP_SHIM_0_REG_AVD_CLK_GATE_clk_intra_MASK      0x00000040
#define BCHP_DECODE_IP_SHIM_0_REG_AVD_CLK_GATE_clk_intra_SHIFT     6

/* DECODE_IP_SHIM_0 :: REG_AVD_CLK_GATE :: clk_vframe [05:05] */
#define BCHP_DECODE_IP_SHIM_0_REG_AVD_CLK_GATE_clk_vframe_MASK     0x00000020
#define BCHP_DECODE_IP_SHIM_0_REG_AVD_CLK_GATE_clk_vframe_SHIFT    5

/* DECODE_IP_SHIM_0 :: REG_AVD_CLK_GATE :: clk_avc [04:04] */
#define BCHP_DECODE_IP_SHIM_0_REG_AVD_CLK_GATE_clk_avc_MASK        0x00000010
#define BCHP_DECODE_IP_SHIM_0_REG_AVD_CLK_GATE_clk_avc_SHIFT       4

/* DECODE_IP_SHIM_0 :: REG_AVD_CLK_GATE :: clk_vc1 [03:03] */
#define BCHP_DECODE_IP_SHIM_0_REG_AVD_CLK_GATE_clk_vc1_MASK        0x00000008
#define BCHP_DECODE_IP_SHIM_0_REG_AVD_CLK_GATE_clk_vc1_SHIFT       3

/* DECODE_IP_SHIM_0 :: REG_AVD_CLK_GATE :: clk_vc1_db [02:02] */
#define BCHP_DECODE_IP_SHIM_0_REG_AVD_CLK_GATE_clk_vc1_db_MASK     0x00000004
#define BCHP_DECODE_IP_SHIM_0_REG_AVD_CLK_GATE_clk_vc1_db_SHIFT    2

/* DECODE_IP_SHIM_0 :: REG_AVD_CLK_GATE :: clk_mp4 [01:01] */
#define BCHP_DECODE_IP_SHIM_0_REG_AVD_CLK_GATE_clk_mp4_MASK        0x00000002
#define BCHP_DECODE_IP_SHIM_0_REG_AVD_CLK_GATE_clk_mp4_SHIFT       1

/* DECODE_IP_SHIM_0 :: REG_AVD_CLK_GATE :: clk_mp2 [00:00] */
#define BCHP_DECODE_IP_SHIM_0_REG_AVD_CLK_GATE_clk_mp2_MASK        0x00000001
#define BCHP_DECODE_IP_SHIM_0_REG_AVD_CLK_GATE_clk_mp2_SHIFT       0

/***************************************************************************
 *DBI_TM_REG - Deblock Intercept Buffer TM register
 ***************************************************************************/
/* DECODE_IP_SHIM_0 :: DBI_TM_REG :: reserved0 [31:08] */
#define BCHP_DECODE_IP_SHIM_0_DBI_TM_REG_reserved0_MASK            0xffffff00
#define BCHP_DECODE_IP_SHIM_0_DBI_TM_REG_reserved0_SHIFT           8

/* DECODE_IP_SHIM_0 :: DBI_TM_REG :: Y_TM [07:04] */
#define BCHP_DECODE_IP_SHIM_0_DBI_TM_REG_Y_TM_MASK                 0x000000f0
#define BCHP_DECODE_IP_SHIM_0_DBI_TM_REG_Y_TM_SHIFT                4

/* DECODE_IP_SHIM_0 :: DBI_TM_REG :: UV_TM [03:00] */
#define BCHP_DECODE_IP_SHIM_0_DBI_TM_REG_UV_TM_MASK                0x0000000f
#define BCHP_DECODE_IP_SHIM_0_DBI_TM_REG_UV_TM_SHIFT               0

/***************************************************************************
 *ARC0_TM_REG - ARC TM Register
 ***************************************************************************/
/* DECODE_IP_SHIM_0 :: ARC0_TM_REG :: reserved0 [31:12] */
#define BCHP_DECODE_IP_SHIM_0_ARC0_TM_REG_reserved0_MASK           0xfffff000
#define BCHP_DECODE_IP_SHIM_0_ARC0_TM_REG_reserved0_SHIFT          12

/* DECODE_IP_SHIM_0 :: ARC0_TM_REG :: ISTORE_TM [11:08] */
#define BCHP_DECODE_IP_SHIM_0_ARC0_TM_REG_ISTORE_TM_MASK           0x00000f00
#define BCHP_DECODE_IP_SHIM_0_ARC0_TM_REG_ISTORE_TM_SHIFT          8

/* DECODE_IP_SHIM_0 :: ARC0_TM_REG :: DSTORE_TM [07:04] */
#define BCHP_DECODE_IP_SHIM_0_ARC0_TM_REG_DSTORE_TM_MASK           0x000000f0
#define BCHP_DECODE_IP_SHIM_0_ARC0_TM_REG_DSTORE_TM_SHIFT          4

/* DECODE_IP_SHIM_0 :: ARC0_TM_REG :: TAG_TM [03:00] */
#define BCHP_DECODE_IP_SHIM_0_ARC0_TM_REG_TAG_TM_MASK              0x0000000f
#define BCHP_DECODE_IP_SHIM_0_ARC0_TM_REG_TAG_TM_SHIFT             0

/***************************************************************************
 *ARC1_TM_REG - ARC TM Register
 ***************************************************************************/
/* DECODE_IP_SHIM_0 :: ARC1_TM_REG :: reserved0 [31:12] */
#define BCHP_DECODE_IP_SHIM_0_ARC1_TM_REG_reserved0_MASK           0xfffff000
#define BCHP_DECODE_IP_SHIM_0_ARC1_TM_REG_reserved0_SHIFT          12

/* DECODE_IP_SHIM_0 :: ARC1_TM_REG :: ISTORE_TM [11:08] */
#define BCHP_DECODE_IP_SHIM_0_ARC1_TM_REG_ISTORE_TM_MASK           0x00000f00
#define BCHP_DECODE_IP_SHIM_0_ARC1_TM_REG_ISTORE_TM_SHIFT          8

/* DECODE_IP_SHIM_0 :: ARC1_TM_REG :: DSTORE_TM [07:04] */
#define BCHP_DECODE_IP_SHIM_0_ARC1_TM_REG_DSTORE_TM_MASK           0x000000f0
#define BCHP_DECODE_IP_SHIM_0_ARC1_TM_REG_DSTORE_TM_SHIFT          4

/* DECODE_IP_SHIM_0 :: ARC1_TM_REG :: TAG_TM [03:00] */
#define BCHP_DECODE_IP_SHIM_0_ARC1_TM_REG_TAG_TM_MASK              0x0000000f
#define BCHP_DECODE_IP_SHIM_0_ARC1_TM_REG_TAG_TM_SHIFT             0

/***************************************************************************
 *CPU_DBG_TM_REG - CPU Debug FIFO TM Register
 ***************************************************************************/
/* DECODE_IP_SHIM_0 :: CPU_DBG_TM_REG :: reserved0 [31:04] */
#define BCHP_DECODE_IP_SHIM_0_CPU_DBG_TM_REG_reserved0_MASK        0xfffffff0
#define BCHP_DECODE_IP_SHIM_0_CPU_DBG_TM_REG_reserved0_SHIFT       4

/* DECODE_IP_SHIM_0 :: CPU_DBG_TM_REG :: TM [03:00] */
#define BCHP_DECODE_IP_SHIM_0_CPU_DBG_TM_REG_TM_MASK               0x0000000f
#define BCHP_DECODE_IP_SHIM_0_CPU_DBG_TM_REG_TM_SHIFT              0

/***************************************************************************
 *CABAC_TM_REG - CABAC TM Register
 ***************************************************************************/
/* DECODE_IP_SHIM_0 :: CABAC_TM_REG :: reserved0 [31:04] */
#define BCHP_DECODE_IP_SHIM_0_CABAC_TM_REG_reserved0_MASK          0xfffffff0
#define BCHP_DECODE_IP_SHIM_0_CABAC_TM_REG_reserved0_SHIFT         4

/* DECODE_IP_SHIM_0 :: CABAC_TM_REG :: TM [03:00] */
#define BCHP_DECODE_IP_SHIM_0_CABAC_TM_REG_TM_MASK                 0x0000000f
#define BCHP_DECODE_IP_SHIM_0_CABAC_TM_REG_TM_SHIFT                0

/***************************************************************************
 *DECODE_TM_REG - Decode TM Register
 ***************************************************************************/
/* DECODE_IP_SHIM_0 :: DECODE_TM_REG :: reserved0 [31:16] */
#define BCHP_DECODE_IP_SHIM_0_DECODE_TM_REG_reserved0_MASK         0xffff0000
#define BCHP_DECODE_IP_SHIM_0_DECODE_TM_REG_reserved0_SHIFT        16

/* DECODE_IP_SHIM_0 :: DECODE_TM_REG :: LBYUV_TM [15:12] */
#define BCHP_DECODE_IP_SHIM_0_DECODE_TM_REG_LBYUV_TM_MASK          0x0000f000
#define BCHP_DECODE_IP_SHIM_0_DECODE_TM_REG_LBYUV_TM_SHIFT         12

/* DECODE_IP_SHIM_0 :: DECODE_TM_REG :: PPBUF_2_TM [11:08] */
#define BCHP_DECODE_IP_SHIM_0_DECODE_TM_REG_PPBUF_2_TM_MASK        0x00000f00
#define BCHP_DECODE_IP_SHIM_0_DECODE_TM_REG_PPBUF_2_TM_SHIFT       8

/* DECODE_IP_SHIM_0 :: DECODE_TM_REG :: PPBUF_1_TM [07:04] */
#define BCHP_DECODE_IP_SHIM_0_DECODE_TM_REG_PPBUF_1_TM_MASK        0x000000f0
#define BCHP_DECODE_IP_SHIM_0_DECODE_TM_REG_PPBUF_1_TM_SHIFT       4

/* DECODE_IP_SHIM_0 :: DECODE_TM_REG :: PPBUF_0_TM [03:00] */
#define BCHP_DECODE_IP_SHIM_0_DECODE_TM_REG_PPBUF_0_TM_MASK        0x0000000f
#define BCHP_DECODE_IP_SHIM_0_DECODE_TM_REG_PPBUF_0_TM_SHIFT       0

/***************************************************************************
 *FRONTEND_FSRF_TM_REG - Frontend FSRF TM Register
 ***************************************************************************/
/* DECODE_IP_SHIM_0 :: FRONTEND_FSRF_TM_REG :: reserved0 [31:28] */
#define BCHP_DECODE_IP_SHIM_0_FRONTEND_FSRF_TM_REG_reserved0_MASK  0xf0000000
#define BCHP_DECODE_IP_SHIM_0_FRONTEND_FSRF_TM_REG_reserved0_SHIFT 28

/* DECODE_IP_SHIM_0 :: FRONTEND_FSRF_TM_REG :: CPUDMA_1K_256X8_3 [27:26] */
#define BCHP_DECODE_IP_SHIM_0_FRONTEND_FSRF_TM_REG_CPUDMA_1K_256X8_3_MASK 0x0c000000
#define BCHP_DECODE_IP_SHIM_0_FRONTEND_FSRF_TM_REG_CPUDMA_1K_256X8_3_SHIFT 26

/* DECODE_IP_SHIM_0 :: FRONTEND_FSRF_TM_REG :: CPUDMA_1K_256X8_2 [25:24] */
#define BCHP_DECODE_IP_SHIM_0_FRONTEND_FSRF_TM_REG_CPUDMA_1K_256X8_2_MASK 0x03000000
#define BCHP_DECODE_IP_SHIM_0_FRONTEND_FSRF_TM_REG_CPUDMA_1K_256X8_2_SHIFT 24

/* DECODE_IP_SHIM_0 :: FRONTEND_FSRF_TM_REG :: CPUDMA_1K_256X8_1 [23:22] */
#define BCHP_DECODE_IP_SHIM_0_FRONTEND_FSRF_TM_REG_CPUDMA_1K_256X8_1_MASK 0x00c00000
#define BCHP_DECODE_IP_SHIM_0_FRONTEND_FSRF_TM_REG_CPUDMA_1K_256X8_1_SHIFT 22

/* DECODE_IP_SHIM_0 :: FRONTEND_FSRF_TM_REG :: CPUDMA_1K_256X8_0 [21:20] */
#define BCHP_DECODE_IP_SHIM_0_FRONTEND_FSRF_TM_REG_CPUDMA_1K_256X8_0_MASK 0x00300000
#define BCHP_DECODE_IP_SHIM_0_FRONTEND_FSRF_TM_REG_CPUDMA_1K_256X8_0_SHIFT 20

/* DECODE_IP_SHIM_0 :: FRONTEND_FSRF_TM_REG :: CPUDMA_512_128X8_3 [19:18] */
#define BCHP_DECODE_IP_SHIM_0_FRONTEND_FSRF_TM_REG_CPUDMA_512_128X8_3_MASK 0x000c0000
#define BCHP_DECODE_IP_SHIM_0_FRONTEND_FSRF_TM_REG_CPUDMA_512_128X8_3_SHIFT 18

/* DECODE_IP_SHIM_0 :: FRONTEND_FSRF_TM_REG :: CPUDMA_512_128X8_2 [17:16] */
#define BCHP_DECODE_IP_SHIM_0_FRONTEND_FSRF_TM_REG_CPUDMA_512_128X8_2_MASK 0x00030000
#define BCHP_DECODE_IP_SHIM_0_FRONTEND_FSRF_TM_REG_CPUDMA_512_128X8_2_SHIFT 16

/* DECODE_IP_SHIM_0 :: FRONTEND_FSRF_TM_REG :: CPUDMA_512_128X8_1 [15:14] */
#define BCHP_DECODE_IP_SHIM_0_FRONTEND_FSRF_TM_REG_CPUDMA_512_128X8_1_MASK 0x0000c000
#define BCHP_DECODE_IP_SHIM_0_FRONTEND_FSRF_TM_REG_CPUDMA_512_128X8_1_SHIFT 14

/* DECODE_IP_SHIM_0 :: FRONTEND_FSRF_TM_REG :: CPUDMA_512_128X8_0 [13:12] */
#define BCHP_DECODE_IP_SHIM_0_FRONTEND_FSRF_TM_REG_CPUDMA_512_128X8_0_MASK 0x00003000
#define BCHP_DECODE_IP_SHIM_0_FRONTEND_FSRF_TM_REG_CPUDMA_512_128X8_0_SHIFT 12

/* DECODE_IP_SHIM_0 :: FRONTEND_FSRF_TM_REG :: CABAC_32X32 [11:10] */
#define BCHP_DECODE_IP_SHIM_0_FRONTEND_FSRF_TM_REG_CABAC_32X32_MASK 0x00000c00
#define BCHP_DECODE_IP_SHIM_0_FRONTEND_FSRF_TM_REG_CABAC_32X32_SHIFT 10

/* DECODE_IP_SHIM_0 :: FRONTEND_FSRF_TM_REG :: CABAC_464X7 [09:08] */
#define BCHP_DECODE_IP_SHIM_0_FRONTEND_FSRF_TM_REG_CABAC_464X7_MASK 0x00000300
#define BCHP_DECODE_IP_SHIM_0_FRONTEND_FSRF_TM_REG_CABAC_464X7_SHIFT 8

/* DECODE_IP_SHIM_0 :: FRONTEND_FSRF_TM_REG :: CABAC_64X32_2 [07:06] */
#define BCHP_DECODE_IP_SHIM_0_FRONTEND_FSRF_TM_REG_CABAC_64X32_2_MASK 0x000000c0
#define BCHP_DECODE_IP_SHIM_0_FRONTEND_FSRF_TM_REG_CABAC_64X32_2_SHIFT 6

/* DECODE_IP_SHIM_0 :: FRONTEND_FSRF_TM_REG :: CABAC_64X32_1 [05:04] */
#define BCHP_DECODE_IP_SHIM_0_FRONTEND_FSRF_TM_REG_CABAC_64X32_1_MASK 0x00000030
#define BCHP_DECODE_IP_SHIM_0_FRONTEND_FSRF_TM_REG_CABAC_64X32_1_SHIFT 4

/* DECODE_IP_SHIM_0 :: FRONTEND_FSRF_TM_REG :: CABAC_64X32_0 [03:02] */
#define BCHP_DECODE_IP_SHIM_0_FRONTEND_FSRF_TM_REG_CABAC_64X32_0_MASK 0x0000000c
#define BCHP_DECODE_IP_SHIM_0_FRONTEND_FSRF_TM_REG_CABAC_64X32_0_SHIFT 2

/* DECODE_IP_SHIM_0 :: FRONTEND_FSRF_TM_REG :: RVC_64X32 [01:00] */
#define BCHP_DECODE_IP_SHIM_0_FRONTEND_FSRF_TM_REG_RVC_64X32_MASK  0x00000003
#define BCHP_DECODE_IP_SHIM_0_FRONTEND_FSRF_TM_REG_RVC_64X32_SHIFT 0

/***************************************************************************
 *ARC_FSRF_TM_REG - ARC FSRF TM Register
 ***************************************************************************/
/* DECODE_IP_SHIM_0 :: ARC_FSRF_TM_REG :: reserved0 [31:08] */
#define BCHP_DECODE_IP_SHIM_0_ARC_FSRF_TM_REG_reserved0_MASK       0xffffff00
#define BCHP_DECODE_IP_SHIM_0_ARC_FSRF_TM_REG_reserved0_SHIFT      8

/* DECODE_IP_SHIM_0 :: ARC_FSRF_TM_REG :: OLARC_32X32_1 [07:06] */
#define BCHP_DECODE_IP_SHIM_0_ARC_FSRF_TM_REG_OLARC_32X32_1_MASK   0x000000c0
#define BCHP_DECODE_IP_SHIM_0_ARC_FSRF_TM_REG_OLARC_32X32_1_SHIFT  6

/* DECODE_IP_SHIM_0 :: ARC_FSRF_TM_REG :: OLARC_32X32_0 [05:04] */
#define BCHP_DECODE_IP_SHIM_0_ARC_FSRF_TM_REG_OLARC_32X32_0_MASK   0x00000030
#define BCHP_DECODE_IP_SHIM_0_ARC_FSRF_TM_REG_OLARC_32X32_0_SHIFT  4

/* DECODE_IP_SHIM_0 :: ARC_FSRF_TM_REG :: ILARC_32X32_1 [03:02] */
#define BCHP_DECODE_IP_SHIM_0_ARC_FSRF_TM_REG_ILARC_32X32_1_MASK   0x0000000c
#define BCHP_DECODE_IP_SHIM_0_ARC_FSRF_TM_REG_ILARC_32X32_1_SHIFT  2

/* DECODE_IP_SHIM_0 :: ARC_FSRF_TM_REG :: ILARC_32X32_0 [01:00] */
#define BCHP_DECODE_IP_SHIM_0_ARC_FSRF_TM_REG_ILARC_32X32_0_MASK   0x00000003
#define BCHP_DECODE_IP_SHIM_0_ARC_FSRF_TM_REG_ILARC_32X32_0_SHIFT  0

/***************************************************************************
 *SHIM_FSRF_TM_REG - SHIM FSRF TM Register
 ***************************************************************************/
/* DECODE_IP_SHIM_0 :: SHIM_FSRF_TM_REG :: AVD_REGS_96X32 [31:30] */
#define BCHP_DECODE_IP_SHIM_0_SHIM_FSRF_TM_REG_AVD_REGS_96X32_MASK 0xc0000000
#define BCHP_DECODE_IP_SHIM_0_SHIM_FSRF_TM_REG_AVD_REGS_96X32_SHIFT 30

/* DECODE_IP_SHIM_0 :: SHIM_FSRF_TM_REG :: reserved0 [29:00] */
#define BCHP_DECODE_IP_SHIM_0_SHIM_FSRF_TM_REG_reserved0_MASK      0x3fffffff
#define BCHP_DECODE_IP_SHIM_0_SHIM_FSRF_TM_REG_reserved0_SHIFT     0

/***************************************************************************
 *DECODE_FSRF_TM_REG - DECODE FSRF TM Register
 ***************************************************************************/
/* DECODE_IP_SHIM_0 :: DECODE_FSRF_TM_REG :: DECODE_64X8 [31:30] */
#define BCHP_DECODE_IP_SHIM_0_DECODE_FSRF_TM_REG_DECODE_64X8_MASK  0xc0000000
#define BCHP_DECODE_IP_SHIM_0_DECODE_FSRF_TM_REG_DECODE_64X8_SHIFT 30

/* DECODE_IP_SHIM_0 :: DECODE_FSRF_TM_REG :: DECODE_64X32_1 [29:28] */
#define BCHP_DECODE_IP_SHIM_0_DECODE_FSRF_TM_REG_DECODE_64X32_1_MASK 0x30000000
#define BCHP_DECODE_IP_SHIM_0_DECODE_FSRF_TM_REG_DECODE_64X32_1_SHIFT 28

/* DECODE_IP_SHIM_0 :: DECODE_FSRF_TM_REG :: DECODE_64X32_0 [27:26] */
#define BCHP_DECODE_IP_SHIM_0_DECODE_FSRF_TM_REG_DECODE_64X32_0_MASK 0x0c000000
#define BCHP_DECODE_IP_SHIM_0_DECODE_FSRF_TM_REG_DECODE_64X32_0_SHIFT 26

/* DECODE_IP_SHIM_0 :: DECODE_FSRF_TM_REG :: DECODE_64X16_3 [25:24] */
#define BCHP_DECODE_IP_SHIM_0_DECODE_FSRF_TM_REG_DECODE_64X16_3_MASK 0x03000000
#define BCHP_DECODE_IP_SHIM_0_DECODE_FSRF_TM_REG_DECODE_64X16_3_SHIFT 24

/* DECODE_IP_SHIM_0 :: DECODE_FSRF_TM_REG :: DECODE_64X16_2 [23:22] */
#define BCHP_DECODE_IP_SHIM_0_DECODE_FSRF_TM_REG_DECODE_64X16_2_MASK 0x00c00000
#define BCHP_DECODE_IP_SHIM_0_DECODE_FSRF_TM_REG_DECODE_64X16_2_SHIFT 22

/* DECODE_IP_SHIM_0 :: DECODE_FSRF_TM_REG :: DECODE_64X16_1 [21:20] */
#define BCHP_DECODE_IP_SHIM_0_DECODE_FSRF_TM_REG_DECODE_64X16_1_MASK 0x00300000
#define BCHP_DECODE_IP_SHIM_0_DECODE_FSRF_TM_REG_DECODE_64X16_1_SHIFT 20

/* DECODE_IP_SHIM_0 :: DECODE_FSRF_TM_REG :: DECODE_64X16_0 [19:18] */
#define BCHP_DECODE_IP_SHIM_0_DECODE_FSRF_TM_REG_DECODE_64X16_0_MASK 0x000c0000
#define BCHP_DECODE_IP_SHIM_0_DECODE_FSRF_TM_REG_DECODE_64X16_0_SHIFT 18

/* DECODE_IP_SHIM_0 :: DECODE_FSRF_TM_REG :: DECODE_128X40_1 [17:16] */
#define BCHP_DECODE_IP_SHIM_0_DECODE_FSRF_TM_REG_DECODE_128X40_1_MASK 0x00030000
#define BCHP_DECODE_IP_SHIM_0_DECODE_FSRF_TM_REG_DECODE_128X40_1_SHIFT 16

/* DECODE_IP_SHIM_0 :: DECODE_FSRF_TM_REG :: DECODE_128X40_0 [15:14] */
#define BCHP_DECODE_IP_SHIM_0_DECODE_FSRF_TM_REG_DECODE_128X40_0_MASK 0x0000c000
#define BCHP_DECODE_IP_SHIM_0_DECODE_FSRF_TM_REG_DECODE_128X40_0_SHIFT 14

/* DECODE_IP_SHIM_0 :: DECODE_FSRF_TM_REG :: DECODE_128X32 [13:12] */
#define BCHP_DECODE_IP_SHIM_0_DECODE_FSRF_TM_REG_DECODE_128X32_MASK 0x00003000
#define BCHP_DECODE_IP_SHIM_0_DECODE_FSRF_TM_REG_DECODE_128X32_SHIFT 12

/* DECODE_IP_SHIM_0 :: DECODE_FSRF_TM_REG :: QPEL_256x32_1 [11:10] */
#define BCHP_DECODE_IP_SHIM_0_DECODE_FSRF_TM_REG_QPEL_256x32_1_MASK 0x00000c00
#define BCHP_DECODE_IP_SHIM_0_DECODE_FSRF_TM_REG_QPEL_256x32_1_SHIFT 10

/* DECODE_IP_SHIM_0 :: DECODE_FSRF_TM_REG :: DECODE_256X16_1 [09:08] */
#define BCHP_DECODE_IP_SHIM_0_DECODE_FSRF_TM_REG_DECODE_256X16_1_MASK 0x00000300
#define BCHP_DECODE_IP_SHIM_0_DECODE_FSRF_TM_REG_DECODE_256X16_1_SHIFT 8

/* DECODE_IP_SHIM_0 :: DECODE_FSRF_TM_REG :: DECODE_256X16_0 [07:06] */
#define BCHP_DECODE_IP_SHIM_0_DECODE_FSRF_TM_REG_DECODE_256X16_0_MASK 0x000000c0
#define BCHP_DECODE_IP_SHIM_0_DECODE_FSRF_TM_REG_DECODE_256X16_0_SHIFT 6

/* DECODE_IP_SHIM_0 :: DECODE_FSRF_TM_REG :: PPBUF_256_256X36 [05:04] */
#define BCHP_DECODE_IP_SHIM_0_DECODE_FSRF_TM_REG_PPBUF_256_256X36_MASK 0x00000030
#define BCHP_DECODE_IP_SHIM_0_DECODE_FSRF_TM_REG_PPBUF_256_256X36_SHIFT 4

/* DECODE_IP_SHIM_0 :: DECODE_FSRF_TM_REG :: PPBUF_128_128X36 [03:02] */
#define BCHP_DECODE_IP_SHIM_0_DECODE_FSRF_TM_REG_PPBUF_128_128X36_MASK 0x0000000c
#define BCHP_DECODE_IP_SHIM_0_DECODE_FSRF_TM_REG_PPBUF_128_128X36_SHIFT 2

/* DECODE_IP_SHIM_0 :: DECODE_FSRF_TM_REG :: QPEL_256x32_0 [01:00] */
#define BCHP_DECODE_IP_SHIM_0_DECODE_FSRF_TM_REG_QPEL_256x32_0_MASK 0x00000003
#define BCHP_DECODE_IP_SHIM_0_DECODE_FSRF_TM_REG_QPEL_256x32_0_SHIFT 0

/***************************************************************************
 *DEBLOCK_FSRF_TM_REG - DEBLOCK FSRF TM Register
 ***************************************************************************/
/* DECODE_IP_SHIM_0 :: DEBLOCK_FSRF_TM_REG :: reserved0 [31:16] */
#define BCHP_DECODE_IP_SHIM_0_DEBLOCK_FSRF_TM_REG_reserved0_MASK   0xffff0000
#define BCHP_DECODE_IP_SHIM_0_DEBLOCK_FSRF_TM_REG_reserved0_SHIFT  16

/* DECODE_IP_SHIM_0 :: DEBLOCK_FSRF_TM_REG :: DB_128X36 [15:14] */
#define BCHP_DECODE_IP_SHIM_0_DEBLOCK_FSRF_TM_REG_DB_128X36_MASK   0x0000c000
#define BCHP_DECODE_IP_SHIM_0_DEBLOCK_FSRF_TM_REG_DB_128X36_SHIFT  14

/* DECODE_IP_SHIM_0 :: DEBLOCK_FSRF_TM_REG :: DB_64X32_1 [13:12] */
#define BCHP_DECODE_IP_SHIM_0_DEBLOCK_FSRF_TM_REG_DB_64X32_1_MASK  0x00003000
#define BCHP_DECODE_IP_SHIM_0_DEBLOCK_FSRF_TM_REG_DB_64X32_1_SHIFT 12

/* DECODE_IP_SHIM_0 :: DEBLOCK_FSRF_TM_REG :: DB_64X32_0 [11:10] */
#define BCHP_DECODE_IP_SHIM_0_DEBLOCK_FSRF_TM_REG_DB_64X32_0_MASK  0x00000c00
#define BCHP_DECODE_IP_SHIM_0_DEBLOCK_FSRF_TM_REG_DB_64X32_0_SHIFT 10

/* DECODE_IP_SHIM_0 :: DEBLOCK_FSRF_TM_REG :: DB_336X32_1 [09:08] */
#define BCHP_DECODE_IP_SHIM_0_DEBLOCK_FSRF_TM_REG_DB_336X32_1_MASK 0x00000300
#define BCHP_DECODE_IP_SHIM_0_DEBLOCK_FSRF_TM_REG_DB_336X32_1_SHIFT 8

/* DECODE_IP_SHIM_0 :: DEBLOCK_FSRF_TM_REG :: DB_336X32_0 [07:06] */
#define BCHP_DECODE_IP_SHIM_0_DEBLOCK_FSRF_TM_REG_DB_336X32_0_MASK 0x000000c0
#define BCHP_DECODE_IP_SHIM_0_DEBLOCK_FSRF_TM_REG_DB_336X32_0_SHIFT 6

/* DECODE_IP_SHIM_0 :: DEBLOCK_FSRF_TM_REG :: DB_32X24 [05:04] */
#define BCHP_DECODE_IP_SHIM_0_DEBLOCK_FSRF_TM_REG_DB_32X24_MASK    0x00000030
#define BCHP_DECODE_IP_SHIM_0_DEBLOCK_FSRF_TM_REG_DB_32X24_SHIFT   4

/* DECODE_IP_SHIM_0 :: DEBLOCK_FSRF_TM_REG :: DB_192X44_1 [03:02] */
#define BCHP_DECODE_IP_SHIM_0_DEBLOCK_FSRF_TM_REG_DB_192X44_1_MASK 0x0000000c
#define BCHP_DECODE_IP_SHIM_0_DEBLOCK_FSRF_TM_REG_DB_192X44_1_SHIFT 2

/* DECODE_IP_SHIM_0 :: DEBLOCK_FSRF_TM_REG :: DB_192X44_0 [01:00] */
#define BCHP_DECODE_IP_SHIM_0_DEBLOCK_FSRF_TM_REG_DB_192X44_0_MASK 0x00000003
#define BCHP_DECODE_IP_SHIM_0_DEBLOCK_FSRF_TM_REG_DB_192X44_0_SHIFT 0

/***************************************************************************
 *IXFORM_FSRF_TM_REG - IXFORM FSRF TM Register
 ***************************************************************************/
/* DECODE_IP_SHIM_0 :: IXFORM_FSRF_TM_REG :: reserved0 [31:18] */
#define BCHP_DECODE_IP_SHIM_0_IXFORM_FSRF_TM_REG_reserved0_MASK    0xfffc0000
#define BCHP_DECODE_IP_SHIM_0_IXFORM_FSRF_TM_REG_reserved0_SHIFT   18

/* DECODE_IP_SHIM_0 :: IXFORM_FSRF_TM_REG :: QPEL_128X14 [17:16] */
#define BCHP_DECODE_IP_SHIM_0_IXFORM_FSRF_TM_REG_QPEL_128X14_MASK  0x00030000
#define BCHP_DECODE_IP_SHIM_0_IXFORM_FSRF_TM_REG_QPEL_128X14_SHIFT 16

/* DECODE_IP_SHIM_0 :: IXFORM_FSRF_TM_REG :: IXFRM_128X20 [15:14] */
#define BCHP_DECODE_IP_SHIM_0_IXFORM_FSRF_TM_REG_IXFRM_128X20_MASK 0x0000c000
#define BCHP_DECODE_IP_SHIM_0_IXFORM_FSRF_TM_REG_IXFRM_128X20_SHIFT 14

/* DECODE_IP_SHIM_0 :: IXFORM_FSRF_TM_REG :: VC1_128X12 [13:12] */
#define BCHP_DECODE_IP_SHIM_0_IXFORM_FSRF_TM_REG_VC1_128X12_MASK   0x00003000
#define BCHP_DECODE_IP_SHIM_0_IXFORM_FSRF_TM_REG_VC1_128X12_SHIFT  12

/* DECODE_IP_SHIM_0 :: IXFORM_FSRF_TM_REG :: VC1_128X18 [11:10] */
#define BCHP_DECODE_IP_SHIM_0_IXFORM_FSRF_TM_REG_VC1_128X18_MASK   0x00000c00
#define BCHP_DECODE_IP_SHIM_0_IXFORM_FSRF_TM_REG_VC1_128X18_SHIFT  10

/* DECODE_IP_SHIM_0 :: IXFORM_FSRF_TM_REG :: IXFRM_256X20 [09:08] */
#define BCHP_DECODE_IP_SHIM_0_IXFORM_FSRF_TM_REG_IXFRM_256X20_MASK 0x00000300
#define BCHP_DECODE_IP_SHIM_0_IXFORM_FSRF_TM_REG_IXFRM_256X20_SHIFT 8

/* DECODE_IP_SHIM_0 :: IXFORM_FSRF_TM_REG :: IDCT_128X16 [07:06] */
#define BCHP_DECODE_IP_SHIM_0_IXFORM_FSRF_TM_REG_IDCT_128X16_MASK  0x000000c0
#define BCHP_DECODE_IP_SHIM_0_IXFORM_FSRF_TM_REG_IDCT_128X16_SHIFT 6

/* DECODE_IP_SHIM_0 :: IXFORM_FSRF_TM_REG :: IDCT_128X24 [05:04] */
#define BCHP_DECODE_IP_SHIM_0_IXFORM_FSRF_TM_REG_IDCT_128X24_MASK  0x00000030
#define BCHP_DECODE_IP_SHIM_0_IXFORM_FSRF_TM_REG_IDCT_128X24_SHIFT 4

/* DECODE_IP_SHIM_0 :: IXFORM_FSRF_TM_REG :: IDCT_32X32 [03:02] */
#define BCHP_DECODE_IP_SHIM_0_IXFORM_FSRF_TM_REG_IDCT_32X32_MASK   0x0000000c
#define BCHP_DECODE_IP_SHIM_0_IXFORM_FSRF_TM_REG_IDCT_32X32_SHIFT  2

/* DECODE_IP_SHIM_0 :: IXFORM_FSRF_TM_REG :: IXFRM_32X32 [01:00] */
#define BCHP_DECODE_IP_SHIM_0_IXFORM_FSRF_TM_REG_IXFRM_32X32_MASK  0x00000003
#define BCHP_DECODE_IP_SHIM_0_IXFORM_FSRF_TM_REG_IXFRM_32X32_SHIFT 0

/***************************************************************************
 *SI_FSRF_TM_REG - SI FSRF TM Register
 ***************************************************************************/
/* DECODE_IP_SHIM_0 :: SI_FSRF_TM_REG :: reserved0 [31:18] */
#define BCHP_DECODE_IP_SHIM_0_SI_FSRF_TM_REG_reserved0_MASK        0xfffc0000
#define BCHP_DECODE_IP_SHIM_0_SI_FSRF_TM_REG_reserved0_SHIFT       18

/* DECODE_IP_SHIM_0 :: SI_FSRF_TM_REG :: OLSI_128X32 [17:16] */
#define BCHP_DECODE_IP_SHIM_0_SI_FSRF_TM_REG_OLSI_128X32_MASK      0x00030000
#define BCHP_DECODE_IP_SHIM_0_SI_FSRF_TM_REG_OLSI_128X32_SHIFT     16

/* DECODE_IP_SHIM_0 :: SI_FSRF_TM_REG :: ILSI_128X32 [15:14] */
#define BCHP_DECODE_IP_SHIM_0_SI_FSRF_TM_REG_ILSI_128X32_MASK      0x0000c000
#define BCHP_DECODE_IP_SHIM_0_SI_FSRF_TM_REG_ILSI_128X32_SHIFT     14

/* DECODE_IP_SHIM_0 :: SI_FSRF_TM_REG :: ILSI_128X8_2 [13:12] */
#define BCHP_DECODE_IP_SHIM_0_SI_FSRF_TM_REG_ILSI_128X8_2_MASK     0x00003000
#define BCHP_DECODE_IP_SHIM_0_SI_FSRF_TM_REG_ILSI_128X8_2_SHIFT    12

/* DECODE_IP_SHIM_0 :: SI_FSRF_TM_REG :: ILSI_128X8_1 [11:10] */
#define BCHP_DECODE_IP_SHIM_0_SI_FSRF_TM_REG_ILSI_128X8_1_MASK     0x00000c00
#define BCHP_DECODE_IP_SHIM_0_SI_FSRF_TM_REG_ILSI_128X8_1_SHIFT    10

/* DECODE_IP_SHIM_0 :: SI_FSRF_TM_REG :: ILSI_128X8_0 [09:08] */
#define BCHP_DECODE_IP_SHIM_0_SI_FSRF_TM_REG_ILSI_128X8_0_MASK     0x00000300
#define BCHP_DECODE_IP_SHIM_0_SI_FSRF_TM_REG_ILSI_128X8_0_SHIFT    8

/* DECODE_IP_SHIM_0 :: SI_FSRF_TM_REG :: ILSI_256X32 [07:06] */
#define BCHP_DECODE_IP_SHIM_0_SI_FSRF_TM_REG_ILSI_256X32_MASK      0x000000c0
#define BCHP_DECODE_IP_SHIM_0_SI_FSRF_TM_REG_ILSI_256X32_SHIFT     6

/* DECODE_IP_SHIM_0 :: SI_FSRF_TM_REG :: ILSI_32X32 [05:04] */
#define BCHP_DECODE_IP_SHIM_0_SI_FSRF_TM_REG_ILSI_32X32_MASK       0x00000030
#define BCHP_DECODE_IP_SHIM_0_SI_FSRF_TM_REG_ILSI_32X32_SHIFT      4

/* DECODE_IP_SHIM_0 :: SI_FSRF_TM_REG :: ILSI_64X32_1 [03:02] */
#define BCHP_DECODE_IP_SHIM_0_SI_FSRF_TM_REG_ILSI_64X32_1_MASK     0x0000000c
#define BCHP_DECODE_IP_SHIM_0_SI_FSRF_TM_REG_ILSI_64X32_1_SHIFT    2

/* DECODE_IP_SHIM_0 :: SI_FSRF_TM_REG :: ILSI_64X32_0 [01:00] */
#define BCHP_DECODE_IP_SHIM_0_SI_FSRF_TM_REG_ILSI_64X32_0_MASK     0x00000003
#define BCHP_DECODE_IP_SHIM_0_SI_FSRF_TM_REG_ILSI_64X32_0_SHIFT    0

/***************************************************************************
 *FGTAVE_FSRF_TM_REG - FGTAVE FSRF TM Register
 ***************************************************************************/
/* DECODE_IP_SHIM_0 :: FGTAVE_FSRF_TM_REG :: reserved0 [31:20] */
#define BCHP_DECODE_IP_SHIM_0_FGTAVE_FSRF_TM_REG_reserved0_MASK    0xfff00000
#define BCHP_DECODE_IP_SHIM_0_FGTAVE_FSRF_TM_REG_reserved0_SHIFT   20

/* DECODE_IP_SHIM_0 :: FGTAVE_FSRF_TM_REG :: FGTAVE_128X32 [19:18] */
#define BCHP_DECODE_IP_SHIM_0_FGTAVE_FSRF_TM_REG_FGTAVE_128X32_MASK 0x000c0000
#define BCHP_DECODE_IP_SHIM_0_FGTAVE_FSRF_TM_REG_FGTAVE_128X32_SHIFT 18

/* DECODE_IP_SHIM_0 :: FGTAVE_FSRF_TM_REG :: FGTAVE_128X16_1 [17:16] */
#define BCHP_DECODE_IP_SHIM_0_FGTAVE_FSRF_TM_REG_FGTAVE_128X16_1_MASK 0x00030000
#define BCHP_DECODE_IP_SHIM_0_FGTAVE_FSRF_TM_REG_FGTAVE_128X16_1_SHIFT 16

/* DECODE_IP_SHIM_0 :: FGTAVE_FSRF_TM_REG :: FGTAVE_128X16_0 [15:14] */
#define BCHP_DECODE_IP_SHIM_0_FGTAVE_FSRF_TM_REG_FGTAVE_128X16_0_MASK 0x0000c000
#define BCHP_DECODE_IP_SHIM_0_FGTAVE_FSRF_TM_REG_FGTAVE_128X16_0_SHIFT 14

/* DECODE_IP_SHIM_0 :: FGTAVE_FSRF_TM_REG :: FGTAVE_16X28 [13:12] */
#define BCHP_DECODE_IP_SHIM_0_FGTAVE_FSRF_TM_REG_FGTAVE_16X28_MASK 0x00003000
#define BCHP_DECODE_IP_SHIM_0_FGTAVE_FSRF_TM_REG_FGTAVE_16X28_SHIFT 12

/* DECODE_IP_SHIM_0 :: FGTAVE_FSRF_TM_REG :: FGTAVE_240X32_5 [11:10] */
#define BCHP_DECODE_IP_SHIM_0_FGTAVE_FSRF_TM_REG_FGTAVE_240X32_5_MASK 0x00000c00
#define BCHP_DECODE_IP_SHIM_0_FGTAVE_FSRF_TM_REG_FGTAVE_240X32_5_SHIFT 10

/* DECODE_IP_SHIM_0 :: FGTAVE_FSRF_TM_REG :: FGTAVE_240X32_4 [09:08] */
#define BCHP_DECODE_IP_SHIM_0_FGTAVE_FSRF_TM_REG_FGTAVE_240X32_4_MASK 0x00000300
#define BCHP_DECODE_IP_SHIM_0_FGTAVE_FSRF_TM_REG_FGTAVE_240X32_4_SHIFT 8

/* DECODE_IP_SHIM_0 :: FGTAVE_FSRF_TM_REG :: FGTAVE_240X32_3 [07:06] */
#define BCHP_DECODE_IP_SHIM_0_FGTAVE_FSRF_TM_REG_FGTAVE_240X32_3_MASK 0x000000c0
#define BCHP_DECODE_IP_SHIM_0_FGTAVE_FSRF_TM_REG_FGTAVE_240X32_3_SHIFT 6

/* DECODE_IP_SHIM_0 :: FGTAVE_FSRF_TM_REG :: FGTAVE_240X32_2 [05:04] */
#define BCHP_DECODE_IP_SHIM_0_FGTAVE_FSRF_TM_REG_FGTAVE_240X32_2_MASK 0x00000030
#define BCHP_DECODE_IP_SHIM_0_FGTAVE_FSRF_TM_REG_FGTAVE_240X32_2_SHIFT 4

/* DECODE_IP_SHIM_0 :: FGTAVE_FSRF_TM_REG :: FGTAVE_240X32_1 [03:02] */
#define BCHP_DECODE_IP_SHIM_0_FGTAVE_FSRF_TM_REG_FGTAVE_240X32_1_MASK 0x0000000c
#define BCHP_DECODE_IP_SHIM_0_FGTAVE_FSRF_TM_REG_FGTAVE_240X32_1_SHIFT 2

/* DECODE_IP_SHIM_0 :: FGTAVE_FSRF_TM_REG :: FGTAVE_240X32_0 [01:00] */
#define BCHP_DECODE_IP_SHIM_0_FGTAVE_FSRF_TM_REG_FGTAVE_240X32_0_MASK 0x00000003
#define BCHP_DECODE_IP_SHIM_0_FGTAVE_FSRF_TM_REG_FGTAVE_240X32_0_SHIFT 0

/***************************************************************************
 *PCACHE_FSRF_TM_REG - PCACHE FSRF TM Register
 ***************************************************************************/
/* DECODE_IP_SHIM_0 :: PCACHE_FSRF_TM_REG :: reserved0 [31:16] */
#define BCHP_DECODE_IP_SHIM_0_PCACHE_FSRF_TM_REG_reserved0_MASK    0xffff0000
#define BCHP_DECODE_IP_SHIM_0_PCACHE_FSRF_TM_REG_reserved0_SHIFT   16

/* DECODE_IP_SHIM_0 :: PCACHE_FSRF_TM_REG :: PCACHE_6 [15:14] */
#define BCHP_DECODE_IP_SHIM_0_PCACHE_FSRF_TM_REG_PCACHE_6_MASK     0x0000c000
#define BCHP_DECODE_IP_SHIM_0_PCACHE_FSRF_TM_REG_PCACHE_6_SHIFT    14

/* DECODE_IP_SHIM_0 :: PCACHE_FSRF_TM_REG :: PCACHE_5 [13:12] */
#define BCHP_DECODE_IP_SHIM_0_PCACHE_FSRF_TM_REG_PCACHE_5_MASK     0x00003000
#define BCHP_DECODE_IP_SHIM_0_PCACHE_FSRF_TM_REG_PCACHE_5_SHIFT    12

/* DECODE_IP_SHIM_0 :: PCACHE_FSRF_TM_REG :: PCACHE_4 [11:08] */
#define BCHP_DECODE_IP_SHIM_0_PCACHE_FSRF_TM_REG_PCACHE_4_MASK     0x00000f00
#define BCHP_DECODE_IP_SHIM_0_PCACHE_FSRF_TM_REG_PCACHE_4_SHIFT    8

/* DECODE_IP_SHIM_0 :: PCACHE_FSRF_TM_REG :: PCACHE_3 [07:06] */
#define BCHP_DECODE_IP_SHIM_0_PCACHE_FSRF_TM_REG_PCACHE_3_MASK     0x000000c0
#define BCHP_DECODE_IP_SHIM_0_PCACHE_FSRF_TM_REG_PCACHE_3_SHIFT    6

/* DECODE_IP_SHIM_0 :: PCACHE_FSRF_TM_REG :: PCACHE_2 [05:04] */
#define BCHP_DECODE_IP_SHIM_0_PCACHE_FSRF_TM_REG_PCACHE_2_MASK     0x00000030
#define BCHP_DECODE_IP_SHIM_0_PCACHE_FSRF_TM_REG_PCACHE_2_SHIFT    4

/* DECODE_IP_SHIM_0 :: PCACHE_FSRF_TM_REG :: PCACHE_1 [03:02] */
#define BCHP_DECODE_IP_SHIM_0_PCACHE_FSRF_TM_REG_PCACHE_1_MASK     0x0000000c
#define BCHP_DECODE_IP_SHIM_0_PCACHE_FSRF_TM_REG_PCACHE_1_SHIFT    2

/* DECODE_IP_SHIM_0 :: PCACHE_FSRF_TM_REG :: PCACHE_0 [01:00] */
#define BCHP_DECODE_IP_SHIM_0_PCACHE_FSRF_TM_REG_PCACHE_0_MASK     0x00000003
#define BCHP_DECODE_IP_SHIM_0_PCACHE_FSRF_TM_REG_PCACHE_0_SHIFT    0

/***************************************************************************
 *HST_SCRATCH_RAM_ADDR_REG - Scratch RAM Address
 ***************************************************************************/
/* DECODE_IP_SHIM_0 :: HST_SCRATCH_RAM_ADDR_REG :: reserved0 [31:07] */
#define BCHP_DECODE_IP_SHIM_0_HST_SCRATCH_RAM_ADDR_REG_reserved0_MASK 0xffffff80
#define BCHP_DECODE_IP_SHIM_0_HST_SCRATCH_RAM_ADDR_REG_reserved0_SHIFT 7

/* DECODE_IP_SHIM_0 :: HST_SCRATCH_RAM_ADDR_REG :: Addr [06:00] */
#define BCHP_DECODE_IP_SHIM_0_HST_SCRATCH_RAM_ADDR_REG_Addr_MASK   0x0000007f
#define BCHP_DECODE_IP_SHIM_0_HST_SCRATCH_RAM_ADDR_REG_Addr_SHIFT  0

/***************************************************************************
 *ARC_SCRATCH_RAM_ADDR_REG - Scratch RAM Address
 ***************************************************************************/
/* DECODE_IP_SHIM_0 :: ARC_SCRATCH_RAM_ADDR_REG :: reserved0 [31:07] */
#define BCHP_DECODE_IP_SHIM_0_ARC_SCRATCH_RAM_ADDR_REG_reserved0_MASK 0xffffff80
#define BCHP_DECODE_IP_SHIM_0_ARC_SCRATCH_RAM_ADDR_REG_reserved0_SHIFT 7

/* DECODE_IP_SHIM_0 :: ARC_SCRATCH_RAM_ADDR_REG :: Addr [06:00] */
#define BCHP_DECODE_IP_SHIM_0_ARC_SCRATCH_RAM_ADDR_REG_Addr_MASK   0x0000007f
#define BCHP_DECODE_IP_SHIM_0_ARC_SCRATCH_RAM_ADDR_REG_Addr_SHIFT  0

/***************************************************************************
 *HST_SCRATCH_RAM_DATA_REG - Scratch RAM Data
 ***************************************************************************/
/* DECODE_IP_SHIM_0 :: HST_SCRATCH_RAM_DATA_REG :: Data [31:00] */
#define BCHP_DECODE_IP_SHIM_0_HST_SCRATCH_RAM_DATA_REG_Data_MASK   0xffffffff
#define BCHP_DECODE_IP_SHIM_0_HST_SCRATCH_RAM_DATA_REG_Data_SHIFT  0

/***************************************************************************
 *ARC_SCRATCH_RAM_DATA_REG - Scratch RAM Data
 ***************************************************************************/
/* DECODE_IP_SHIM_0 :: ARC_SCRATCH_RAM_DATA_REG :: Data [31:00] */
#define BCHP_DECODE_IP_SHIM_0_ARC_SCRATCH_RAM_DATA_REG_Data_MASK   0xffffffff
#define BCHP_DECODE_IP_SHIM_0_ARC_SCRATCH_RAM_DATA_REG_Data_SHIFT  0

#endif /* #ifndef BCHP_DECODE_IP_SHIM_0_H__ */

/* End of File */