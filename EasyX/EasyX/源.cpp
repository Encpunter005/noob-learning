#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int main()
//{
//	initgraph(640, 480);	// ������ͼ���ڣ���СΪ 640x480 ����
//	circle(200, 200, 100);	// ��Բ��Բ��(200, 200)���뾶 100
//	_getch();				// �����������
//	closegraph();			// �رջ�ͼ����
//	return 0;
//}


//int main()
//{
//	// �����������
//	srand((unsigned)time(NULL));
//
//	// ��ʼ��ͼ��ģʽ
//	initgraph(640, 480);
//
//	int  x, y;
//	char c;
//
//	settextstyle(16, 8, _T("Courier"));	// ��������
//
//	// ������ɫ
//	settextcolor(GREEN);
//	setlinecolor(BLACK);
//
//	for (int i = 0; i <= 479; i++)
//	{
//		// �����λ����ʾ���������ĸ
//		for (int j = 0; j < 3; j++)
//		{
//			x = (rand() % 80) * 8;
//			y = (rand() % 20) * 24;
//			c = (rand() % 26) + 65;
//			outtextxy(x, y, c);
//		}
//
//		// ���߲���һ��������
//		line(0, i, 639, i);
//
//		Sleep(10);					// ��ʱ
//		if (i >= 479)	i = -1;
//		if (_kbhit())	break;		// ��������˳�
//	}
//
//	// �ر�ͼ��ģʽ
//	closegraph();
//	return 0;
//}
//int main()
//{
//	// ������ͼ����
//	initgraph(640, 480);
//
//	// ����������(ͨ������������)
//	float H = 190;		// ɫ��
//	float S = 1;		// ���Ͷ�
//	float L = 0.7f;		// ����
//	for (int y = 0; y < 480; y++)
//	{
//		L += 0.0005f;
//		setlinecolor(HSLtoRGB(H, S, L));
//		line(0, y, 639, y);
//	}
//
//	// ���ʺ�(ͨ��ɫ��������)
//	H = 0;
//	S = 1;
//	L = 0.5f;
//	setlinestyle(PS_SOLID, 2);		// �����߿�Ϊ 2
//	for (int r = 400; r > 344; r--)
//	{
//		H += 5;
//		setlinecolor(HSLtoRGB(H, S, L));
//		circle(500, 480, r);
//	}
//
//	// ��������˳�
//	_getch();
//	closegraph();
//	return 0;
//}
#include <graphics.h>
#include <stdio.h>
//int main() {
//	//����һ������
//	initgraph(1280 , 720,SHOWCONSOLE);
//	//��ͼ����
//	//��Բ
//	// circle���������
//	// fillcircle()�б߿����
//	// solidcircle()�ޱ߿����
//	// ellipse����Բ
//	// pie������
//	// polygon�������
//	// rectangle������
//	// roundrect��Բ�Ƕ����
//	// line����
//	// putpixel����
//	//�ر�һ������
//	//���������ɫsetfillcolor����ɫ����
//	// ����������ɫsetlinecolor(color)
//	// ����������ʽsetlinestyle(�߶ȣ���ȣ�����)
//	//PS_SOLIDʵ��
//	// PS_DASH����
//	// PS_DOT����
//	// ���ñ�����ɫsetbkcolor
//	// ��������
//	// outtextxy��ָ��λ������ַ���
//	// settextcolor���õ�ǰ���ֵ���ɫ
//	// settextstyle����������ʽ
//	// -nHeightָ���߶�
//	// -nWidth�ַ���ƽ����ȣ����Ϊ0�����������Ӧ
//	// -IpszFace��������
//	// textheigt��ȡ�ַ���ʵ��ռ�õ����ظ߶�
//	// textwidth��ȡ�ַ���ʵ��ռ�õ����ؿ��
//	//����̨
//	// SHOWCONSOLE ����ͼ�δ��ڣ���������̨��ʾ
//	// NOCLOSE û�йرչ���
//	// NOMINIMIZE û����С������
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
//	//��������
//	//����������ɫ
//	//���������Ҳ�����Ӧ�ĺ���
//	//�������ַ������⵼��
//	// 1.���ַ���ǰ����ϴ�д��L
//	// 2.��TEXT�������ַ�����������_T()
//	// 3.����Ҫ����κδ���
//	//
//	fillrectangle(200, 50, 500, 100);//���300���߶�50
//	//�����־���
//	char arr[] = "���Ǿ���";
//	int width = textwidth(arr) / 2;
//	int height = textheight(arr) / 2;
//	settextcolor( RGB(0,128,99));
//	settextstyle(50, 0, "����");
//	outtextxy(width+200, height+200, "�����Ǿ���");
//	getchar();
//	closegraph();
//	return 0;
//}


