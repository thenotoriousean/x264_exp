# 安装教程
1. 下载源码：`git clone https://github.com/thenotoriousean/x264_exp.git`
2. 安装nasm，官网地址https://www.nasm.us/pub/nasm/releasebuilds/：
- `./configure`
- `make && make install`
3. 编译x264:
- `./configure --enable-shared`
- `make && make install `
- `sudo ldconfig`

4. 添加动态链接依赖：
- `nano /etc/ld.so.conf`
- 添加： `/usr/local/lib`

