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
 * $brcm_Workfile: bchp_xpt_xmemif.h $
 * $brcm_Revision: Hydra_Software_Devel/1 $
 * $brcm_Date: 7/17/09 8:27p $
 *
 * Module Description:
 *                     DO NOT EDIT THIS FILE DIRECTLY
 *
 * This module was generated magically with RDB from a source description
 * file. You must edit the source file for changes to be made to this file.
 *
 *
 * Date:           Generated on         Fri Jul 17 19:43:10 2009
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
 * $brcm_Log: /magnum/basemodules/chp/70015/rdb/a0/bchp_xpt_xmemif.h $
 * 
 * Hydra_Software_Devel/1   7/17/09 8:27p albertl
 * PR56880: Initial revision.
 *
 ***************************************************************************/

#ifndef BCHP_XPT_XMEMIF_H__
#define BCHP_XPT_XMEMIF_H__

/***************************************************************************
 *XPT_XMEMIF - XPT XMEMIF Control Registers
 ***************************************************************************/
#define BCHP_XPT_XMEMIF_SCB_WR_ARB_SEL_RAVE_CDB  0x00202008 /* SCB Write Client select register for RAVE CDB */
#define BCHP_XPT_XMEMIF_SCB_WR_ARB_SEL_RAVE_ITB  0x0020200c /* SCB Write Client select register for RAVE ITB */
#define BCHP_XPT_XMEMIF_SCB_WR_ARB_MODE          0x00202040 /* SCB Write Client Arbiter Mode Control */
#define BCHP_XPT_XMEMIF_SCB_RD_ARB_MODE          0x00202044 /* SCB Read Client Arbiter Mode Control */
#define BCHP_XPT_XMEMIF_TM_SCB_WR_DBUF0          0x00202048 /* TM Control */
#define BCHP_XPT_XMEMIF_TM_SCB_WR_DBUF1          0x0020204c /* TM Control */
#define BCHP_XPT_XMEMIF_TM_SCB_RD_DBUF0          0x00202050 /* TM Control */
#define BCHP_XPT_XMEMIF_TM_SCB_RD_DBUF1          0x00202054 /* TM Control */
#define BCHP_XPT_XMEMIF_WR_DEBUG                 0x00202058 /* Debug and Test register for XMEMIF write */
#define BCHP_XPT_XMEMIF_RD_DEBUG                 0x0020205c /* Debug and Test register for XMEMIF read */
#define BCHP_XPT_XMEMIF_INTR_STATUS_REG          0x00202060 /* Interrupt Status Register */
#define BCHP_XPT_XMEMIF_INTR_STATUS_REG_EN       0x00202064 /* Interrupt Status Enable Register */

/***************************************************************************
 *SCB_WR_ARB_SEL_RAVE_CDB - SCB Write Client select register for RAVE CDB
 ***************************************************************************/
/* XPT_XMEMIF :: SCB_WR_ARB_SEL_RAVE_CDB :: reserved0 [31:02] */
#define BCHP_XPT_XMEMIF_SCB_WR_ARB_SEL_RAVE_CDB_reserved0_MASK     0xfffffffc
#define BCHP_XPT_XMEMIF_SCB_WR_ARB_SEL_RAVE_CDB_reserved0_SHIFT    2

/* XPT_XMEMIF :: SCB_WR_ARB_SEL_RAVE_CDB :: SCB_WR_CLIENT_SEL [01:00] */
#define BCHP_XPT_XMEMIF_SCB_WR_ARB_SEL_RAVE_CDB_SCB_WR_CLIENT_SEL_MASK 0x00000003
#define BCHP_XPT_XMEMIF_SCB_WR_ARB_SEL_RAVE_CDB_SCB_WR_CLIENT_SEL_SHIFT 0

/***************************************************************************
 *SCB_WR_ARB_SEL_RAVE_ITB - SCB Write Client select register for RAVE ITB
 ***************************************************************************/
