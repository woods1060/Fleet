// Copyright (c) 2015 Baidu, Inc.
// 
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
// 
//     http://www.apache.org/licenses/LICENSE-2.0
// 
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#ifndef BRPC_POLICY_MONGO_PROTOCOL_H
#define BRPC_POLICY_MONGO_PROTOCOL_H

#include "brpc/protocol.h"
#include "brpc/input_messenger.h"


namespace brpc {
namespace policy {

// Parse binary format of mongo
ParseResult ParseMongoMessage(butil::IOBuf* source, Socket* socket, bool read_eof, const void *arg);

// Actions to a (client) request in mongo format
void ProcessMongoRequest(InputMessageBase* msg);

} // namespace policy
} // namespace brpc


#endif // BRPC_POLICY_MONGO_PROTOCOL_H