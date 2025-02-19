// !!! This is a file automatically generated by hipify!!!
// Original TunableOp is from onnxruntime.
// https://github.com/microsoft/onnxruntime/blob/main/onnxruntime/core/framework/tunable.h
// https://github.com/microsoft/onnxruntime/tree/main/onnxruntime/core/providers/rocm/tunable
// Copyright (c) Microsoft Corporation.
// Licensed under the MIT license.
//
// Adapting TunableOp into PyTorch
// Copyright (c) Advanced Micro Devices, Inc.
//
#pragma once

#include <hip/hip_runtime.h>

#include <ATen/hip/tunable/Tunable.h>

namespace at::cuda::tunable {

class StreamTimer : public ITimer {
  public:
    StreamTimer();
    virtual ~StreamTimer();

    void Start() override;

    void End() override;

    float Duration() override;

  private:
    hipEvent_t start_;
    hipEvent_t end_;
};

} // namespace at::cuda::tunable
