/* Copyright 2015 Codethink Ltd.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
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

#ifndef __ofc_parse_data_h__
#define __ofc_parse_data_h__

typedef struct
{
	ofc_parse_lhs_list_t*  nlist;
	ofc_parse_expr_list_t* clist;
} ofc_parse_data_entry_t;

typedef struct
{
	unsigned                 count;
	ofc_parse_data_entry_t** entry;
} ofc_parse_data_list_t;


ofc_parse_data_list_t* ofc_parse_data_list(
	const ofc_sparse_t* src, const char* ptr,
	ofc_parse_debug_t* debug,
	unsigned* len);
void ofc_parse_data_list_delete(
	ofc_parse_data_list_t* list);
bool ofc_parse_data_list_print(
	ofc_colstr_t* cs, const ofc_parse_data_list_t* list);

#endif
