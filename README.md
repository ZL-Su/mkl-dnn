# Intel(R) Math Kernel Library for Deep Neural Networks (Intel(R) MKL-DNN)
![v0.17 beta](https://img.shields.io/badge/v0.17-beta-orange.svg)

Intel(R) Math Kernel Library for Deep Neural Networks (Intel(R) MKL-DNN) is
an open-source performance library for deep-learning applications. The library
accelerates deep-learning applications and frameworks on Intel architecture.
Intel MKL-DNN contains vectorized and threaded building blocks that you can
use to implement deep neural networks (DNN) with C and C++ interfaces.

DNN functionality optimized for Intel architecture is also included in
[Intel Math Kernel Library (Intel MKL)](https://software.intel.com/en-us/mkl/features/deep-neural-networks).
The API in that implementation is not compatible with Intel MKL-DNN and does not
include certain new and experimental features.

This release contains performance-critical functions that improve performance of
the following deep learning topologies and variations of these:

| Application                               | Example topology
|:---                                       |:---
| Image recognition                         | AlexNet, VGG, GoogleNet, ResNet, MobileNet
| Image segmentation                        | FCN, SegNet, MaskRCNN, U-Net
| Volumetric segmentation                   | 3D-Unet
| Object detection                          | SSD, Faster R-CNN, Yolo
| Neural machine translation (experimental) | GNMT
| Speech recognition (experimental)         | DeepSpeech
| Adversarial networks                      | DCGAN, 3DGAN
| Reinforcement learning                    | A3C
| Text-to-speech                            | WaveNet

Intel MKL-DNN is used in the following software products:
* [Caffe\* Optimized for Intel Architecture](https://github.com/intel/caffe)
* [Chainer\*](https://chainer.org)
* [DeepBench](https://github.com/baidu-research/DeepBench)
* [PaddlePaddle\*](http://www.paddlepaddle.org)
* [Tensorflow\*](https://www.tensorflow.org)
* [Microsoft\* Cognitive Toolkit (CNTK)](https://docs.microsoft.com/en-us/cognitive-toolkit)
* [Apache\* MXNet](https://mxnet.apache.org)
* [OpenVINO(TM) toolkit](https://01.org/openvinotoolkit)
* [Intel Nervana Graph](https://github.com/NervanaSystems/ngraph)
* [Menoh\*](https://github.com/pfnet-research/menoh)
* [DeepLearning4J\*](https://deeplearning4j.org)
* [BigDL](https://github.com/intel-analytics/BigDL)

## License
Intel MKL-DNN is licensed under
[Apache License Version 2.0](http://www.apache.org/licenses/LICENSE-2.0). This
software includes the following third-party components:
* [Xbyak](https://github.com/herumi/xbyak) distributed under [3-clause BSD licence](src/cpu/xbyak/COPYRIGHT)
* [gtest](https://github.com/google/googletest) distributed under [3-clause BSD license](tests/gtests/gtest/LICENSE)

## Documentation
* [Introduction](https://intel.github.io/mkl-dnn) explains the programming model
and basic concepts
* [Reference manual](https://intel.github.io/mkl-dnn/modules.html) provides
detailed functionality description
* [Examples](https://github.com/intel/mkl-dnn/tree/master/examples)
demonstrates use of C and C++ APIs in simple topologies
* [Tutorial](https://software.intel.com/en-us/articles/intel-mkl-dnn-part-1-library-overview-and-installation)
provides step-by-step installation instructions and an example walkthrough

## Support
Please submit your questions, feature requests, and bug reports on the
[GitHub issues](https://github.com/intel/mkl-dnn/issues) page.

**WARNING** The following functionality has preview status and might change
without prior notification in future releases:
* Convolutions with `s16` data type in source, weights or destination
* Convolutions and auxiliary primitives for 3D spatial data
* RNN, LSTM, and GRU primitives
* Threading Building Blocks (TBB) support

## How to Contribute
We welcome community contributions to Intel MKL-DNN. If you have an idea on how to improve the library:

* Share your proposal via
 [GitHub issues](https://github.com/intel/mkl-dnn/issues).
* Ensure you can build the product and run all the examples with your patch.
* In the case of a larger feature, create a test.
* Submit a [pull request](https://github.com/intel/mkl-dnn/pulls).

We will review your contribution and, if any additional fixes or modifications
are necessary, may provide feedback to guide you. When accepted, your pull
request will be merged to the repository.

## System Requirements
Intel MKL-DNN supports Intel 64 architecture and compatible architectures.
The library is optimized for the systems based on
* Intel Atom(R) processor with Intel SSE4.1 support
* 4th, 5th, 6th, 7th, and 8th generation Intel(R) Core(TM) processor
* Intel(R) Xeon(R) processor E5 v3 family (formerly Haswell)
* Intel Xeon processor E5 v4 family (formerly Broadwell)
* Intel Xeon Platinum processor family (formerly Skylake)
* Intel(R) Xeon Phi(TM) processor x200 product family (formerly Knights Landing)
* Intel Xeon Phi processor x205 product family (formerly Knights Mill)

and compatible processors.

The software dependencies are:
* [Cmake](https://cmake.org/download/) 2.8.0 or later
* [Doxygen](http://www.stack.nl/~dimitri/doxygen/download.html#srcbin) 1.8.5 or later
* C++ compiler with C++11 standard support
* Optional dependencies:
  * GNU\* OpenMP\*, LLVM OpenMP, or Intel OpenMP
  * Threading Building Blocks (TBB) 2017 or later
  * Intel MKL 2017 Update 1 or Intel MKL small libraries

> **Note**
> Building Intel MKL-DNN with optional dependencies may introduce additional
> runtime dependencies for the library. For details, refer to the corresponding
> software system requirements.

The software was validated on RedHat\* Enterprise Linux 7 with
* GNU Compiler Collection 4.8, 5.4, 6.1, 7.2, and 8.1
* Clang\* 3.8.0
* [Intel C/C++ Compiler](https://software.intel.com/en-us/intel-parallel-studio-xe)
  17.0, 18.0, and 19.0

on Windows Server\* 2012 R2 with
* Microsoft Visual C++ 14.0 (Visual Studio 2015)
* [Intel C/C++ Compiler](https://software.intel.com/en-us/intel-parallel-studio-xe)
  17.0 and 19.0

on macOS\* 10.13 (High Sierra) with
* Apple LLVM version 9.2 (XCode 9.2)
* [Intel C/C++ Compiler](https://software.intel.com/en-us/intel-parallel-studio-xe)
  18.0 and 19.0

The implementation uses OpenMP 4.0 SIMD extensions. We recommend using the
Intel C++ Compiler for the best performance results.

### Windows
Intel MKL-DNN includes several header files providing C and C++ APIs for
the functionality and one or several dynamic libraries depending on how
Intel MKL-DNN was built.

|File                   | Description
|:---                   |:---
|bin\libmkldnn.dll      | Intel MKL-DNN dynamic library
|bin\libiomp5.dll       | Intel OpenMP\* runtime library (if built with `MKLDNN_USE_MKL=ML`)
|bin\libmklml.dll       | Intel MKL small library (if built with `MKLDNN_USE_MKL=ML`)
|include\mkldnn.h       | C header
|include\mkldnn.hpp     | C++ header
|include\mkldnn_types.h | Auxiliary C header
|lib\libmkldnn.lib      | Intel MKL-DNN import library
|lib\libiomp5.lib       | Intel OpenMP\* runtime import library (if built with `MKLDNN_USE_MKL=ML`)
|lib\libmklml.lib       | Intel MKL small library import library (if built with `MKLDNN_USE_MKL=ML`)

To link the application from the command line, set up the `LIB` and `INCLUDE` environment variables to point to the locations of 
the Intel MKL-DNN headers and libraries. The Linkline examples below assume that Intel MKL-DNN is installed in the directory
defined in the MKLDNNROOT environment variable. 

```
set INCLUDE=%MKLDNNROOT%\include;%INCLUDE%
set LIB=%MKLDNNROOT%\lib;%LIB%
icl /Qstd=c++11 /qopenmp simple_net.cpp mkldnn.lib
cl simple_net.cpp mkldnn.lib
```

Refer to [Microsoft Visual Studio documentation](https://docs.microsoft.com/en-us/cpp/build/walkthrough-creating-and-using-a-dynamic-link-library-cpp?view=vs-2017)
on linking the application using MSVS solutions.

> **NOTE**
> Applications linked dynamically will resolve the dependencies at runtime.
> Make sure that the dependencies are available in the standard locations
> defined by the operating system or in the locatons listed in the `PATH` environment variable.

--------

[Legal Information](doc/legal_information.md)
