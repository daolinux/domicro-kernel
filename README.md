cat > README.md <<'EOF'
# DoMicroKernel

一个极简微内核，仅原生支持 `.do` 格式，可自由二次编译、修改与开源发布。

---

## 项目文件说明
| 文件 | 作用 |
| :--- | :--- |
| `boot.S` | 内核启动汇编，负责设置栈并跳转到内核主函数 |
| `domicro.h` | 头文件，定义 `.do` 程序格式与内核接口 |
| `kernel.c` | 微内核主体，仅实现 `.do` 格式加载与基础调度 |
| `kernel.ld` | 链接脚本，指定内核内存布局与入口地址 |
| `build.sh` | 一键编译脚本，无需手动配置 |

---

## 编译方法（Linux / UOS 通用）
1.  安装依赖：
    ```bash
    sudo apt update && sudo apt install -y gcc make binutils