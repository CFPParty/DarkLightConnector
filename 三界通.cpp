#include <iostream>

int main()
{
	system("curl -JLO https://github.com/CFPParty/cfpparty.github.io/archive/refs/heads/20230721.zip");
	system("move cfpparty* ../中国四民党官网源代码.zip");
	system("curl -JLO https://github.com/hello-world-1989/whyyoutouzhele/archive/refs/heads/main.zip");
	system("move whyyou* ../李老师推文每月归档.zip");
	system("curl -JLO https://github.com/hello-world-1989/cn-news/archive/refs/heads/main.zip");
	system("move cn-news* ../反贼推文大集合每小时归档.zip");
	system("curl -JLO https://github.com/hello-world-1989/program-think-image/archive/refs/heads/main.zip");
	system("move program* ../编程随想翻墙指南和反厂卫指南长期归档.zip");
	system("pause");
}
