FROM mcr.microsoft.com/vscode/devcontainers/base:bullseye

 # Add packages as root
 USER root

 RUN apt-get update && DEBIAN_FRONTEND=noninteractive \
     && apt-get -y install --no-install-recommends \
     cmake llvm-9 clang-9 \
     build-essential python curl git lldb liblldb-dev \
     libunwind8 libunwind8-dev gettext libicu-dev liblttng-ust-dev \
     libssl-dev libnuma-dev libkrb5-dev zlib1g-dev ninja-build

 # After installing packages, go back to the codespace user.
 USER codespace
