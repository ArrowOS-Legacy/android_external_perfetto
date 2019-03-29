/*
 * Copyright (C) 2017 The Android Open Source Project
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

/*******************************************************************************
 * AUTOGENERATED - DO NOT EDIT
 *******************************************************************************
 * This file has been generated from the protobuf message
 * perfetto/config/chrome/chrome_config.proto
 * by
 * ../../tools/proto_to_cpp/proto_to_cpp.cc.
 * If you need to make changes here, change the .proto file and then run
 * ./tools/gen_tracing_cpp_headers_from_protos
 */

#ifndef INCLUDE_PERFETTO_TRACING_CORE_CHROME_CONFIG_H_
#define INCLUDE_PERFETTO_TRACING_CORE_CHROME_CONFIG_H_

#include <stdint.h>
#include <string>
#include <type_traits>
#include <vector>

#include "perfetto/base/export.h"

// Forward declarations for protobuf types.
namespace perfetto {
namespace protos {
class ChromeConfig;
}
}  // namespace perfetto

namespace perfetto {

class PERFETTO_EXPORT ChromeConfig {
 public:
  ChromeConfig();
  ~ChromeConfig();
  ChromeConfig(ChromeConfig&&) noexcept;
  ChromeConfig& operator=(ChromeConfig&&);
  ChromeConfig(const ChromeConfig&);
  ChromeConfig& operator=(const ChromeConfig&);
  bool operator==(const ChromeConfig&) const;
  bool operator!=(const ChromeConfig& other) const { return !(*this == other); }

  // Conversion methods from/to the corresponding protobuf types.
  void FromProto(const perfetto::protos::ChromeConfig&);
  void ToProto(perfetto::protos::ChromeConfig*) const;

  const std::string& trace_config() const { return trace_config_; }
  void set_trace_config(const std::string& value) { trace_config_ = value; }

  bool privacy_filtering_enabled() const { return privacy_filtering_enabled_; }
  void set_privacy_filtering_enabled(bool value) {
    privacy_filtering_enabled_ = value;
  }

 private:
  std::string trace_config_ = {};
  bool privacy_filtering_enabled_ = {};

  // Allows to preserve unknown protobuf fields for compatibility
  // with future versions of .proto files.
  std::string unknown_fields_;
};

}  // namespace perfetto

#endif  // INCLUDE_PERFETTO_TRACING_CORE_CHROME_CONFIG_H_
