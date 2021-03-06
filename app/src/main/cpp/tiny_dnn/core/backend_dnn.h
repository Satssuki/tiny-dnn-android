/*
    Copyright (c) 2016, Taiga Nomi, Edgar Riba
    All rights reserved.

    Redistribution and use in source and binary forms, with or without
    modification, are permitted provided that the following conditions are met:
    * Redistributions of source code must retain the above copyright
    notice, this list of conditions and the following disclaimer.
    * Redistributions in binary form must reproduce the above copyright
    notice, this list of conditions and the following disclaimer in the
    documentation and/or other materials provided with the distribution.
    * Neither the name of the <organization> nor the
    names of its contributors may be used to endorse or promote products
    derived from this software without specific prior written permission.

    THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND ANY
    EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
    WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
    DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR ANY
    DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
    (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
    LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND
    ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
    (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
    SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
*/
#pragma once

#include "tiny_dnn/core/backend.h"

namespace tiny_dnn {
namespace core {

class dnn_backend : public backend {
 public:
    // context holds solution-dependent parameters
    // context should be able to hold any types of structures (like boost::any)
    dnn_backend() {}

    // core math functions

    void conv2d(const std::vector<tensor_t*>& in_data,
                std::vector<tensor_t*>&       out_data) override {
        CNN_UNREFERENCED_PARAMETER(in_data);
        CNN_UNREFERENCED_PARAMETER(out_data);
        throw nn_error("not implemented yet.");
    }

    void conv2d_q(const std::vector<tensor_t*>& in_data,
                  std::vector<tensor_t*>&       out_data) override {
        CNN_UNREFERENCED_PARAMETER(in_data);
        CNN_UNREFERENCED_PARAMETER(out_data);
        throw nn_error("not implemented yet.");
    }

    void conv2d_eq(const std::vector<tensor_t*>& in_data,
                   std::vector<tensor_t*>&       out_data) override {
        CNN_UNREFERENCED_PARAMETER(in_data);
        CNN_UNREFERENCED_PARAMETER(out_data);
        throw nn_error("not implemented yet.");
    }

    void conv2d(const std::vector<tensor_t*>& in_data,
                const std::vector<tensor_t*>& out_data,
                std::vector<tensor_t*>&       out_grad,
                std::vector<tensor_t*>&       in_grad) override {
        CNN_UNREFERENCED_PARAMETER(in_data);
        CNN_UNREFERENCED_PARAMETER(out_data);
        CNN_UNREFERENCED_PARAMETER(out_grad);
        CNN_UNREFERENCED_PARAMETER(in_grad);
        throw nn_error("not implemented yet.");
    }

    void conv2d_q(const std::vector<tensor_t*>& in_data,
                  const std::vector<tensor_t*>& out_data,
                  std::vector<tensor_t*>&       out_grad,
                  std::vector<tensor_t*>&       in_grad) override {
        CNN_UNREFERENCED_PARAMETER(in_data);
        CNN_UNREFERENCED_PARAMETER(out_data);
        CNN_UNREFERENCED_PARAMETER(out_grad);
        CNN_UNREFERENCED_PARAMETER(in_grad);
        throw nn_error("not implemented yet.");
    }

    void deconv2d(const std::vector<tensor_t*>& in_data,
                  std::vector<tensor_t*>&       out_data) override {
        CNN_UNREFERENCED_PARAMETER(in_data);
        CNN_UNREFERENCED_PARAMETER(out_data);
        throw nn_error("not implemented yet.");
    }

    void deconv2d_q(const std::vector<tensor_t*>& in_data,
                    std::vector<tensor_t*>&       out_data) override {
        CNN_UNREFERENCED_PARAMETER(in_data);
        CNN_UNREFERENCED_PARAMETER(out_data);
        throw nn_error("not implemented yet.");
    }

    void deconv2d_eq(const std::vector<tensor_t*>& in_data,
                     std::vector<tensor_t*>&       out_data) override {
        CNN_UNREFERENCED_PARAMETER(in_data);
        CNN_UNREFERENCED_PARAMETER(out_data);
        throw nn_error("not implemented yet.");
    }

