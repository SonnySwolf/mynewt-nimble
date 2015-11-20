/**
 * Copyright (c) 2015 Runtime Inc.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 * 
 *   http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef H_HOST_TEST_
#define H_HOST_TEST_

struct os_mbuf;

void ble_hs_test_pkt_txed(struct os_mbuf *om);

int l2cap_test_all(void);
int ble_hs_att_test_all(void);
int ble_host_hci_test_all(void);
int ble_hs_conn_test_all(void);
int ble_gap_test_all(void);
int ble_hs_uuid_test_all(void);

#endif
