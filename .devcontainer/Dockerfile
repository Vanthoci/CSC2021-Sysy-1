FROM mcr.microsoft.com/vscode/devcontainers/base:ubuntu

# 安装必要的包
RUN apt-get update && apt-get install -y \
    llvm \
    clang \
    clangd \
    lldb \
    lld \
    libc++-dev \
    libc++abi-dev \
    build-essential \
    cmake \
    ninja-build

# 清理 apt 缓存
RUN apt-get clean && rm -rf /var/lib/apt/lists/*