    void deconv2d(const std::vector<tensor_t*>& in_data,
                  const std::vector<tensor_t*>& out_data,
                  std::vector<tensor_t*>&       out_grad,
                  std::vector<tensor_t*>&       in_grad) override {
        CNN_UNREFERENCED_PARAMETER(in_data);
        CNN_UNREFERENCED_PARAMETER(out_data);
        CNN_UNREFERENCED_PARAMETER(out_grad);
        CNN_UNREFERENCED_PARAMETER(in_grad);
        throw nn_error("not implemented yet.");
    }

    void deconv2d_q(const std::vector<tensor_t*>& in_data,
                    const std::vector<tensor_t*>& out_data,
                    std::vector<tensor_t*>&       out_grad,
                    std::vector<tensor_t*>&       in_grad) override {
        CNN_UNREFERENCED_PARAMETER(in_data);
        CNN_UNREFERENCED_PARAMETER(out_data);
        CNN_UNREFERENCED_PARAMETER(out_grad);
        CNN_UNREFERENCED_PARAMETER(in_grad);
        throw nn_error("not implemented yet.");
    }

    void maxpool(const std::vector<tensor_t*>& in_data,
                 std::vector<tensor_t*>&       out_data) override {
        CNN_UNREFERENCED_PARAMETER(in_data);
        CNN_UNREFERENCED_PARAMETER(out_data);
        throw nn_error("not implemented yet.");
    }

    void maxpool(const std::vector<tensor_t*>& in_data,
                 const std::vector<tensor_t*>& out_data,
                 std::vector<tensor_t*>&       out_grad,
                 std::vector<tensor_t*>&       in_grad) override {
        CNN_UNREFERENCED_PARAMETER(in_data);
        CNN_UNREFERENCED_PARAMETER(out_data);
        CNN_UNREFERENCED_PARAMETER(out_grad);
        CNN_UNREFERENCED_PARAMETER(in_grad);
        throw nn_error("not implemented yet.");
    }

    void fully(const std::vector<tensor_t*>& in_data,
               std::vector<tensor_t*>&       out_data) override {
        CNN_UNREFERENCED_PARAMETER(in_data);
        CNN_UNREFERENCED_PARAMETER(out_data);
        throw nn_error("not implemented yet.");
    }

    void fully_q(const std::vector<tensor_t*>& in_data,
                 std::vector<tensor_t*>&       out_data) override {
        CNN_UNREFERENCED_PARAMETER(in_data);
        CNN_UNREFERENCED_PARAMETER(out_data);
        throw nn_error("not implemented yet.");
    }

    void fully_eq(const std::vector<tensor_t*>& in_data,
                  std::vector<tensor_t*>&       out_data) override {
        CNN_UNREFERENCED_PARAMETER(in_data);
        CNN_UNREFERENCED_PARAMETER(out_data);
        throw nn_error("not implemented yet.");
    }

    void fully(const std::vector<tensor_t*>& in_data,
               const std::vector<tensor_t*>& out_data,
               std::vector<tensor_t*>&       out_grad,
               std::vector<tensor_t*>&       in_grad) override {
        CNN_UNREFERENCED_PARAMETER(in_data);
        CNN_UNREFERENCED_PARAMETER(out_data);
        CNN_UNREFERENCED_PARAMETER(out_grad);
        CNN_UNREFERENCED_PARAMETER(in_grad);
        throw nn_error("not implemented yet.");
    }

    void fully_q(const std::vector<tensor_t*>& in_data,
                 const std::vector<tensor_t*>& out_data,
                 std::vector<tensor_t*>&       out_grad,
                 std::vector<tensor_t*>&       in_grad) override {
        CNN_UNREFERENCED_PARAMETER(in_data);
        CNN_UNREFERENCED_PARAMETER(out_data);
        CNN_UNREFERENCED_PARAMETER(out_grad);
        CNN_UNREFERENCED_PARAMETER(in_grad);
        throw nn_error("not implemented yet.");
    }

    backend_t type() const override { return backend_t::libdnn; }
};

}  // namespace core
}  // namespace tiny_dnn
