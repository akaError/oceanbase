/**
 * Copyright (c) 2023 OceanBase
 * OceanBase CE is licensed under Mulan PubL v2.
 * You can use this software according to the terms and conditions of the Mulan PubL v2.
 * You may obtain a copy of Mulan PubL v2 at:
 *          http://license.coscl.org.cn/MulanPubL-2.0
 * THIS SOFTWARE IS PROVIDED ON AN "AS IS" BASIS, WITHOUT WARRANTIES OF ANY KIND,
 * EITHER EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO NON-INFRINGEMENT,
 * MERCHANTABILITY OR FIT FOR A PARTICULAR PURPOSE.
 * See the Mulan PubL v2 for more details.
 */

#ifndef OCEANBASE_LIB_OB_VECTOR_COSINE_DISTANCE_H_
#define OCEANBASE_LIB_OB_VECTOR_COSINE_DISTANCE_H_

#include "lib/utility/ob_print_utils.h"
#include "lib/oblog/ob_log.h"
#include "lib/ob_define.h"
#include "common/object/ob_obj_compare.h"

namespace oceanbase
{
namespace common
{
struct ObVectorCosineDistance
{
  static int cosine_similarity_func(const float *a, const float *b, const int64_t len, double &similarity);
  static int cosine_distance_func(const float *a, const float *b, const int64_t len, double &distance);

  // normal func
  OB_INLINE static int cosine_similarity_normal(const float *a, const float *b, const int64_t len, double &similarity);
  OB_INLINE static int cosine_calculate_normal(const float *a, const float *b, const int64_t len, double &ip, double &abs_dist_a, double &abs_dist_b);
  OB_INLINE static double get_cosine_distance(double similarity);
  // TODO(@jingshui) add simd func
};
} // common
} // oceanbase
#endif