/*
 * Copyright 2004-2018 Cray Inc.
 * Other additional copyright holders may be indicated within.
 * 
 * The entirety of this work is licensed under the Apache License,
 * Version 2.0 (the "License"); you may not use this file except
 * in compliance with the License.
 * 
 * You may obtain a copy of the License at
 * 
 *     http://www.apache.org/licenses/LICENSE-2.0
 * 
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */
#include "chplrt.h"

#include "chpl-external-array.h"
#include "chpl-mem.h"

static void chpl_wrap_chapel_free_call(void* mem) {
  chpl_mem_free(mem, 0, 0);
}

chpl_external_array chpl_make_external_array(uint64_t elt_size,
                                             uint64_t num_elts) {
  void* my_mem = chpl_mem_alloc(elt_size*num_elts,
                                CHPL_RT_MD_ARRAY_ELEMENTS,
                                0,
                                0);
  chpl_external_array ret;
  ret.elts = my_mem;
  ret.size = num_elts;
  ret.freer = chpl_wrap_chapel_free_call;
  return ret;
}

void chpl_free_external_array(chpl_external_array x) {
  if (x.freer != NULL) {
    x.freer(x.elts);
  }
}