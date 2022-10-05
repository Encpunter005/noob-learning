#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int main()
//{
//	initgraph(640, 480);	// 创建绘图窗口，大小为 640x480 像素
//	circle(200, 200, 100);	// 画圆，圆心(200, 200)，半径 100
//	_getch();				// 按任意键继续
//	closegraph();			// 关闭绘图窗口
//	return 0;
//}


//int main()
//{
//	// 设置随机种子
//	srand((unsigned)time(NULL));
//
//	// 初始化图形模式
//	initgraph(640, 480);
//
//	int  x, y;
//	char c;
//
//	settextstyle(16, 8, _T("Courier"));	// 设置字体
//
//	// 设置颜色
//	settextcolor(GREEN);
//	setlinecolor(BLACK);
//
//	for (int i = 0; i <= 479; i++)
//	{
//		// 在随机位置显示三个随机字母
//		for (int j = 0; j < 3; j++)
//		{
//			x = (rand() % 80) * 8;
//			y = (rand() % 20) * 24;
//			c = (rand() % 26) + 65;
//			outtextxy(x, y, c);
//		}
//
//		// 画线擦掉一个像素行
//		line(0, i, 639, i);
//
//		Sleep(10);					// 延时
//		if (i >= 479)	i = -1;
//		if (_kbhit())	break;		// 按任意键退出
//	}
//
//	// 关闭图形模式
//	closegraph();
//	return 0;
//}
//int main()
//{
//	// 创建绘图窗口
//	initgraph(640, 480);
//
//	// 画渐变的天空(通过亮度逐渐增加)
//	float H = 190;		// 色相
//	float S = 1;		// 饱和度
//	float L = 0.7f;		// 亮度
//	for (int y = 0; y < 480; y++)
//	{
//		L += 0.0005f;
//		setlinecolor(HSLtoRGB(H, S, L));
//		line(0, y, 639, y);
//	}
//
//	// 画彩虹(通过色相逐渐增加)
//	H = 0;
//	S = 1;
//	L = 0.5f;
//	setlinestyle(PS_SOLID, 2);		// 设置线宽为 2
//	for (int r = 400; r > 344; r--)
//	{
//		H += 5;
//		setlinecolor(HSLtoRGB(H, S, L));
//		circle(500, 480, r);
//	}
//
//	// 按任意键退出
//	_getch();
//	closegraph();
//	return 0;
//}
#include <graphics.h>
#include <stdio.h>
//int main() {
//	//创建一个窗口
//	initgraph(1280 , 720,SHOWCONSOLE);
//	//绘图函数
//	//画圆
//	// circle（）无填充
//	// fillcircle()有边框填充
//	// solidcircle()无边框填充
//	// ellipse画椭圆
//	// pie画扇形
//	// polygon画多边形
//	// rectangle画矩形
//	// roundrect画圆角多边形
//	// line画线
//	// putpixel画点
//	//关闭一个窗口
//	//设置填充颜色setfillcolor（颜色）；
//	// 设置线条颜色setlinecolor(color)
//	// 设置线条样式setlinestyle(高度，宽度，字体)
//	//PS_SOLID实线
//	// PS_DASH虚线
//	// PS_DOT点线
//	// 设置背景颜色setbkcolor
//	// 绘制文字
//	// outtextxy在指定位置输出字符串
//	// settextcolor设置当前文字的颜色
//	// settextstyle设置字体样式
//	// -nHeight指定高度
//	// -nWidth字符的平均宽度，如果为0，则比例自适应
//	// -IpszFace字体名称
//	// textheigt获取字符串实际占用的像素高度
//	// textwidth获取字符串实际占用的像素宽度
//	//控制台
//	// SHOWCONSOLE 创建图形窗口，保留控制台显示
//	// NOCLOSE 没有关闭功能
//	// NOMINIMIZE 没有最小化功能
//	//
//	setbkcolor(TRANSPARENT);
//	cleardevice();
//	setlinestyle(PS_SOLID, 10);
//	setfillcolor(GREEN);
//	setlinecolor(YELLOW);
//	circle(200,100,100);
//	fillcircle(200, 200, 100);
//	solidcircle(200, 300, 100);
//
//	//绘制文字
//	//设置文字颜色
//	//参数错误，找不到对应的函数
//	//是由于字符集问题导致
//	// 1.在字符串前面加上大写的L
//	// 2.用TEXT（）把字符串包起来，_T()
//	// 3.不需要添加任何代码
//	//
//	fillrectangle(200, 50, 500, 100);//宽度300，高度50
//	//把文字居中
//	char arr[] = "我是居中";
//	int width = textwidth(arr) / 2;
//	int height = textheight(arr) / 2;
//	settextcolor( RGB(0,128,99));
//	settextstyle(50, 0, "楷体");
//	outtextxy(width+200, height+200, "这里是居中");
//	getchar();
//	closegraph();
//	return 0;
//}


int main() {
    //图像处理
//变量名：IMAGE example IMAGE img;
//loadimage
// - pDstImg 保存图像的IMAGE对象指针
// - pImgFile 图片文件名
// - nWidth = 0 图片的拉伸宽度
// - nHeight = 0 图片的拉伸高度
// - bResize = false 是否调整IMAGE的大小以适应图片
// putimage 在当前设备上绘制指定图像
// - dstX 绘制位置的x坐标
// - dstY 绘制位置的y坐标
// - pSrcImg 要绘制的IMAGE对象指针
// - dwRop = SRCCOPY 三元光栅操作码
//  
//输出图片
    IMAGE img;//定义一个（变量）对象
    //加载图片
    
    return 0;
}