/* XPT_XMEMIF :: SCB_WR_ARB_SEL_RAVE_ITB :: reserved0 [31:02] */
#define BCHP_XPT_XMEMIF_SCB_WR_ARB_SEL_RAVE_ITB_reserved0_MASK     0xfffffffc
#define BCHP_XPT_XMEMIF_SCB_WR_ARB_SEL_RAVE_ITB_reserved0_SHIFT    2

/* XPT_XMEMIF :: SCB_WR_ARB_SEL_RAVE_ITB :: SCB_WR_CLIENT_SEL [01:00] */
#define BCHP_XPT_XMEMIF_SCB_WR_ARB_SEL_RAVE_ITB_SCB_WR_CLIENT_SEL_MASK 0x00000003
#define BCHP_XPT_XMEMIF_SCB_WR_ARB_SEL_RAVE_ITB_SCB_WR_CLIENT_SEL_SHIFT 0

/***************************************************************************
 *SCB_WR_ARB_MODE - SCB Write Client Arbiter Mode Control
 ***************************************************************************/
/* XPT_XMEMIF :: SCB_WR_ARB_MODE :: reserved0 [31:10] */
#define BCHP_XPT_XMEMIF_SCB_WR_ARB_MODE_reserved0_MASK             0xfffffc00
#define BCHP_XPT_XMEMIF_SCB_WR_ARB_MODE_reserved0_SHIFT            10

/* XPT_XMEMIF :: SCB_WR_ARB_MODE :: SCB_WR_1_ARB_MODE [09:08] */
#define BCHP_XPT_XMEMIF_SCB_WR_ARB_MODE_SCB_WR_1_ARB_MODE_MASK     0x00000300
#define BCHP_XPT_XMEMIF_SCB_WR_ARB_MODE_SCB_WR_1_ARB_MODE_SHIFT    8

/* XPT_XMEMIF :: SCB_WR_ARB_MODE :: reserved1 [07:02] */
#define BCHP_XPT_XMEMIF_SCB_WR_ARB_MODE_reserved1_MASK             0x000000fc
#define BCHP_XPT_XMEMIF_SCB_WR_ARB_MODE_reserved1_SHIFT            2

/* XPT_XMEMIF :: SCB_WR_ARB_MODE :: SCB_WR_0_ARB_MODE [01:00] */
#define BCHP_XPT_XMEMIF_SCB_WR_ARB_MODE_SCB_WR_0_ARB_MODE_MASK     0x00000003
#define BCHP_XPT_XMEMIF_SCB_WR_ARB_MODE_SCB_WR_0_ARB_MODE_SHIFT    0

/***************************************************************************
 *SCB_RD_ARB_MODE - SCB Read Client Arbiter Mode Control
 ***************************************************************************/
/* XPT_XMEMIF :: SCB_RD_ARB_MODE :: reserved0 [31:02] */
#define BCHP_XPT_XMEMIF_SCB_RD_ARB_MODE_reserved0_MASK             0xfffffffc
#define BCHP_XPT_XMEMIF_SCB_RD_ARB_MODE_reserved0_SHIFT            2

/* XPT_XMEMIF :: SCB_RD_ARB_MODE :: SCB_RD_0_ARB_MODE [01:00] */
#define BCHP_XPT_XMEMIF_SCB_RD_ARB_MODE_SCB_RD_0_ARB_MODE_MASK     0x00000003
#define BCHP_XPT_XMEMIF_SCB_RD_ARB_MODE_SCB_RD_0_ARB_MODE_SHIFT    0

/***************************************************************************
 *TM_SCB_WR_DBUF0 - TM Control
 ***************************************************************************/
/* XPT_XMEMIF :: TM_SCB_WR_DBUF0 :: reserved0 [31:08] */
#define BCHP_XPT_XMEMIF_TM_SCB_WR_DBUF0_reserved0_MASK             0xffffff00
#define BCHP_XPT_XMEMIF_TM_SCB_WR_DBUF0_reserved0_SHIFT            8

