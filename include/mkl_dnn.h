#pragma once
#include "mkldnn.hpp"

/**
 *\brief MKL-DNN wrapper
 *\coded by Dgelom Su 16/Jan/2019
 */
namespace dnn {
using mkldnn::algorithm;
using mkldnn::batch_normalization_flag;
using mkldnn::batch_normalization_backward;
using mkldnn::convolution_backward_data;
using mkldnn::convolution_backward_weights;
using mkldnn::deconvolution_backward_data;
using mkldnn::deconvolution_backward_weights;
using mkldnn::convolution_forward;
using mkldnn::eltwise_forward;
using mkldnn::eltwise_backward;
using mkldnn::error;
using mkldnn::engine;
using mkldnn::concat;
using mkldnn::handle;
}