//int main() {
//    initgraph(1280, 720, SHOWCONSOLE);
//    //ͼ����
////��������IMAGE example IMAGE img;
////loadimage
//// - pDstImg ����ͼ���IMAGE����ָ��
//// - pImgFile ͼƬ�ļ���
//// - nWidth = 0 ͼƬ��������
//// - nHeight = 0 ͼƬ������߶�
//// - bResize = false �Ƿ����IMAGE�Ĵ�С����ӦͼƬ
//// putimage �ڵ�ǰ�豸�ϻ���ָ��ͼ��
//// - dstX ����λ�õ�x����
//// - dstY ����λ�õ�y����
//// - pSrcImg Ҫ���Ƶ�IMAGE����ָ��
//// - dwRop = SRCCOPY ��Ԫ��դ������
////  
////���ͼƬ
//    IMAGE img;//����һ��������������
//    //����ͼƬ
//    //���·�� ./��ʾ��ǰ�ļ����£� ../��ǰ�ļ��е���һ��
//    //����·������Դ������������
//    loadimage(&img, "./05e693efa815d44eb023671eadf3a1d6af34cf5d.jpg");
//    putimage(0, 0, &img);
//    getchar();
//    closegraph();
//    return 0;
//}
//int main()
//{//������
////MouseHit()�ж��Ƿ��������Ϣ��������Ҽ����м䣬�ƶ���
////����������Ϣ�Ϳ��Խ��н��������Ϣ��msg = GetMouseMsg()
////�����Ϣ��Ҫ��Ա
//// - uMsh: ��ǰ�����Ϣ   ���������жϵ�ǰ�����ʲô��Ϣ
//// 	   - WM_LBUTTONDOWN ��������Ϣ
//// 	   - WM_RBUTTONDOWN ����Ҽ���Ϣ
//// - x: ��ǰ���x����
//// - y: ��ǰ���y����
//// 
//	initgraph(1280, 720, SHOWCONSOLE);
//	while (1)
//	{
//	
//	 if (MouseHit())
//	 {
//		 cleardevice();
//		MOUSEMSG msg = GetMouseMsg();
//		printf("����(%d,%d)\n", msg.x, msg.y);
//		//��Ϣ�ַ�
//		switch (msg.uMsg)
//		{
//		case WM_LBUTTONDOWN:
//			outtextxy(400, 400, "����������");
//			break;
//		case WM_RBUTTONDOWN:
//			outtextxy(600, 600, "����Ҽ�����");
//			break;
//		}
//	 }
//    } 
//	getchar();
//    closegraph();
//	return 0;
//}
//��easyx��ȡ�����Ϣ
//getch();--��Ҫͷ�ļ� conio.h
// ��Ҫ�÷���ֵ���ж�
// - ���ASC||���ַ��İ����Ƚϣ���Ҫ�������ֵ
//    - �ϣ�72
//    - �£�80
//    - ��75
//    - �ң�77
// - ���������ĸ�Ƚ�ֱ��д��ĸ������'A'
//GetAsyncKeyState(��ֵ) windows.h (Easyx�а����ⶫ������������graphics.h)
// - ��Ҫ��ֵ
//    - �ϣ� VK_UP
//    - �£� VK_DOWN
//    - �� VK_LEFT
//    - �ң� VK_RIGHT
// 
//
//��������
//BeginBatchDraw() ��ʼ������ͼ
//EndBarchDraw() ������������
//GetHWnd ��ȡ���ھ������ȡ֮�����������������
// - HWND hWnd = GetHWnd() ��ȡ���ھ��
// - �޸Ĵ��ڱ��⣺SetWindowText(hWnd,"love");
// - ����ģ̬�Ի���MessageBox(hWnd,"������Ϣ��","���Ǳ���", MB_OKCANCEL)
//