/* XPT_XMEMIF :: TM_SCB_WR_DBUF0 :: TM [07:00] */
#define BCHP_XPT_XMEMIF_TM_SCB_WR_DBUF0_TM_MASK                    0x000000ff
#define BCHP_XPT_XMEMIF_TM_SCB_WR_DBUF0_TM_SHIFT                   0

/***************************************************************************
 *TM_SCB_WR_DBUF1 - TM Control
 ***************************************************************************/
/* XPT_XMEMIF :: TM_SCB_WR_DBUF1 :: reserved0 [31:08] */
#define BCHP_XPT_XMEMIF_TM_SCB_WR_DBUF1_reserved0_MASK             0xffffff00
#define BCHP_XPT_XMEMIF_TM_SCB_WR_DBUF1_reserved0_SHIFT            8

/* XPT_XMEMIF :: TM_SCB_WR_DBUF1 :: TM [07:00] */
#define BCHP_XPT_XMEMIF_TM_SCB_WR_DBUF1_TM_MASK                    0x000000ff
#define BCHP_XPT_XMEMIF_TM_SCB_WR_DBUF1_TM_SHIFT                   0

/***************************************************************************
 *TM_SCB_RD_DBUF0 - TM Control
 ***************************************************************************/
/* XPT_XMEMIF :: TM_SCB_RD_DBUF0 :: reserved0 [31:08] */
#define BCHP_XPT_XMEMIF_TM_SCB_RD_DBUF0_reserved0_MASK             0xffffff00
#define BCHP_XPT_XMEMIF_TM_SCB_RD_DBUF0_reserved0_SHIFT            8

/* XPT_XMEMIF :: TM_SCB_RD_DBUF0 :: TM [07:00] */
#define BCHP_XPT_XMEMIF_TM_SCB_RD_DBUF0_TM_MASK                    0x000000ff
#define BCHP_XPT_XMEMIF_TM_SCB_RD_DBUF0_TM_SHIFT                   0

/***************************************************************************
 *TM_SCB_RD_DBUF1 - TM Control
 ***************************************************************************/
/* XPT_XMEMIF :: TM_SCB_RD_DBUF1 :: reserved0 [31:08] */
#define BCHP_XPT_XMEMIF_TM_SCB_RD_DBUF1_reserved0_MASK             0xffffff00
#define BCHP_XPT_XMEMIF_TM_SCB_RD_DBUF1_reserved0_SHIFT            8

/* XPT_XMEMIF :: TM_SCB_RD_DBUF1 :: TM [07:00] */
#define BCHP_XPT_XMEMIF_TM_SCB_RD_DBUF1_TM_MASK                    0x000000ff
#define BCHP_XPT_XMEMIF_TM_SCB_RD_DBUF1_TM_SHIFT                   0

/***************************************************************************
 *WR_DEBUG - Debug and Test register for XMEMIF write
 ***************************************************************************/
/* XPT_XMEMIF :: WR_DEBUG :: reserved0 [31:17] */
#define BCHP_XPT_XMEMIF_WR_DEBUG_reserved0_MASK                    0xfffe0000
#define BCHP_XPT_XMEMIF_WR_DEBUG_reserved0_SHIFT                   17

/* XPT_XMEMIF :: WR_DEBUG :: SOFT_RESET [16:16] */
#define BCHP_XPT_XMEMIF_WR_DEBUG_SOFT_RESET_MASK                   0x00010000
#define BCHP_XPT_XMEMIF_WR_DEBUG_SOFT_RESET_SHIFT                  16

/* XPT_XMEMIF :: WR_DEBUG :: reserved1 [15:02] */
#define BCHP_XPT_XMEMIF_WR_DEBUG_reserved1_MASK                    0x0000fffc
#define BCHP_XPT_XMEMIF_WR_DEBUG_reserved1_SHIFT                   2

