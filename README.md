# LearnCPP

配合 [LearnCpp.com](https://www.learncpp.com/)，**所有示例手写进 `src/main.cpp`**，自己编译、运行、调试。

## 编译运行（WSL）

```bash
cd /mnt/c/Users/hiw3c/workspace/LearnCPP

cmake -S . -B build
cmake --build build
./build/main
```

或：

```bash
./scripts/build.sh
./scripts/run.sh
```

## 单文件快速编译（不用 CMake）

```bash
g++ -std=c++17 -Wall -Wextra -g src/main.cpp -o main && ./main
```

`-g` 方便 gdb 调试。

## 多文件练习（如 Ch2 章末 quiz）

自己新建 `src/io.h`、`src/io.cpp`，在 `CMakeLists.txt` 里改为：

```cmake
add_executable(main src/main.cpp src/io.cpp)
target_include_directories(main PRIVATE src)
```

## 目录

```
LearnCPP/
├── CMakeLists.txt
├── src/main.cpp      # 唯一练习入口
├── include/          # 可选：公共头文件
├── docs/
│   ├── learncpp-tracker.md   # 总进度 + 链接到各章笔记
│   └── notes/                # 每章一个 .md，自己手写
└── scripts/
```

## Cursor

WSL 模式打开项目 → `Ctrl+Shift+B` 编译 → 终端 `./build/main`
