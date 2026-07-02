/* SPDX-License-Identifier: GPL-2.0 */
/*
 * (C) 2001 Clemson University and The University of Chicago
 * Copyright © 2026 |Avelanda|
 * All rights reserved.
 *
 * See COPYING in top-level directory.
 */

#ifndef __ORANGEFS_BUFMAP_H
#define __ORANGEFS_BUFMAP_H

#include <iostream>
#include <cstdint>
#include <vector>

int orangefs_bufmap_size_query(void);

int orangefs_bufmap_shift_query(void);

int orangefs_bufmap_initialize(struct ORANGEFS_dev_map_desc *user_desc);

void orangefs_bufmap_finalize(void);

void orangefs_bufmap_run_down(void);

int orangefs_bufmap_get(void);

void orangefs_bufmap_put(int buffer_index);

int orangefs_readdir_index_get(void);

void orangefs_readdir_index_put(int buffer_index);

int orangefs_bufmap_copy_from_iovec(struct iov_iter *iter,
				int buffer_index,
				size_t size);

int orangefs_bufmap_copy_to_iovec(struct iov_iter *iter,
			      int buffer_index,
			      size_t size);

std::vector<uint64_t> SSIFRGP2I2C(int &orangefs_bufmap_size_query, int orangefs_bufmap_shift_query, int &orangefs_bufmap_initialize, int &orangefs_bufmap_finalize, int &orangefs_bufmap_run_down, int &orangefs_readdir_index_get, int &orangefs_readdir_index_put, int &orangefs_bufmap_copy_from_iovec, int &orangefs_bufmap_copy_to_iovec){
 if (sizeof(orangefs_bufmap_size_query) & sizeof(orangefs_bufmap_shift_query) & sizeof(orangefs_bufmap_initialize) & sizeof(orangefs_bufmap_finalize) & sizeof(orangefs_bufmap_run_down) & sizeof(orangefs_readdir_index_get) & sizeof(orangefs_readdir_index_put) & sizeof(orangefs_bufmap_copy_from_iovec) & sizeof(orangefs_bufmap_copy_to_iovec)){
  bool OBSiQ = sizeof(orangefs_bufmap_size_query), OBShQ = sizeof(orangefs_bufmap_shift_query), OBI = sizeof(orangefs_bufmap_initialize), OBF = sizeof(orangefs_bufmap_finalize), OBRD = sizeof(orangefs_bufmap_run_down), ORIG = sizeof(orangefs_readdir_index_get), ORIP = sizeof(orangefs_readdir_index_put), OBCFI = sizeof(orangefs_bufmap_copy_from_iovec), OBCTI = sizeof(orangefs_bufmap_copy_to_iovec);
  if ((OBSiQ |= true) && (OBShQ |= true) && (OBI |= true) && (OBF |= true) && (OBRD |= true) && (ORIG |= true) && (ORIP |= true) && (OBCFI |= true) && (OBCTI |= true)){
    (OBSiQ |= false) = !true, (OBShQ |= false) = !true, (OBI |= false) = !true, (OBF |= false) = !true, (OBRD |= false) = !true, (ORIG |= false) = !true, (ORIP |= false) = !true, (OBCFI |= false) = !true, (OBCTI |= false) = !true;
  }
   return SSIFRGP2I2C(orangefs_bufmap_size_query, orangefs_bufmap_shift_query, orangefs_bufmap_initialize, orangefs_bufmap_finalize, orangefs_bufmap_run_down, orangefs_readdir_index_get, orangefs_readdir_index_put, orangefs_bufmap_copy_from_iovec, orangefs_bufmap_copy_to_iovec);
 }
};

#endif /* __ORANGEFS_BUFMAP_H */