/* XPT_XMEMIF :: WR_DEBUG :: WR_LCIF_ERROR [01:00] */
#define BCHP_XPT_XMEMIF_WR_DEBUG_WR_LCIF_ERROR_MASK                0x00000003
#define BCHP_XPT_XMEMIF_WR_DEBUG_WR_LCIF_ERROR_SHIFT               0

/***************************************************************************
 *RD_DEBUG - Debug and Test register for XMEMIF read
 ***************************************************************************/
/* XPT_XMEMIF :: RD_DEBUG :: reserved0 [31:17] */
#define BCHP_XPT_XMEMIF_RD_DEBUG_reserved0_MASK                    0xfffe0000
#define BCHP_XPT_XMEMIF_RD_DEBUG_reserved0_SHIFT                   17

/* XPT_XMEMIF :: RD_DEBUG :: SOFT_RESET [16:16] */
#define BCHP_XPT_XMEMIF_RD_DEBUG_SOFT_RESET_MASK                   0x00010000
#define BCHP_XPT_XMEMIF_RD_DEBUG_SOFT_RESET_SHIFT                  16

/* XPT_XMEMIF :: RD_DEBUG :: reserved1 [15:03] */
#define BCHP_XPT_XMEMIF_RD_DEBUG_reserved1_MASK                    0x0000fff8
#define BCHP_XPT_XMEMIF_RD_DEBUG_reserved1_SHIFT                   3

/* XPT_XMEMIF :: RD_DEBUG :: RD_LCIF_ERROR [02:00] */
#define BCHP_XPT_XMEMIF_RD_DEBUG_RD_LCIF_ERROR_MASK                0x00000007
#define BCHP_XPT_XMEMIF_RD_DEBUG_RD_LCIF_ERROR_SHIFT               0

/***************************************************************************
 *INTR_STATUS_REG - Interrupt Status Register
 ***************************************************************************/
/* XPT_XMEMIF :: INTR_STATUS_REG :: reserved0 [31:02] */
#define BCHP_XPT_XMEMIF_INTR_STATUS_REG_reserved0_MASK             0xfffffffc
#define BCHP_XPT_XMEMIF_INTR_STATUS_REG_reserved0_SHIFT            2

/* XPT_XMEMIF :: INTR_STATUS_REG :: XMEMIF_WRITE_ERROR [01:01] */
#define BCHP_XPT_XMEMIF_INTR_STATUS_REG_XMEMIF_WRITE_ERROR_MASK    0x00000002
#define BCHP_XPT_XMEMIF_INTR_STATUS_REG_XMEMIF_WRITE_ERROR_SHIFT   1

/* XPT_XMEMIF :: INTR_STATUS_REG :: XMEMIF_READ_ERROR [00:00] */
#define BCHP_XPT_XMEMIF_INTR_STATUS_REG_XMEMIF_READ_ERROR_MASK     0x00000001
#define BCHP_XPT_XMEMIF_INTR_STATUS_REG_XMEMIF_READ_ERROR_SHIFT    0

/***************************************************************************
 *INTR_STATUS_REG_EN - Interrupt Status Enable Register
 ***************************************************************************/
/* XPT_XMEMIF :: INTR_STATUS_REG_EN :: reserved0 [31:02] */
#define BCHP_XPT_XMEMIF_INTR_STATUS_REG_EN_reserved0_MASK          0xfffffffc
#define BCHP_XPT_XMEMIF_INTR_STATUS_REG_EN_reserved0_SHIFT         2

/* XPT_XMEMIF :: INTR_STATUS_REG_EN :: INTR_STATUS_REG_EN [01:00] */
#define BCHP_XPT_XMEMIF_INTR_STATUS_REG_EN_INTR_STATUS_REG_EN_MASK 0x00000003
#define BCHP_XPT_XMEMIF_INTR_STATUS_REG_EN_INTR_STATUS_REG_EN_SHIFT 0

#endif /* #ifndef BCHP_XPT_XMEMIF_H__ */

/* End of File */
