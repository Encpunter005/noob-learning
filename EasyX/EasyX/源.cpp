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


int main() {
    //ͼ����
//��������IMAGE example IMAGE img;
//loadimage
// - pDstImg ����ͼ���IMAGE����ָ��
// - pImgFile ͼƬ�ļ���
// - nWidth = 0 ͼƬ��������
// - nHeight = 0 ͼƬ������߶�
// - bResize = false �Ƿ����IMAGE�Ĵ�С����ӦͼƬ
// putimage �ڵ�ǰ�豸�ϻ���ָ��ͼ��
// - dstX ����λ�õ�x����
// - dstY ����λ�õ�y����
// - pSrcImg Ҫ���Ƶ�IMAGE����ָ��
// - dwRop = SRCCOPY ��Ԫ��դ������
//  
//���ͼƬ
    IMAGE img;//����һ��������������
    //����ͼƬ
    
    return 0;
}


